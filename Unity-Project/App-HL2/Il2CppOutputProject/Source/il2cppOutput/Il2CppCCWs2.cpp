#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1<System.String>
struct CoroutineWrapper_1_t40CDA4BA600A8FE642D64BC6EF215F9418B482FA;
// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>
struct Func_1_t2B78484C84A1CCF2CBD874BB34F7E96C640B61D8;
// System.Func`2<Newtonsoft.Json.Linq.JObject,System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>>
struct Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6;
// System.Func`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>
struct IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_tA116A870C8332D2D64FD13D5449B11BC676AC3D3;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JObject>
struct IEnumerable_1_t0DCFA970157C54C085C46985508020B3870DD552;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t38AA7F3A5D66B962949E63E93790C6B937CB092F;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerable_1_tE5DC345F8F568F2A42204C018A91C77316032E58;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerable_1_tA1BB96EC42621E967B3F29150D04580E9F0AA770;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_t88F45A5A8435144BF830547379723DF82F9F6E8A;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct IEnumerable_1_tBD62405CA1357365B81F555154B7484C05E86D7F;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t347D3779C79809CF27B13110F173902B29B53B07;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JObject>
struct IEnumerator_1_t57D1B404AEEE5BDDAC143A08A5429F890F07C0E3;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerator_1_t81CF59A435BEF3D04A78EAB9397039E240786124;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerator_1_t7239E42796076B1877FDC6D6C93B39D12EB7925B;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerator_1_t78B0DF201FB65D302A719C5BA56604FA8F26A047;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t556F6E5384E7EA0D2E211524A603938CEA2CFDAC;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerator_1_tE36052B7F5F70AA4DD75CB3B0CB38F80113BA4A0;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB;
// System.Collections.Generic.IEnumerator`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct IEnumerator_1_tE7BB22B2A49E9C4835B3874B42B630AAE58A02C4;
// System.Collections.Generic.IEqualityComparer`1<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>>
struct IEqualityComparer_1_t5C267ADCED35D29525CA2AE101F9062205EE6CB5;
// System.Collections.Generic.IEqualityComparer`1<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>>
struct IEqualityComparer_1_tFA30B9C14A4ADC7999FD8E2A7BE4FCEB573B8220;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t14D152F51FFEB2DFB3BB3C565BF985F2F0EE1483;
// System.Collections.Generic.IEqualityComparer`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEqualityComparer_1_t82EE8319F6B992F97FFB43F058DE3B04E1A6B609;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEqualityComparer_1_t896D85956A01A502288AD97898A0695551916CA6;
// System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>>
struct IList_1_t1CB0CBB205E70D03829B15542226864F40296041;
// System.Collections.Concurrent.IProducerConsumerCollection`1<Microsoft.Geospatial.TileId>
struct IProducerConsumerCollection_1_t57F418BE91652F7FE60F8FCFAF3107857891A038;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1/NoopDisposable<System.Action>
struct NoopDisposable_t2119A9B18D4CBD171AF826162731AF12C592B800;
// System.Linq.Set`1<System.Char>
struct Set_1_t139D28099D6B0F4747BD34DCAA53914DCB8A438E;
// System.Linq.Set`1<Newtonsoft.Json.Schema.JsonSchema>
struct Set_1_tC59CD611FBC2B0231F521D7C0529BC35B14ABFDE;
// System.Linq.Set`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct Set_1_t18183E691DBFEA15B51A5E1D8A83E33FB782F746;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct Tables_t747B71EC50A5734C7A3EB95849200DD8172A8A79;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct Tables_tBE7332D926C678B9BB4319DF87347B2191B14AB2;
// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>>
struct ThreadLocal_1_tB7CD9BDDCA69AEEAD1E210D05492E9A18D1EB243;
// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<#=zG9WBI4m7na9OshAewdvflELclh5D>>
struct ThreadLocal_1_tBAD589659581A4FF7F7382ADDC4EAE087040C5B4;
// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<UnityEngine.Texture2D>>
struct ThreadLocal_1_tED51DF8719C16F200E114EF496B18E9D17CBC612;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>
struct WorkStealingQueue_tA511DDC9F674EB86ED85B4100B6245F4E973C6DC;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<#=zG9WBI4m7na9OshAewdvflELclh5D>
struct WorkStealingQueue_t3738266F5A73E317569A85FDC6B8A450D699A1FE;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<UnityEngine.Texture2D>
struct WorkStealingQueue_tF198DF56E9D77A0343B3281EAF3491AC9DB9AE4F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E;
// Newtonsoft.Json.Linq.JToken
struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t840FEC5DE0BC48F22054D70E6680386AECEA1334;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t8BBDA74686483C111074BE6BE588AB31E74B2971;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// MessagePack.Internal.AutomataDictionary/AutomataNode
struct AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026;
// TMPro.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper;
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
struct IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542;
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
struct IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69;
struct IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC;
struct IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t4690DFA1C72C7E10FA4F66DF1920EB0E37918845;
struct IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;
struct IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267;
struct IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1;
struct IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72;
struct IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;
struct IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E;
struct ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
struct IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0;
struct IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963;
struct IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD;
struct IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02;
struct IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDA59D6F156299EB4DEAE15EF336162510C2C66D2(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m87D10B3592C176980FB3334BA160D0A8F0D497AF(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m9F8155B9E4016EE9EDA3702AC225E58827E50954(IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>
struct NOVTABLE IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m636C0ED780C29F9308810FE929CA212D97320EEC(IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mC26D339653FCAF503A9CDE46865002AF5F59E43B(IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m76919B4691E63BD26224C1E0CA35EFC12D402B86(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7373A22163C85062B4E7CB4799145DA42CDB58C8(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mE284B394E3CF92BFA421B0C4F259545E384E89AB(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mE9148F0A4AE311A33EFF7F958FC377E0AB7ADFCA(IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mD5886CE3E4920A01936A06BA1915CF30037129CB(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9DF4E847B615A86C716939BC2C5FE61C8E517348(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mD27969D80A6AA31B8C41D824318BA5044197404F(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct NOVTABLE IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m6EEDEF55FBB339809F0A37C221B14CD560466329(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m8F318F58A249E654F7C48BB70641962B43B51BE7(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m26719A728F871544E5A81D675AC0C3745DCD7053(ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mC7C94BF5E03D8C5AA20FF9BE77223E1ECE3B0BD4(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m27E355E8C0523DE3F33321676087FB75E057B44A(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m28613513B6F3DE14AC503BC914AFF74AEC8E4CEC(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Char>
struct NOVTABLE IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IList>
struct NOVTABLE IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB(IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Specialized.INotifyCollectionChanged>
struct NOVTABLE IIterable_1_t07762CB5F74543474C1A0120283136AE5A2E489F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m6D7C5235F13790D5EB21725115A7BA593D5C4193(IIterator_1_t4690DFA1C72C7E10FA4F66DF1920EB0E37918845** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int16>
struct NOVTABLE IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93(IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.UInt16>
struct NOVTABLE IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92(IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IVectorView_1_tDF19789741DDFC543BE092FE627C4F581626F001 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m81C572FE9591C741899BB1DBFCBA0D16F83AFA2B(uint32_t ___index0, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m17D793E25CDC73C302DC09F9F44E3E945DB6D51B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mDE5247D2CA481566F3163DD73813D5197E9A8C9F(IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m8C2CC34D9034DFED1C049E407D18F960E9D41D65(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Byte>
struct NOVTABLE IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Char>
struct NOVTABLE IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IEnumerable>
struct NOVTABLE IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int16>
struct NOVTABLE IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m5DE9B2098D4DAE2496F90B054BE80B34EE05AD6E(uint32_t ___index0, int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0D3C459E16F5437385214CE8009FEAFB744C56C0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m8980FDBA6F7FDD65E6FBD85320B163D622B24A90(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF11922D03AA08082EED2964166D2AEC053394EA6(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Single>
struct NOVTABLE IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt16>
struct NOVTABLE IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mA95C575BD6C53B9E7AD53FB6F508E58836419330(uint32_t ___index0, uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m64559406FB2E519BECB4951A5F35F62F18F12EEE(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9D5454A1C5BC038BDB5B6102BAD3D1DFCDFEDF9C(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mCB7EC762E65C25D8AAEA65A827BB039E89203368(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Byte>
struct NOVTABLE IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Char>
struct NOVTABLE IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Int16>
struct NOVTABLE IVector_1_tA6391BBB37DE0CEA64CC41922B7A7892118AB227 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m21A64A5AF83D486418DDFD5A96DF9CC2AB161BCB(uint32_t ___index0, int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m82EFFFDAD58D38505683C8043BDF61465786307C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m90D43A547061BCF6355934785FFDA7A506AADE25(IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF2834A87BC5F671D61FBB071CE5F73CB347B8388(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m30FC58D771364F0D52F4933C1F56C6934C7C181B(uint32_t ___index0, int16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m59BED08EED09CC4C0AF4B02EB42B1388D6D35C13(uint32_t ___index0, int16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m157F65439AB020556F2CDED9AC6CE3F675C4B7AF(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mE97BCBA8A46575F179C94D9B90C8E6B29E89124A(int16_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mBA2E94039E6A020C3E742773C37507506D903024() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mB9AF03AFF31B915DD3B8F46DA020E18A81FDD518() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mD8851DBF4427DDB405A087D095A3699A08FC39E8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m7A2FD1D627344933003727CE43CCD76B39F6EB23(uint32_t ___items0ArraySize, int16_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Single>
struct NOVTABLE IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186(IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6(float ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93(uint32_t ___items0ArraySize, float* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.UInt16>
struct NOVTABLE IVector_1_tA8F16B48C1341C580045640028DEE87760451D83 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2AF0A1888621A6EA1946AE619FC477E0EA1B7091(uint32_t ___index0, uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC88BBB7810CE7621A458B5820631A1FEF19015AB(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mF8372E664CA83BE71126C53CC7B53790CAB6C216(IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF44EFA0BA311F5EE6FAA2383549CF74DF698E7FB(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mB539C3833EB47A69860D6804631D2321456D2062(uint32_t ___index0, uint16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m90BF571F390B90E1E07740FBAA029552D09E5FF4(uint32_t ___index0, uint16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m186E9595C3549E518CFBEC7A4FD9F30EFE0808BD(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0C89C6DEC024390A3A22E5B5B1472F212E08E4AC(uint16_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE7B18FB171081927B6E26B09F37B605ED777FCA3() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m6A2E16B8E0A39059A7108BBE2FCEB85B287BD05B() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mB48BAC3AC386068A22C8883DAEC282F195207FEB(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m60C4707C2DA65A588042BF2C909AD50074E51979(uint32_t ___items0ArraySize, uint16_t* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1/<Run>d__3<System.String>
struct U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1/<Run>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1/<Run>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1<T> Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1/<Run>d__3::<>4__this
	CoroutineWrapper_1_t40CDA4BA600A8FE642D64BC6EF215F9418B482FA * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F, ___U3CU3E4__this_2)); }
	inline CoroutineWrapper_1_t40CDA4BA600A8FE642D64BC6EF215F9418B482FA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CoroutineWrapper_1_t40CDA4BA600A8FE642D64BC6EF215F9418B482FA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CoroutineWrapper_1_t40CDA4BA600A8FE642D64BC6EF215F9418B482FA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Linq.JObject,Newtonsoft.Json.Linq.JProperty>
struct U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E2__current_1)); }
	inline JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___selector_5)); }
	inline Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__selector_6() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E3__selector_6)); }
	inline Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * get_U3CU3E3__selector_6() const { return ___U3CU3E3__selector_6; }
	inline Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 ** get_address_of_U3CU3E3__selector_6() { return &___U3CU3E3__selector_6; }
	inline void set_U3CU3E3__selector_6(Func_2_tD7B420C2802F34A2B71BCE7D38BB5506DAB112E6 * value)
	{
		___U3CU3E3__selector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__selector_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF, ___U3CU3E7__wrap2_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_8), (void*)value);
	}
};


// System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___selector_5)); }
	inline Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__selector_6() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E3__selector_6)); }
	inline Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * get_U3CU3E3__selector_6() const { return ___U3CU3E3__selector_6; }
	inline Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 ** get_address_of_U3CU3E3__selector_6() { return &___U3CU3E3__selector_6; }
	inline void set_U3CU3E3__selector_6(Func_2_t0C2E0A46423FDDADC2F8EFEFFE16ABE32182C417 * value)
	{
		___U3CU3E3__selector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__selector_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C, ___U3CU3E7__wrap2_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_8), (void*)value);
	}
};


// System.Linq.Enumerable/<SelectManyIterator>d__17`2<System.Type,System.Reflection.MemberInfo>
struct U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>2__current
	MemberInfo_t * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::selector
	Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * ___selector_5;
	// System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>3__selector
	Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * ___U3CU3E3__selector_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E2__current_1)); }
	inline MemberInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MemberInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MemberInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___selector_5)); }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__selector_6() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E3__selector_6)); }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * get_U3CU3E3__selector_6() const { return ___U3CU3E3__selector_6; }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 ** get_address_of_U3CU3E3__selector_6() { return &___U3CU3E3__selector_6; }
	inline void set_U3CU3E3__selector_6(Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * value)
	{
		___U3CU3E3__selector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__selector_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9, ___U3CU3E7__wrap2_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_8), (void*)value);
	}
};


// System.Linq.Enumerable/<SkipIterator>d__31`1<System.String>
struct U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<SkipIterator>d__31`1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::count
	int32_t ___count_5;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>3__count
	int32_t ___U3CU3E3__count_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::<e>5__1
	RuntimeObject* ___U3CeU3E5__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__count_6() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CU3E3__count_6)); }
	inline int32_t get_U3CU3E3__count_6() const { return ___U3CU3E3__count_6; }
	inline int32_t* get_address_of_U3CU3E3__count_6() { return &___U3CU3E3__count_6; }
	inline void set_U3CU3E3__count_6(int32_t value)
	{
		___U3CU3E3__count_6 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700, ___U3CeU3E5__1_7)); }
	inline RuntimeObject* get_U3CeU3E5__1_7() const { return ___U3CeU3E5__1_7; }
	inline RuntimeObject** get_address_of_U3CeU3E5__1_7() { return &___U3CeU3E5__1_7; }
	inline void set_U3CeU3E5__1_7(RuntimeObject* value)
	{
		___U3CeU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__1_7), (void*)value);
	}
};


// System.Linq.Enumerable/<SkipIterator>d__31`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<SkipIterator>d__31`1::<>2__current
	AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::count
	int32_t ___count_5;
	// System.Int32 System.Linq.Enumerable/<SkipIterator>d__31`1::<>3__count
	int32_t ___U3CU3E3__count_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::<e>5__1
	RuntimeObject* ___U3CeU3E5__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CU3E2__current_1)); }
	inline AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__count_6() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CU3E3__count_6)); }
	inline int32_t get_U3CU3E3__count_6() const { return ___U3CU3E3__count_6; }
	inline int32_t* get_address_of_U3CU3E3__count_6() { return &___U3CU3E3__count_6; }
	inline void set_U3CU3E3__count_6(int32_t value)
	{
		___U3CU3E3__count_6 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877, ___U3CeU3E5__1_7)); }
	inline RuntimeObject* get_U3CeU3E5__1_7() const { return ___U3CeU3E5__1_7; }
	inline RuntimeObject** get_address_of_U3CeU3E5__1_7() { return &___U3CeU3E5__1_7; }
	inline void set_U3CeU3E5__1_7(RuntimeObject* value)
	{
		___U3CeU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__1_7), (void*)value);
	}
};


// System.Linq.Enumerable/<TakeIterator>d__25`1<System.Int32>
struct U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<TakeIterator>d__25`1::<>2__current
	int32_t ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::count
	int32_t ___count_3;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__count
	int32_t ___U3CU3E3__count_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::source
	RuntimeObject* ___source_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3E2__current_1)); }
	inline int32_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline int32_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(int32_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__count_4() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3E3__count_4)); }
	inline int32_t get_U3CU3E3__count_4() const { return ___U3CU3E3__count_4; }
	inline int32_t* get_address_of_U3CU3E3__count_4() { return &___U3CU3E3__count_4; }
	inline void set_U3CU3E3__count_4(int32_t value)
	{
		___U3CU3E3__count_4 = value;
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___source_5)); }
	inline RuntimeObject* get_source_5() const { return ___source_5; }
	inline RuntimeObject** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(RuntimeObject* value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_6() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3E3__source_6)); }
	inline RuntimeObject* get_U3CU3E3__source_6() const { return ___U3CU3E3__source_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_6() { return &___U3CU3E3__source_6; }
	inline void set_U3CU3E3__source_6(RuntimeObject* value)
	{
		___U3CU3E3__source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}
};


// System.Linq.Enumerable/<TakeIterator>d__25`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<TakeIterator>d__25`1::<>2__current
	AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::count
	int32_t ___count_3;
	// System.Int32 System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__count
	int32_t ___U3CU3E3__count_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::source
	RuntimeObject* ___source_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>3__source
	RuntimeObject* ___U3CU3E3__source_6;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3E2__current_1)); }
	inline AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AutomataNode_tF2F9D3680BF50F02760BAB7C25CB759B3CCD2BA5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__count_4() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3E3__count_4)); }
	inline int32_t get_U3CU3E3__count_4() const { return ___U3CU3E3__count_4; }
	inline int32_t* get_address_of_U3CU3E3__count_4() { return &___U3CU3E3__count_4; }
	inline void set_U3CU3E3__count_4(int32_t value)
	{
		___U3CU3E3__count_4 = value;
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___source_5)); }
	inline RuntimeObject* get_source_5() const { return ___source_5; }
	inline RuntimeObject** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(RuntimeObject* value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_6() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3E3__source_6)); }
	inline RuntimeObject* get_U3CU3E3__source_6() const { return ___U3CU3E3__source_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_6() { return &___U3CU3E3__source_6; }
	inline void set_U3CU3E3__source_6(RuntimeObject* value)
	{
		___U3CU3E3__source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}
};


// System.Linq.Enumerable/<UnionIterator>d__71`1<System.Char>
struct U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	Il2CppChar ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__1
	Set_1_t139D28099D6B0F4747BD34DCAA53914DCB8A438E * ___U3CsetU3E5__1_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_8;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E2__current_1)); }
	inline Il2CppChar get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppChar* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppChar value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__comparer_4() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E3__comparer_4)); }
	inline RuntimeObject* get_U3CU3E3__comparer_4() const { return ___U3CU3E3__comparer_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__comparer_4() { return &___U3CU3E3__comparer_4; }
	inline void set_U3CU3E3__comparer_4(RuntimeObject* value)
	{
		___U3CU3E3__comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_first_5() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___first_5)); }
	inline RuntimeObject* get_first_5() const { return ___first_5; }
	inline RuntimeObject** get_address_of_first_5() { return &___first_5; }
	inline void set_first_5(RuntimeObject* value)
	{
		___first_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__first_6() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E3__first_6)); }
	inline RuntimeObject* get_U3CU3E3__first_6() const { return ___U3CU3E3__first_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__first_6() { return &___U3CU3E3__first_6; }
	inline void set_U3CU3E3__first_6(RuntimeObject* value)
	{
		___U3CU3E3__first_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__first_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsetU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CsetU3E5__1_7)); }
	inline Set_1_t139D28099D6B0F4747BD34DCAA53914DCB8A438E * get_U3CsetU3E5__1_7() const { return ___U3CsetU3E5__1_7; }
	inline Set_1_t139D28099D6B0F4747BD34DCAA53914DCB8A438E ** get_address_of_U3CsetU3E5__1_7() { return &___U3CsetU3E5__1_7; }
	inline void set_U3CsetU3E5__1_7(Set_1_t139D28099D6B0F4747BD34DCAA53914DCB8A438E * value)
	{
		___U3CsetU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsetU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_second_8() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___second_8)); }
	inline RuntimeObject* get_second_8() const { return ___second_8; }
	inline RuntimeObject** get_address_of_second_8() { return &___second_8; }
	inline void set_second_8(RuntimeObject* value)
	{
		___second_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__second_9() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E3__second_9)); }
	inline RuntimeObject* get_U3CU3E3__second_9() const { return ___U3CU3E3__second_9; }
	inline RuntimeObject** get_address_of_U3CU3E3__second_9() { return &___U3CU3E3__second_9; }
	inline void set_U3CU3E3__second_9(RuntimeObject* value)
	{
		___U3CU3E3__second_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__second_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_10() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D, ___U3CU3E7__wrap1_10)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_10() const { return ___U3CU3E7__wrap1_10; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_10() { return &___U3CU3E7__wrap1_10; }
	inline void set_U3CU3E7__wrap1_10(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_10), (void*)value);
	}
};


// System.Linq.Enumerable/<UnionIterator>d__71`1<Newtonsoft.Json.Schema.JsonSchema>
struct U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	JsonSchema_t840FEC5DE0BC48F22054D70E6680386AECEA1334 * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__1
	Set_1_tC59CD611FBC2B0231F521D7C0529BC35B14ABFDE * ___U3CsetU3E5__1_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_8;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E2__current_1)); }
	inline JsonSchema_t840FEC5DE0BC48F22054D70E6680386AECEA1334 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JsonSchema_t840FEC5DE0BC48F22054D70E6680386AECEA1334 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JsonSchema_t840FEC5DE0BC48F22054D70E6680386AECEA1334 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__comparer_4() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E3__comparer_4)); }
	inline RuntimeObject* get_U3CU3E3__comparer_4() const { return ___U3CU3E3__comparer_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__comparer_4() { return &___U3CU3E3__comparer_4; }
	inline void set_U3CU3E3__comparer_4(RuntimeObject* value)
	{
		___U3CU3E3__comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_first_5() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___first_5)); }
	inline RuntimeObject* get_first_5() const { return ___first_5; }
	inline RuntimeObject** get_address_of_first_5() { return &___first_5; }
	inline void set_first_5(RuntimeObject* value)
	{
		___first_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__first_6() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E3__first_6)); }
	inline RuntimeObject* get_U3CU3E3__first_6() const { return ___U3CU3E3__first_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__first_6() { return &___U3CU3E3__first_6; }
	inline void set_U3CU3E3__first_6(RuntimeObject* value)
	{
		___U3CU3E3__first_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__first_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsetU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CsetU3E5__1_7)); }
	inline Set_1_tC59CD611FBC2B0231F521D7C0529BC35B14ABFDE * get_U3CsetU3E5__1_7() const { return ___U3CsetU3E5__1_7; }
	inline Set_1_tC59CD611FBC2B0231F521D7C0529BC35B14ABFDE ** get_address_of_U3CsetU3E5__1_7() { return &___U3CsetU3E5__1_7; }
	inline void set_U3CsetU3E5__1_7(Set_1_tC59CD611FBC2B0231F521D7C0529BC35B14ABFDE * value)
	{
		___U3CsetU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsetU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_second_8() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___second_8)); }
	inline RuntimeObject* get_second_8() const { return ___second_8; }
	inline RuntimeObject** get_address_of_second_8() { return &___second_8; }
	inline void set_second_8(RuntimeObject* value)
	{
		___second_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__second_9() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E3__second_9)); }
	inline RuntimeObject* get_U3CU3E3__second_9() const { return ___U3CU3E3__second_9; }
	inline RuntimeObject** get_address_of_U3CU3E3__second_9() { return &___U3CU3E3__second_9; }
	inline void set_U3CU3E3__second_9(RuntimeObject* value)
	{
		___U3CU3E3__second_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__second_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_10() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E, ___U3CU3E7__wrap1_10)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_10() const { return ___U3CU3E7__wrap1_10; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_10() { return &___U3CU3E7__wrap1_10; }
	inline void set_U3CU3E7__wrap1_10(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_10), (void*)value);
	}
};


// System.Linq.Enumerable/<UnionIterator>d__71`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TSource System.Linq.Enumerable/<UnionIterator>d__71`1::<>2__current
	Solver_t8BBDA74686483C111074BE6BE588AB31E74B2971 * ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Enumerable/<UnionIterator>d__71`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::comparer
	RuntimeObject* ___comparer_3;
	// System.Collections.Generic.IEqualityComparer`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__comparer
	RuntimeObject* ___U3CU3E3__comparer_4;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::first
	RuntimeObject* ___first_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__first
	RuntimeObject* ___U3CU3E3__first_6;
	// System.Linq.Set`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<set>5__1
	Set_1_t18183E691DBFEA15B51A5E1D8A83E33FB782F746 * ___U3CsetU3E5__1_7;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::second
	RuntimeObject* ___second_8;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>3__second
	RuntimeObject* ___U3CU3E3__second_9;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E2__current_1)); }
	inline Solver_t8BBDA74686483C111074BE6BE588AB31E74B2971 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Solver_t8BBDA74686483C111074BE6BE588AB31E74B2971 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Solver_t8BBDA74686483C111074BE6BE588AB31E74B2971 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__comparer_4() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E3__comparer_4)); }
	inline RuntimeObject* get_U3CU3E3__comparer_4() const { return ___U3CU3E3__comparer_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__comparer_4() { return &___U3CU3E3__comparer_4; }
	inline void set_U3CU3E3__comparer_4(RuntimeObject* value)
	{
		___U3CU3E3__comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_first_5() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___first_5)); }
	inline RuntimeObject* get_first_5() const { return ___first_5; }
	inline RuntimeObject** get_address_of_first_5() { return &___first_5; }
	inline void set_first_5(RuntimeObject* value)
	{
		___first_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__first_6() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E3__first_6)); }
	inline RuntimeObject* get_U3CU3E3__first_6() const { return ___U3CU3E3__first_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__first_6() { return &___U3CU3E3__first_6; }
	inline void set_U3CU3E3__first_6(RuntimeObject* value)
	{
		___U3CU3E3__first_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__first_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsetU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CsetU3E5__1_7)); }
	inline Set_1_t18183E691DBFEA15B51A5E1D8A83E33FB782F746 * get_U3CsetU3E5__1_7() const { return ___U3CsetU3E5__1_7; }
	inline Set_1_t18183E691DBFEA15B51A5E1D8A83E33FB782F746 ** get_address_of_U3CsetU3E5__1_7() { return &___U3CsetU3E5__1_7; }
	inline void set_U3CsetU3E5__1_7(Set_1_t18183E691DBFEA15B51A5E1D8A83E33FB782F746 * value)
	{
		___U3CsetU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsetU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_second_8() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___second_8)); }
	inline RuntimeObject* get_second_8() const { return ___second_8; }
	inline RuntimeObject** get_address_of_second_8() { return &___second_8; }
	inline void set_second_8(RuntimeObject* value)
	{
		___second_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__second_9() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E3__second_9)); }
	inline RuntimeObject* get_U3CU3E3__second_9() const { return ___U3CU3E3__second_9; }
	inline RuntimeObject** get_address_of_U3CU3E3__second_9() { return &___U3CU3E3__second_9; }
	inline void set_U3CU3E3__second_9(RuntimeObject* value)
	{
		___U3CU3E3__second_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__second_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_10() { return static_cast<int32_t>(offsetof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9, ___U3CU3E7__wrap1_10)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_10() const { return ___U3CU3E7__wrap1_10; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_10() { return &___U3CU3E7__wrap1_10; }
	inline void set_U3CU3E7__wrap1_10(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_10), (void*)value);
	}
};


// Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::key
	RuntimeObject * ___key_5;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__key
	RuntimeObject * ___U3CU3E3__key_6;
	// System.Collections.Generic.IEnumerator`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___key_5)); }
	inline RuntimeObject * get_key_5() const { return ___key_5; }
	inline RuntimeObject ** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(RuntimeObject * value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__key_6() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E3__key_6)); }
	inline RuntimeObject * get_U3CU3E3__key_6() const { return ___U3CU3E3__key_6; }
	inline RuntimeObject ** get_address_of_U3CU3E3__key_6() { return &___U3CU3E3__key_6; }
	inline void set_U3CU3E3__key_6(RuntimeObject * value)
	{
		___U3CU3E3__key_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__key_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA, ___U3CU3E7__wrap2_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_8), (void*)value);
	}
};


// Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::key
	RuntimeObject * ___key_5;
	// System.Object Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>3__key
	RuntimeObject * ___U3CU3E3__key_6;
	// System.Collections.Generic.IEnumerator`1<T> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.Extensions/<Values>d__11`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__source_4() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E3__source_4)); }
	inline RuntimeObject* get_U3CU3E3__source_4() const { return ___U3CU3E3__source_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__source_4() { return &___U3CU3E3__source_4; }
	inline void set_U3CU3E3__source_4(RuntimeObject* value)
	{
		___U3CU3E3__source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__source_4), (void*)value);
	}

	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___key_5)); }
	inline RuntimeObject * get_key_5() const { return ___key_5; }
	inline RuntimeObject ** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(RuntimeObject * value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__key_6() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E3__key_6)); }
	inline RuntimeObject * get_U3CU3E3__key_6() const { return ___U3CU3E3__key_6; }
	inline RuntimeObject ** get_address_of_U3CU3E3__key_6() { return &___U3CU3E3__key_6; }
	inline void set_U3CU3E3__key_6(RuntimeObject * value)
	{
		___U3CU3E3__key_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__key_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A, ___U3CU3E7__wrap2_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_8), (void*)value);
	}
};


// System.ArraySegment`1/ArraySegmentEnumerator<System.Byte>
struct ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38  : public RuntimeObject
{
public:
	// T[] System.ArraySegment`1/ArraySegmentEnumerator::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.ArraySegment`1/ArraySegmentEnumerator<System.Char>
struct ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408  : public RuntimeObject
{
public:
	// T[] System.ArraySegment`1/ArraySegmentEnumerator::_array
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____array_0;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408, ____array_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__array_0() const { return ____array_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.ArraySegment`1/ArraySegmentEnumerator<System.Int16>
struct ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E  : public RuntimeObject
{
public:
	// T[] System.ArraySegment`1/ArraySegmentEnumerator::_array
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____array_0;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E, ____array_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__array_0() const { return ____array_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.ArraySegment`1/ArraySegmentEnumerator<System.Single>
struct ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89  : public RuntimeObject
{
public:
	// T[] System.ArraySegment`1/ArraySegmentEnumerator::_array
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____array_0;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89, ____array_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__array_0() const { return ____array_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.ArraySegment`1/ArraySegmentEnumerator<System.UInt16>
struct ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7  : public RuntimeObject
{
public:
	// T[] System.ArraySegment`1/ArraySegmentEnumerator::_array
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____array_0;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.ArraySegment`1/ArraySegmentEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7, ____array_0)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get__array_0() const { return ____array_0; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


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


// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>>
struct Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentBag`1<#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>
struct ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE  : public RuntimeObject
{
public:
	// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>> System.Collections.Concurrent.ConcurrentBag`1::_locals
	ThreadLocal_1_tB7CD9BDDCA69AEEAD1E210D05492E9A18D1EB243 * ____locals_0;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1::_workStealingQueues
	WorkStealingQueue_tA511DDC9F674EB86ED85B4100B6245F4E973C6DC * ____workStealingQueues_1;

public:
	inline static int32_t get_offset_of__locals_0() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE, ____locals_0)); }
	inline ThreadLocal_1_tB7CD9BDDCA69AEEAD1E210D05492E9A18D1EB243 * get__locals_0() const { return ____locals_0; }
	inline ThreadLocal_1_tB7CD9BDDCA69AEEAD1E210D05492E9A18D1EB243 ** get_address_of__locals_0() { return &____locals_0; }
	inline void set__locals_0(ThreadLocal_1_tB7CD9BDDCA69AEEAD1E210D05492E9A18D1EB243 * value)
	{
		____locals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locals_0), (void*)value);
	}

	inline static int32_t get_offset_of__workStealingQueues_1() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE, ____workStealingQueues_1)); }
	inline WorkStealingQueue_tA511DDC9F674EB86ED85B4100B6245F4E973C6DC * get__workStealingQueues_1() const { return ____workStealingQueues_1; }
	inline WorkStealingQueue_tA511DDC9F674EB86ED85B4100B6245F4E973C6DC ** get_address_of__workStealingQueues_1() { return &____workStealingQueues_1; }
	inline void set__workStealingQueues_1(WorkStealingQueue_tA511DDC9F674EB86ED85B4100B6245F4E973C6DC * value)
	{
		____workStealingQueues_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workStealingQueues_1), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentBag`1<#=zG9WBI4m7na9OshAewdvflELclh5D>
struct ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938  : public RuntimeObject
{
public:
	// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>> System.Collections.Concurrent.ConcurrentBag`1::_locals
	ThreadLocal_1_tBAD589659581A4FF7F7382ADDC4EAE087040C5B4 * ____locals_0;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1::_workStealingQueues
	WorkStealingQueue_t3738266F5A73E317569A85FDC6B8A450D699A1FE * ____workStealingQueues_1;

public:
	inline static int32_t get_offset_of__locals_0() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938, ____locals_0)); }
	inline ThreadLocal_1_tBAD589659581A4FF7F7382ADDC4EAE087040C5B4 * get__locals_0() const { return ____locals_0; }
	inline ThreadLocal_1_tBAD589659581A4FF7F7382ADDC4EAE087040C5B4 ** get_address_of__locals_0() { return &____locals_0; }
	inline void set__locals_0(ThreadLocal_1_tBAD589659581A4FF7F7382ADDC4EAE087040C5B4 * value)
	{
		____locals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locals_0), (void*)value);
	}

	inline static int32_t get_offset_of__workStealingQueues_1() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938, ____workStealingQueues_1)); }
	inline WorkStealingQueue_t3738266F5A73E317569A85FDC6B8A450D699A1FE * get__workStealingQueues_1() const { return ____workStealingQueues_1; }
	inline WorkStealingQueue_t3738266F5A73E317569A85FDC6B8A450D699A1FE ** get_address_of__workStealingQueues_1() { return &____workStealingQueues_1; }
	inline void set__workStealingQueues_1(WorkStealingQueue_t3738266F5A73E317569A85FDC6B8A450D699A1FE * value)
	{
		____workStealingQueues_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workStealingQueues_1), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentBag`1<UnityEngine.Texture2D>
struct ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3  : public RuntimeObject
{
public:
	// System.Threading.ThreadLocal`1<System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>> System.Collections.Concurrent.ConcurrentBag`1::_locals
	ThreadLocal_1_tED51DF8719C16F200E114EF496B18E9D17CBC612 * ____locals_0;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1::_workStealingQueues
	WorkStealingQueue_tF198DF56E9D77A0343B3281EAF3491AC9DB9AE4F * ____workStealingQueues_1;

public:
	inline static int32_t get_offset_of__locals_0() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3, ____locals_0)); }
	inline ThreadLocal_1_tED51DF8719C16F200E114EF496B18E9D17CBC612 * get__locals_0() const { return ____locals_0; }
	inline ThreadLocal_1_tED51DF8719C16F200E114EF496B18E9D17CBC612 ** get_address_of__locals_0() { return &____locals_0; }
	inline void set__locals_0(ThreadLocal_1_tED51DF8719C16F200E114EF496B18E9D17CBC612 * value)
	{
		____locals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locals_0), (void*)value);
	}

	inline static int32_t get_offset_of__workStealingQueues_1() { return static_cast<int32_t>(offsetof(ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3, ____workStealingQueues_1)); }
	inline WorkStealingQueue_tF198DF56E9D77A0343B3281EAF3491AC9DB9AE4F * get__workStealingQueues_1() const { return ____workStealingQueues_1; }
	inline WorkStealingQueue_tF198DF56E9D77A0343B3281EAF3491AC9DB9AE4F ** get_address_of__workStealingQueues_1() { return &____workStealingQueues_1; }
	inline void set__workStealingQueues_1(WorkStealingQueue_tF198DF56E9D77A0343B3281EAF3491AC9DB9AE4F * value)
	{
		____workStealingQueues_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workStealingQueues_1), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t747B71EC50A5734C7A3EB95849200DD8172A8A79 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F, ____tables_0)); }
	inline Tables_t747B71EC50A5734C7A3EB95849200DD8172A8A79 * get__tables_0() const { return ____tables_0; }
	inline Tables_t747B71EC50A5734C7A3EB95849200DD8172A8A79 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t747B71EC50A5734C7A3EB95849200DD8172A8A79 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tBE7332D926C678B9BB4319DF87347B2191B14AB2 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44, ____tables_0)); }
	inline Tables_tBE7332D926C678B9BB4319DF87347B2191B14AB2 * get__tables_0() const { return ____tables_0; }
	inline Tables_tBE7332D926C678B9BB4319DF87347B2191B14AB2 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tBE7332D926C678B9BB4319DF87347B2191B14AB2 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
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


// System.ArraySegment`1<System.Char>
struct ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B 
{
public:
	// T[] System.ArraySegment`1::_array
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B, ____array_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__array_0() const { return ____array_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.ArraySegment`1<System.Int16>
struct ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725 
{
public:
	// T[] System.ArraySegment`1::_array
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725, ____array_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__array_0() const { return ____array_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.ArraySegment`1<System.Single>
struct ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D 
{
public:
	// T[] System.ArraySegment`1::_array
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D, ____array_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__array_0() const { return ____array_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.ArraySegment`1<System.UInt16>
struct ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403 
{
public:
	// T[] System.ArraySegment`1::_array
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403, ____array_0)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get__array_0() const { return ____array_0; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 
{
public:
	// TMPro.FloatTween/FloatTweenCallback TMPro.FloatTween::m_Target
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	// System.Single TMPro.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single TMPro.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single TMPro.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean TMPro.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Target_0)); }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_pinvoke
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_com
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Target_0)); }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_pinvoke
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_com
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
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


// TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T TMPro.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  ___tweenInfo_2;
	// System.Single TMPro.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___tweenInfo_2)); }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___tweenInfo_2)); }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// System.Collections.Concurrent.BlockingCollection`1<Microsoft.Geospatial.TileId>
struct BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.IProducerConsumerCollection`1<T> System.Collections.Concurrent.BlockingCollection`1::_collection
	RuntimeObject* ____collection_0;
	// System.Int32 System.Collections.Concurrent.BlockingCollection`1::_boundedCapacity
	int32_t ____boundedCapacity_1;
	// System.Threading.SemaphoreSlim System.Collections.Concurrent.BlockingCollection`1::_freeNodes
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____freeNodes_3;
	// System.Threading.SemaphoreSlim System.Collections.Concurrent.BlockingCollection`1::_occupiedNodes
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____occupiedNodes_4;
	// System.Boolean System.Collections.Concurrent.BlockingCollection`1::_isDisposed
	bool ____isDisposed_5;
	// System.Threading.CancellationTokenSource System.Collections.Concurrent.BlockingCollection`1::_consumersCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____consumersCancellationTokenSource_6;
	// System.Threading.CancellationTokenSource System.Collections.Concurrent.BlockingCollection`1::_producersCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____producersCancellationTokenSource_7;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.BlockingCollection`1::_currentAdders
	int32_t ____currentAdders_8;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____collection_0)); }
	inline RuntimeObject* get__collection_0() const { return ____collection_0; }
	inline RuntimeObject** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(RuntimeObject* value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collection_0), (void*)value);
	}

	inline static int32_t get_offset_of__boundedCapacity_1() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____boundedCapacity_1)); }
	inline int32_t get__boundedCapacity_1() const { return ____boundedCapacity_1; }
	inline int32_t* get_address_of__boundedCapacity_1() { return &____boundedCapacity_1; }
	inline void set__boundedCapacity_1(int32_t value)
	{
		____boundedCapacity_1 = value;
	}

	inline static int32_t get_offset_of__freeNodes_3() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____freeNodes_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__freeNodes_3() const { return ____freeNodes_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__freeNodes_3() { return &____freeNodes_3; }
	inline void set__freeNodes_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____freeNodes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____freeNodes_3), (void*)value);
	}

	inline static int32_t get_offset_of__occupiedNodes_4() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____occupiedNodes_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__occupiedNodes_4() const { return ____occupiedNodes_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__occupiedNodes_4() { return &____occupiedNodes_4; }
	inline void set__occupiedNodes_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____occupiedNodes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____occupiedNodes_4), (void*)value);
	}

	inline static int32_t get_offset_of__isDisposed_5() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____isDisposed_5)); }
	inline bool get__isDisposed_5() const { return ____isDisposed_5; }
	inline bool* get_address_of__isDisposed_5() { return &____isDisposed_5; }
	inline void set__isDisposed_5(bool value)
	{
		____isDisposed_5 = value;
	}

	inline static int32_t get_offset_of__consumersCancellationTokenSource_6() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____consumersCancellationTokenSource_6)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__consumersCancellationTokenSource_6() const { return ____consumersCancellationTokenSource_6; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__consumersCancellationTokenSource_6() { return &____consumersCancellationTokenSource_6; }
	inline void set__consumersCancellationTokenSource_6(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____consumersCancellationTokenSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consumersCancellationTokenSource_6), (void*)value);
	}

	inline static int32_t get_offset_of__producersCancellationTokenSource_7() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____producersCancellationTokenSource_7)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__producersCancellationTokenSource_7() const { return ____producersCancellationTokenSource_7; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__producersCancellationTokenSource_7() { return &____producersCancellationTokenSource_7; }
	inline void set__producersCancellationTokenSource_7(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____producersCancellationTokenSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____producersCancellationTokenSource_7), (void*)value);
	}

	inline static int32_t get_offset_of__currentAdders_8() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C, ____currentAdders_8)); }
	inline int32_t get__currentAdders_8() const { return ____currentAdders_8; }
	inline int32_t* get_address_of__currentAdders_8() { return &____currentAdders_8; }
	inline void set__currentAdders_8(int32_t value)
	{
		____currentAdders_8 = value;
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
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

// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Target_0)); }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_StartColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TargetColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_pinvoke
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_com
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
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

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___tweenInfo_2)); }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m6D7C5235F13790D5EB21725115A7BA593D5C4193_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t4690DFA1C72C7E10FA4F66DF1920EB0E37918845** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, uint8_t* ___items0);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppChar* ___items0);
il2cpp_hresult_t IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m21A64A5AF83D486418DDFD5A96DF9CC2AB161BCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, int16_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m82EFFFDAD58D38505683C8043BDF61465786307C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m90D43A547061BCF6355934785FFDA7A506AADE25_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mF2834A87BC5F671D61FBB071CE5F73CB347B8388_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m30FC58D771364F0D52F4933C1F56C6934C7C181B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, int16_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m59BED08EED09CC4C0AF4B02EB42B1388D6D35C13_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, int16_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m157F65439AB020556F2CDED9AC6CE3F675C4B7AF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_mE97BCBA8A46575F179C94D9B90C8E6B29E89124A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mBA2E94039E6A020C3E742773C37507506D903024_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mB9AF03AFF31B915DD3B8F46DA020E18A81FDD518_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mD8851DBF4427DDB405A087D095A3699A08FC39E8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m7A2FD1D627344933003727CE43CCD76B39F6EB23_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, int16_t* ___items0);
il2cpp_hresult_t IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m5DE9B2098D4DAE2496F90B054BE80B34EE05AD6E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, int16_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m0D3C459E16F5437385214CE8009FEAFB744C56C0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m8980FDBA6F7FDD65E6FBD85320B163D622B24A90_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mF11922D03AA08082EED2964166D2AEC053394EA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, float* ___items0);
il2cpp_hresult_t IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m2AF0A1888621A6EA1946AE619FC477E0EA1B7091_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint16_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_mC88BBB7810CE7621A458B5820631A1FEF19015AB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mF8372E664CA83BE71126C53CC7B53790CAB6C216_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mF44EFA0BA311F5EE6FAA2383549CF74DF698E7FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mB539C3833EB47A69860D6804631D2321456D2062_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint16_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m90BF571F390B90E1E07740FBAA029552D09E5FF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint16_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m186E9595C3549E518CFBEC7A4FD9F30EFE0808BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0C89C6DEC024390A3A22E5B5B1472F212E08E4AC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint16_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mE7B18FB171081927B6E26B09F37B605ED777FCA3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m6A2E16B8E0A39059A7108BBE2FCEB85B287BD05B_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mB48BAC3AC386068A22C8883DAEC282F195207FEB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m60C4707C2DA65A588042BF2C909AD50074E51979_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, uint16_t* ___items0);
il2cpp_hresult_t IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mA95C575BD6C53B9E7AD53FB6F508E58836419330_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint16_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m64559406FB2E519BECB4951A5F35F62F18F12EEE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m9D5454A1C5BC038BDB5B6102BAD3D1DFCDFEDF9C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mCB7EC762E65C25D8AAEA65A827BB039E89203368_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_m81C572FE9591C741899BB1DBFCBA0D16F83AFA2B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m17D793E25CDC73C302DC09F9F44E3E945DB6D51B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mDE5247D2CA481566F3163DD73813D5197E9A8C9F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m8C2CC34D9034DFED1C049E407D18F960E9D41D65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_gshared (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21 (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1 (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242 (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836 (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245 (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/CoroutineWrapper`1/<Run>d__3<System.String>
struct U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunU3Ed__3_t411765A440D86FF06801A7FE4FACC0FE0F9E8D1F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Linq.JObject,Newtonsoft.Json.Linq.JProperty>
struct U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD, IIterable_1_t07762CB5F74543474C1A0120283136AE5A2E489F, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t07762CB5F74543474C1A0120283136AE5A2E489F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t07762CB5F74543474C1A0120283136AE5A2E489F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(8);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IIterable_1_tDA0D1077EFCD7389A5AD5BF4D598F22A450175CD::IID;
		interfaceIds[5] = IIterable_1_t07762CB5F74543474C1A0120283136AE5A2E489F::IID;
		interfaceIds[6] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[7] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 8;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB(IIterator_1_t76B4F2A2B99659B935148C20E12CDDF5018A3267** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5AA74545514CBE1B8F27A3AD8AB35879FA66F2BB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m6D7C5235F13790D5EB21725115A7BA593D5C4193(IIterator_1_t4690DFA1C72C7E10FA4F66DF1920EB0E37918845** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m6D7C5235F13790D5EB21725115A7BA593D5C4193_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_t716BB282C9FE3B4CC24BE49A24D6CBB796774DBF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<Newtonsoft.Json.Schema.JsonSchemaModel,System.String>
struct U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_tC14843AA596D3F80DEF096FBE976B17E3FDCD02C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SelectManyIterator>d__17`2<System.Type,System.Reflection.MemberInfo>
struct U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSelectManyIteratorU3Ed__17_2_t79984932BE3323AB8045164831A328994FF903C9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SkipIterator>d__31`1<System.String>
struct U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSkipIteratorU3Ed__31_1_tFDE7B2573F4515CEF84E2CBD586E3C604EDA8700_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<SkipIterator>d__31`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSkipIteratorU3Ed__31_1_t1E83C86EB48A4ED8E70889A53C7805651DF74877_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<TakeIterator>d__25`1<System.Int32>
struct U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTakeIteratorU3Ed__25_1_t1CE5AE6AAC5CE531E56CCD27DFD569547F52594F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<TakeIterator>d__25`1<MessagePack.Internal.AutomataDictionary/AutomataNode>
struct U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTakeIteratorU3Ed__25_1_t34ADBABE238AD65B7FB75F8D005DA041F3899ED6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<System.Char>
struct U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper>, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_t6FBFE88B7B754D198F4C625BC1257EF00638E76D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<Newtonsoft.Json.Schema.JsonSchema>
struct U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_t1D2D2DC489605D9B54CE6993464E5CF2A682BF0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Enumerable/<UnionIterator>d__71`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUnionIteratorU3Ed__71_1_t0B4DB98534B717ED8A45780EB58E66AEEC1D4FE9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CValuesU3Ed__11_2_tB05EC93B4F6AE09D461F562460EEDA31A9A251AA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken>
struct U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CValuesU3Ed__11_2_tD66ED92D3BEE5183A71FDB6D597CC7B0A4A8A35A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1/ArraySegmentEnumerator<System.Byte>
struct ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegmentEnumerator_t1E45F6803A11BEDF582F9677B424D74E27EA1D38_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1/ArraySegmentEnumerator<System.Char>
struct ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegmentEnumerator_t096CAA58F4A6CD54656B2A56FE3EBC70942D8408_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1/ArraySegmentEnumerator<System.Int16>
struct ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegmentEnumerator_tF3592DA1B33DA8B1EA6E06A99638C810B37E3E4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1/ArraySegmentEnumerator<System.Single>
struct ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegmentEnumerator_t3BADA6E6979B60E0264BF54B40E1B9EC7D3F8F89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1/ArraySegmentEnumerator<System.UInt16>
struct ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegmentEnumerator_tBDEA5FE0FF41966D8362009A64B13C06C2ACF3B7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper>, IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD
{
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID;
		interfaceIds[1] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.Char>
struct ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper>, IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963
{
	inline ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID;
		interfaceIds[1] = IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.Int16>
struct ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper>, IVector_1_tA6391BBB37DE0CEA64CC41922B7A7892118AB227, IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02
{
	inline ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tA6391BBB37DE0CEA64CC41922B7A7892118AB227::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tA6391BBB37DE0CEA64CC41922B7A7892118AB227*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IVector_1_tA6391BBB37DE0CEA64CC41922B7A7892118AB227::IID;
		interfaceIds[1] = IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m21A64A5AF83D486418DDFD5A96DF9CC2AB161BCB(uint32_t ___index0, int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m21A64A5AF83D486418DDFD5A96DF9CC2AB161BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m82EFFFDAD58D38505683C8043BDF61465786307C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m82EFFFDAD58D38505683C8043BDF61465786307C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m90D43A547061BCF6355934785FFDA7A506AADE25(IVectorView_1_t5D2E617B2F06AE1988AD1011CD05B7B988EBAC02** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m90D43A547061BCF6355934785FFDA7A506AADE25_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF2834A87BC5F671D61FBB071CE5F73CB347B8388(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mF2834A87BC5F671D61FBB071CE5F73CB347B8388_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m30FC58D771364F0D52F4933C1F56C6934C7C181B(uint32_t ___index0, int16_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m30FC58D771364F0D52F4933C1F56C6934C7C181B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m59BED08EED09CC4C0AF4B02EB42B1388D6D35C13(uint32_t ___index0, int16_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m59BED08EED09CC4C0AF4B02EB42B1388D6D35C13_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m157F65439AB020556F2CDED9AC6CE3F675C4B7AF(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m157F65439AB020556F2CDED9AC6CE3F675C4B7AF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mE97BCBA8A46575F179C94D9B90C8E6B29E89124A(int16_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_mE97BCBA8A46575F179C94D9B90C8E6B29E89124A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mBA2E94039E6A020C3E742773C37507506D903024() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mBA2E94039E6A020C3E742773C37507506D903024_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mB9AF03AFF31B915DD3B8F46DA020E18A81FDD518() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mB9AF03AFF31B915DD3B8F46DA020E18A81FDD518_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mD8851DBF4427DDB405A087D095A3699A08FC39E8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mD8851DBF4427DDB405A087D095A3699A08FC39E8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m7A2FD1D627344933003727CE43CCD76B39F6EB23(uint32_t ___items0ArraySize, int16_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m7A2FD1D627344933003727CE43CCD76B39F6EB23_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93(IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m5DE9B2098D4DAE2496F90B054BE80B34EE05AD6E(uint32_t ___index0, int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m5DE9B2098D4DAE2496F90B054BE80B34EE05AD6E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0D3C459E16F5437385214CE8009FEAFB744C56C0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0D3C459E16F5437385214CE8009FEAFB744C56C0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m8980FDBA6F7FDD65E6FBD85320B163D622B24A90(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m8980FDBA6F7FDD65E6FBD85320B163D622B24A90_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF11922D03AA08082EED2964166D2AEC053394EA6(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mF11922D03AA08082EED2964166D2AEC053394EA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_t78A71E7DF1D6348D532C6118E2E57B701FA6C725_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.Single>
struct ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper>, IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D, IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0
{
	inline ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D::IID;
		interfaceIds[1] = IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71(uint32_t ___index0, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186(IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4(float ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD(uint32_t ___index0, float ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2(uint32_t ___index0, float ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6(float ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93(uint32_t ___items0ArraySize, float* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E(uint32_t ___index0, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97(float ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_tA9DCBE41500C0924301C822564C414F86939E64D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ArraySegment`1<System.UInt16>
struct ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper>, IVector_1_tA8F16B48C1341C580045640028DEE87760451D83, IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA
{
	inline ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tA8F16B48C1341C580045640028DEE87760451D83::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tA8F16B48C1341C580045640028DEE87760451D83*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IVector_1_tA8F16B48C1341C580045640028DEE87760451D83::IID;
		interfaceIds[1] = IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2AF0A1888621A6EA1946AE619FC477E0EA1B7091(uint32_t ___index0, uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m2AF0A1888621A6EA1946AE619FC477E0EA1B7091_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC88BBB7810CE7621A458B5820631A1FEF19015AB(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_mC88BBB7810CE7621A458B5820631A1FEF19015AB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mF8372E664CA83BE71126C53CC7B53790CAB6C216(IVectorView_1_t649971BCE1FED1D430378F83FAD9F70E533CC2DA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mF8372E664CA83BE71126C53CC7B53790CAB6C216_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF44EFA0BA311F5EE6FAA2383549CF74DF698E7FB(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mF44EFA0BA311F5EE6FAA2383549CF74DF698E7FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mB539C3833EB47A69860D6804631D2321456D2062(uint32_t ___index0, uint16_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mB539C3833EB47A69860D6804631D2321456D2062_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m90BF571F390B90E1E07740FBAA029552D09E5FF4(uint32_t ___index0, uint16_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m90BF571F390B90E1E07740FBAA029552D09E5FF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m186E9595C3549E518CFBEC7A4FD9F30EFE0808BD(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m186E9595C3549E518CFBEC7A4FD9F30EFE0808BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0C89C6DEC024390A3A22E5B5B1472F212E08E4AC(uint16_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0C89C6DEC024390A3A22E5B5B1472F212E08E4AC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE7B18FB171081927B6E26B09F37B605ED777FCA3() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mE7B18FB171081927B6E26B09F37B605ED777FCA3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m6A2E16B8E0A39059A7108BBE2FCEB85B287BD05B() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m6A2E16B8E0A39059A7108BBE2FCEB85B287BD05B_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mB48BAC3AC386068A22C8883DAEC282F195207FEB(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mB48BAC3AC386068A22C8883DAEC282F195207FEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m60C4707C2DA65A588042BF2C909AD50074E51979(uint32_t ___items0ArraySize, uint16_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m60C4707C2DA65A588042BF2C909AD50074E51979_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92(IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mA95C575BD6C53B9E7AD53FB6F508E58836419330(uint32_t ___index0, uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mA95C575BD6C53B9E7AD53FB6F508E58836419330_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m64559406FB2E519BECB4951A5F35F62F18F12EEE(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m64559406FB2E519BECB4951A5F35F62F18F12EEE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9D5454A1C5BC038BDB5B6102BAD3D1DFCDFEDF9C(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m9D5454A1C5BC038BDB5B6102BAD3D1DFCDFEDF9C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mCB7EC762E65C25D8AAEA65A827BB039E89203368(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mCB7EC762E65C25D8AAEA65A827BB039E89203368_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArraySegment_1_t25C69A32F01EE07866E151F2AE7046AFCFACF403_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB * __thisValue = (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A * __thisValue = (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 * __thisValue = (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __thisValue = (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 * __thisValue = (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __thisValue = (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __thisValue = (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.BlockingCollection`1<Microsoft.Geospatial.TileId>
struct BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlockingCollection_1_t1E3976526E5D7B07CD24E0E93CA3B66611AA222C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>
struct ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ChangeTokenRegistration_1_t1735D29039312E132F599411FA35864BF8E54022_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>>
struct Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper>, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IVectorView_1_tDF19789741DDFC543BE092FE627C4F581626F001, IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A
{
	inline Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tDF19789741DDFC543BE092FE627C4F581626F001::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tDF19789741DDFC543BE092FE627C4F581626F001*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[1] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[4] = IVectorView_1_tDF19789741DDFC543BE092FE627C4F581626F001::IID;
		interfaceIds[5] = IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m81C572FE9591C741899BB1DBFCBA0D16F83AFA2B(uint32_t ___index0, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m81C572FE9591C741899BB1DBFCBA0D16F83AFA2B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m17D793E25CDC73C302DC09F9F44E3E945DB6D51B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m17D793E25CDC73C302DC09F9F44E3E945DB6D51B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mDE5247D2CA481566F3163DD73813D5197E9A8C9F(IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mDE5247D2CA481566F3163DD73813D5197E9A8C9F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m8C2CC34D9034DFED1C049E407D18F960E9D41D65(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m8C2CC34D9034DFED1C049E407D18F960E9D41D65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentBag`1<#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>
struct ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentBag_1_tF8D33BBC8ECD272636260D45B294C132A53DACAE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentBag`1<#=zG9WBI4m7na9OshAewdvflELclh5D>
struct ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentBag_1_t66072727A1A8A1B068B79661CA28E0E7658C3938_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentBag`1<UnityEngine.Texture2D>
struct ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentBag_1_t604CD69FFC95DB168845C12EC6F4E1A1FF98DAB3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.String,System.String>,System.Type>
struct ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tEAC1D5266F6A9205840ED3FDE3ECACDF3CAD563F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Newtonsoft.Json.Utilities.StructMultiKey`2<System.Type,Newtonsoft.Json.Serialization.NamingStrategy>,Newtonsoft.Json.Utilities.EnumInfo>
struct ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t765F424C8EE5EFF8BEF90F5220D868B41092AF44_ComCallableWrapper(obj));
}
