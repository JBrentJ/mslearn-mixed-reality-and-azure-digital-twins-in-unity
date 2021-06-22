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

// System.Action`1<System.Guid>
struct Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs>
struct EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession>
struct List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t6DACBE605004C53E8318856EB2DE9594F643737D;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.TextureTileLayer>
struct List_1_t9ED25B1EA3C04E1D8DEF70AC2DD47F2635B3A46D;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Diagnostics.Tracing.EtwSession[]
struct EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Diagnostics.Tracing.EventSource/EventMetadata[]
struct EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Diagnostics.Tracing.ActivityTracker
struct ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Xml.CharEntityEncoderFallback
struct CharEntityEncoderFallback_t4D5B1863C30C436F12B2BE9E8EE22193E27960EE;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Security.Cryptography.DESTransform
struct DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Diagnostics.Tracing.EventCommandEventArgs
struct EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F;
// System.Diagnostics.Tracing.EventDispatcher
struct EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81;
// System.Exception
struct Exception_t;
// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_tE70F873314496D11A4823BE35556E4F03FD47573;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tE715F6572D858174C1BDCF0076B3C6415B226CD0;
// Newtonsoft.Json.JsonReader
struct JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE;
// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.XmlRawWriterBase64Encoder
struct XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB;
// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;

IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED(uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB(IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue) = 0;
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
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.String>
struct NOVTABLE IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.String>
struct NOVTABLE IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC(IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA(uint32_t ___items0ArraySize, Il2CppHString* ___items0) = 0;
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


// Microsoft.Maps.Unity.TileLayerList`1<Microsoft.Maps.Unity.TextureTileLayer>
struct TileLayerList_1_t72863F2FAC1D1D555E971285A798E9F315988218  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Microsoft.Maps.Unity.TileLayerList`1::_list
	List_1_t9ED25B1EA3C04E1D8DEF70AC2DD47F2635B3A46D * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(TileLayerList_1_t72863F2FAC1D1D555E971285A798E9F315988218, ____list_0)); }
	inline List_1_t9ED25B1EA3C04E1D8DEF70AC2DD47F2635B3A46D * get__list_0() const { return ____list_0; }
	inline List_1_t9ED25B1EA3C04E1D8DEF70AC2DD47F2635B3A46D ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(List_1_t9ED25B1EA3C04E1D8DEF70AC2DD47F2635B3A46D * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.Net.Http.HttpContent
struct HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6  : public RuntimeObject
{
public:
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A * ___buffer_0;
	// System.IO.Stream System.Net.Http.HttpContent::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_2;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_tE70F873314496D11A4823BE35556E4F03FD47573 * ___headers_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6, ___buffer_0)); }
	inline FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A * get_buffer_0() const { return ___buffer_0; }
	inline FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}

	inline static int32_t get_offset_of_headers_3() { return static_cast<int32_t>(offsetof(HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6, ___headers_3)); }
	inline HttpContentHeaders_tE70F873314496D11A4823BE35556E4F03FD47573 * get_headers_3() const { return ___headers_3; }
	inline HttpContentHeaders_tE70F873314496D11A4823BE35556E4F03FD47573 ** get_address_of_headers_3() { return &___headers_3; }
	inline void set_headers_3(HttpContentHeaders_tE70F873314496D11A4823BE35556E4F03FD47573 * value)
	{
		___headers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_3), (void*)value);
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


// System.Collections.Specialized.StringCollection
struct StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E, ___data_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_data_0() const { return ___data_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Diagnostics.TraceListenerCollection::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
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

// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___writeNodeBuffer_0;

public:
	inline static int32_t get_offset_of_writeNodeBuffer_0() { return static_cast<int32_t>(offsetof(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D, ___writeNodeBuffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_writeNodeBuffer_0() const { return ___writeNodeBuffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_writeNodeBuffer_0() { return &___writeNodeBuffer_0; }
	inline void set_writeNodeBuffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___writeNodeBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeNodeBuffer_0), (void*)value);
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


// System.Net.Http.ByteArrayContent
struct ByteArrayContent_t8F76C95EBA054A90B36A6B9EDC58CD1200ED5277  : public HttpContent_tD8845E4F14BA310E60D340FB2673D36103A802C6
{
public:
	// System.Byte[] System.Net.Http.ByteArrayContent::content
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___content_4;
	// System.Int32 System.Net.Http.ByteArrayContent::offset
	int32_t ___offset_5;
	// System.Int32 System.Net.Http.ByteArrayContent::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(ByteArrayContent_t8F76C95EBA054A90B36A6B9EDC58CD1200ED5277, ___content_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_content_4() const { return ___content_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(ByteArrayContent_t8F76C95EBA054A90B36A6B9EDC58CD1200ED5277, ___offset_5)); }
	inline int32_t get_offset_5() const { return ___offset_5; }
	inline int32_t* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(int32_t value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(ByteArrayContent_t8F76C95EBA054A90B36A6B9EDC58CD1200ED5277, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Diagnostics.Tracing.SessionMask
struct SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C 
{
public:
	// System.UInt32 System.Diagnostics.Tracing.SessionMask::m_mask
	uint32_t ___m_mask_0;

public:
	inline static int32_t get_offset_of_m_mask_0() { return static_cast<int32_t>(offsetof(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C, ___m_mask_0)); }
	inline uint32_t get_m_mask_0() const { return ___m_mask_0; }
	inline uint32_t* get_address_of_m_mask_0() { return &___m_mask_0; }
	inline void set_m_mask_0(uint32_t value)
	{
		___m_mask_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
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

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8  : public TileLayerList_1_t72863F2FAC1D1D555E971285A798E9F315988218
{
public:

public:
};


// Windows.Foundation.TimeSpan
struct TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};


// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
	}
};


// UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_History
	InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC * ___m_History_0;
	// UnityEngine.InputSystem.EnhancedTouch.Finger UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Finger
	Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A * ___m_Finger_1;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Count
	int32_t ___m_Count_2;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_StartIndex
	int32_t ___m_StartIndex_3;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Version
	uint32_t ___m_Version_4;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0, ___m_History_0)); }
	inline InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Finger_1() { return static_cast<int32_t>(offsetof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0, ___m_Finger_1)); }
	inline Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A * get_m_Finger_1() const { return ___m_Finger_1; }
	inline Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A ** get_address_of_m_Finger_1() { return &___m_Finger_1; }
	inline void set_m_Finger_1(Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A * value)
	{
		___m_Finger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Finger_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_2() { return static_cast<int32_t>(offsetof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0, ___m_Count_2)); }
	inline int32_t get_m_Count_2() const { return ___m_Count_2; }
	inline int32_t* get_address_of_m_Count_2() { return &___m_Count_2; }
	inline void set_m_Count_2(int32_t value)
	{
		___m_Count_2 = value;
	}

	inline static int32_t get_offset_of_m_StartIndex_3() { return static_cast<int32_t>(offsetof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0, ___m_StartIndex_3)); }
	inline int32_t get_m_StartIndex_3() const { return ___m_StartIndex_3; }
	inline int32_t* get_address_of_m_StartIndex_3() { return &___m_StartIndex_3; }
	inline void set_m_StartIndex_3(int32_t value)
	{
		___m_StartIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_Version_4() { return static_cast<int32_t>(offsetof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0, ___m_Version_4)); }
	inline uint32_t get_m_Version_4() const { return ___m_Version_4; }
	inline uint32_t* get_address_of_m_Version_4() { return &___m_Version_4; }
	inline void set_m_Version_4(uint32_t value)
	{
		___m_Version_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_marshaled_pinvoke
{
	InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC * ___m_History_0;
	Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A * ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_marshaled_com
{
	InputStateHistory_1_tD53CE78DB75D961D18AE4EEB0883DA027D8298EC * ___m_History_0;
	Finger_t267DA0AC5DD1E558C95EC8736787F5237A8DBA7A * ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Xml.XmlCharType
struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA, ___charProperties_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charProperties_2), (void*)value);
	}
};

struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharProperties_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlRawWriterBase64Encoder System.Xml.XmlRawWriter::base64Encoder
	XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * ___base64Encoder_1;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlRawWriter::resolver
	RuntimeObject* ___resolver_2;

public:
	inline static int32_t get_offset_of_base64Encoder_1() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___base64Encoder_1)); }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * get_base64Encoder_1() const { return ___base64Encoder_1; }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB ** get_address_of_base64Encoder_1() { return &___base64Encoder_1; }
	inline void set_base64Encoder_1(XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * value)
	{
		___base64Encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_2() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___resolver_2)); }
	inline RuntimeObject* get_resolver_2() const { return ___resolver_2; }
	inline RuntimeObject** get_address_of_resolver_2() { return &___resolver_2; }
	inline void set_resolver_2(RuntimeObject* value)
	{
		___resolver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_2), (void*)value);
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t7F05C50F11A2E104EDEC0A6D4514C39E1328AE71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9DAD0D0D5E0F0123C455BB6EDFA2896377861179(TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6 * comReturnValue) = 0;
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


// System.Security.Cryptography.CipherMode
struct CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventKeywords
struct EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventLevel
struct EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventSourceSettings
struct EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventSourceSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FontStyle
struct FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HorizontalWrapMode
struct HorizontalWrapMode_tB8F0D84DB114FFAF047F10A58ADB759DEFF2AC63 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_tB8F0D84DB114FFAF047F10A58ADB759DEFF2AC63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonToken
struct JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.NewLineHandling
struct NewLineHandling_t416C739C0EBCB5F7CAE1A72562592E6FA6289CCA 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NewLineHandling_t416C739C0EBCB5F7CAE1A72562592E6FA6289CCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Security.Cryptography.PaddingMode
struct PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
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


// System.Net.Http.StringContent
struct StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8  : public ByteArrayContent_t8F76C95EBA054A90B36A6B9EDC58CD1200ED5277
{
public:

public:
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
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

// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// System.Security.Cryptography.TailStream
struct TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.Security.Cryptography.TailStream::_Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____Buffer_4;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferSize
	int32_t ____BufferSize_5;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferIndex
	int32_t ____BufferIndex_6;
	// System.Boolean System.Security.Cryptography.TailStream::_BufferFull
	bool ____BufferFull_7;

public:
	inline static int32_t get_offset_of__Buffer_4() { return static_cast<int32_t>(offsetof(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C, ____Buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__Buffer_4() const { return ____Buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__Buffer_4() { return &____Buffer_4; }
	inline void set__Buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____Buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__BufferSize_5() { return static_cast<int32_t>(offsetof(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C, ____BufferSize_5)); }
	inline int32_t get__BufferSize_5() const { return ____BufferSize_5; }
	inline int32_t* get_address_of__BufferSize_5() { return &____BufferSize_5; }
	inline void set__BufferSize_5(int32_t value)
	{
		____BufferSize_5 = value;
	}

	inline static int32_t get_offset_of__BufferIndex_6() { return static_cast<int32_t>(offsetof(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C, ____BufferIndex_6)); }
	inline int32_t get__BufferIndex_6() const { return ____BufferIndex_6; }
	inline int32_t* get_address_of__BufferIndex_6() { return &____BufferIndex_6; }
	inline void set__BufferIndex_6(int32_t value)
	{
		____BufferIndex_6 = value;
	}

	inline static int32_t get_offset_of__BufferFull_7() { return static_cast<int32_t>(offsetof(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C, ____BufferFull_7)); }
	inline bool get__BufferFull_7() const { return ____BufferFull_7; }
	inline bool* get_address_of__BufferFull_7() { return &____BufferFull_7; }
	inline void set__BufferFull_7(bool value)
	{
		____BufferFull_7 = value;
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


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextGenerationError
struct TextGenerationError_t09DA0156E184EBDC8621B676A0927983194A08E4 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextGenerationError_t09DA0156E184EBDC8621B676A0927983194A08E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.ThreadingModel
struct ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60, ___value___2)); }
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


// MessagePack.TinyJsonToken
struct TinyJsonToken_tEA4BF9BC78ED20143F46AA5D454DC50F41206CB0 
{
public:
	// System.Int32 MessagePack.TinyJsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TinyJsonToken_tEA4BF9BC78ED20143F46AA5D454DC50F41206CB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Http.Json.TranscodingReadStream
struct TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.Net.Http.Json.TranscodingReadStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_6;
	// System.Text.Decoder System.Net.Http.Json.TranscodingReadStream::_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ____decoder_7;
	// System.Text.Encoder System.Net.Http.Json.TranscodingReadStream::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_8;
	// System.ArraySegment`1<System.Byte> System.Net.Http.Json.TranscodingReadStream::_byteBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ____byteBuffer_9;
	// System.ArraySegment`1<System.Char> System.Net.Http.Json.TranscodingReadStream::_charBuffer
	ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B  ____charBuffer_10;
	// System.ArraySegment`1<System.Byte> System.Net.Http.Json.TranscodingReadStream::_overflowBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ____overflowBuffer_11;
	// System.Boolean System.Net.Http.Json.TranscodingReadStream::_disposed
	bool ____disposed_12;

public:
	inline static int32_t get_offset_of__stream_6() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____stream_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_6() const { return ____stream_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_6() { return &____stream_6; }
	inline void set__stream_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_6), (void*)value);
	}

	inline static int32_t get_offset_of__decoder_7() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get__decoder_7() const { return ____decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of__decoder_7() { return &____decoder_7; }
	inline void set__decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		____decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_8() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____encoder_8)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_8() const { return ____encoder_8; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_8() { return &____encoder_8; }
	inline void set__encoder_8(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_8), (void*)value);
	}

	inline static int32_t get_offset_of__byteBuffer_9() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____byteBuffer_9)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get__byteBuffer_9() const { return ____byteBuffer_9; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of__byteBuffer_9() { return &____byteBuffer_9; }
	inline void set__byteBuffer_9(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		____byteBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____byteBuffer_9))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__charBuffer_10() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____charBuffer_10)); }
	inline ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B  get__charBuffer_10() const { return ____charBuffer_10; }
	inline ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B * get_address_of__charBuffer_10() { return &____charBuffer_10; }
	inline void set__charBuffer_10(ArraySegment_1_tCDE7104E5FAD5F280FFC07B16525A07DF0A4044B  value)
	{
		____charBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____charBuffer_10))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__overflowBuffer_11() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____overflowBuffer_11)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get__overflowBuffer_11() const { return ____overflowBuffer_11; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of__overflowBuffer_11() { return &____overflowBuffer_11; }
	inline void set__overflowBuffer_11(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		____overflowBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____overflowBuffer_11))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__disposed_12() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8, ____disposed_12)); }
	inline bool get__disposed_12() const { return ____disposed_12; }
	inline bool* get_address_of__disposed_12() { return &____disposed_12; }
	inline void set__disposed_12(bool value)
	{
		____disposed_12 = value;
	}
};

struct TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_StaticFields
{
public:
	// System.Int32 System.Net.Http.Json.TranscodingReadStream::OverflowBufferSize
	int32_t ___OverflowBufferSize_4;

public:
	inline static int32_t get_offset_of_OverflowBufferSize_4() { return static_cast<int32_t>(offsetof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_StaticFields, ___OverflowBufferSize_4)); }
	inline int32_t get_OverflowBufferSize_4() const { return ___OverflowBufferSize_4; }
	inline int32_t* get_address_of_OverflowBufferSize_4() { return &___OverflowBufferSize_4; }
	inline void set_OverflowBufferSize_4(int32_t value)
	{
		___OverflowBufferSize_4 = value;
	}
};


// System.Net.Http.Json.TranscodingWriteStream
struct TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Int32 System.Net.Http.Json.TranscodingWriteStream::_maxByteBufferSize
	int32_t ____maxByteBufferSize_6;
	// System.IO.Stream System.Net.Http.Json.TranscodingWriteStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_7;
	// System.Text.Decoder System.Net.Http.Json.TranscodingWriteStream::_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ____decoder_8;
	// System.Text.Encoder System.Net.Http.Json.TranscodingWriteStream::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_9;
	// System.Char[] System.Net.Http.Json.TranscodingWriteStream::_charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____charBuffer_10;
	// System.Int32 System.Net.Http.Json.TranscodingWriteStream::_charsDecoded
	int32_t ____charsDecoded_11;
	// System.Boolean System.Net.Http.Json.TranscodingWriteStream::_disposed
	bool ____disposed_12;
	// System.Int64 System.Net.Http.Json.TranscodingWriteStream::<Position>k__BackingField
	int64_t ___U3CPositionU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__maxByteBufferSize_6() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____maxByteBufferSize_6)); }
	inline int32_t get__maxByteBufferSize_6() const { return ____maxByteBufferSize_6; }
	inline int32_t* get_address_of__maxByteBufferSize_6() { return &____maxByteBufferSize_6; }
	inline void set__maxByteBufferSize_6(int32_t value)
	{
		____maxByteBufferSize_6 = value;
	}

	inline static int32_t get_offset_of__stream_7() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____stream_7)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_7() const { return ____stream_7; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_7() { return &____stream_7; }
	inline void set__stream_7(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_7), (void*)value);
	}

	inline static int32_t get_offset_of__decoder_8() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____decoder_8)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get__decoder_8() const { return ____decoder_8; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of__decoder_8() { return &____decoder_8; }
	inline void set__decoder_8(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		____decoder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_8), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_9() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____encoder_9)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_9() const { return ____encoder_9; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_9() { return &____encoder_9; }
	inline void set__encoder_9(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_9), (void*)value);
	}

	inline static int32_t get_offset_of__charBuffer_10() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____charBuffer_10)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__charBuffer_10() const { return ____charBuffer_10; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__charBuffer_10() { return &____charBuffer_10; }
	inline void set__charBuffer_10(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____charBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____charBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of__charsDecoded_11() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____charsDecoded_11)); }
	inline int32_t get__charsDecoded_11() const { return ____charsDecoded_11; }
	inline int32_t* get_address_of__charsDecoded_11() { return &____charsDecoded_11; }
	inline void set__charsDecoded_11(int32_t value)
	{
		____charsDecoded_11 = value;
	}

	inline static int32_t get_offset_of__disposed_12() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ____disposed_12)); }
	inline bool get__disposed_12() const { return ____disposed_12; }
	inline bool* get_address_of__disposed_12() { return &____disposed_12; }
	inline void set__disposed_12(bool value)
	{
		____disposed_12 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094, ___U3CPositionU3Ek__BackingField_13)); }
	inline int64_t get_U3CPositionU3Ek__BackingField_13() const { return ___U3CPositionU3Ek__BackingField_13; }
	inline int64_t* get_address_of_U3CPositionU3Ek__BackingField_13() { return &___U3CPositionU3Ek__BackingField_13; }
	inline void set_U3CPositionU3Ek__BackingField_13(int64_t value)
	{
		___U3CPositionU3Ek__BackingField_13 = value;
	}
};


// MessagePack.ValueType
struct ValueType_tB76134EF600FB39DDF0DB0ED2CCC900833DE3352 
{
public:
	// System.Byte MessagePack.ValueType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueType_tB76134EF600FB39DDF0DB0ED2CCC900833DE3352, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VerticalWrapMode
struct VerticalWrapMode_t71EBBAE09D28B40254AA63D6EEA14CFCBD618D88 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t71EBBAE09D28B40254AA63D6EEA14CFCBD618D88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlOutputMethod
struct XmlOutputMethod_t56A6FAE8907BABCD1EE7532B476666E21D5CB66F 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t56A6FAE8907BABCD1EE7532B476666E21D5CB66F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlStandalone
struct XmlStandalone_t1AB830245155829DBE6EBC8C97A0BB64859FD828 
{
public:
	// System.Int32 System.Xml.XmlStandalone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlStandalone_t1AB830245155829DBE6EBC8C97A0BB64859FD828, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tCF094629522A5FD69F108494074FAAEB9C66C091 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tCF094629522A5FD69F108494074FAAEB9C66C091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_tA218FE6A5685FF60126F5336A8E5D0F847D9F28F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3A245C467FBBF21ED009CD0CF6102C8E729BD486(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_t3ADE70CDA3709FC1013F86F9093C3BBA79BE6D61 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m094D70F015701799AB2F6315EC70443E973E1DF2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A  : public RuntimeObject
{
public:
	// System.Byte[] System.Diagnostics.Tracing.EventSource::providerMetadata
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___providerMetadata_0;
	// System.String System.Diagnostics.Tracing.EventSource::m_name
	String_t* ___m_name_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource::m_id
	int32_t ___m_id_2;
	// System.Guid System.Diagnostics.Tracing.EventSource::m_guid
	Guid_t  ___m_guid_3;
	// System.Diagnostics.Tracing.EventSource/EventMetadata[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_eventData
	EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* ___m_eventData_4;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_rawManifest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_rawManifest_5;
	// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs> System.Diagnostics.Tracing.EventSource::m_eventCommandExecuted
	EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * ___m_eventCommandExecuted_6;
	// System.Diagnostics.Tracing.EventSourceSettings System.Diagnostics.Tracing.EventSource::m_config
	int32_t ___m_config_7;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_eventSourceEnabled
	bool ___m_eventSourceEnabled_8;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.EventSource::m_level
	int32_t ___m_level_9;
	// System.Diagnostics.Tracing.EventKeywords System.Diagnostics.Tracing.EventSource::m_matchAnyKeyword
	int64_t ___m_matchAnyKeyword_10;
	// System.Diagnostics.Tracing.EventDispatcher modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_Dispatchers
	EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * ___m_Dispatchers_11;
	// System.Diagnostics.Tracing.EventSource/OverideEventProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_provider
	OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * ___m_provider_12;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_completelyInited
	bool ___m_completelyInited_13;
	// System.Exception System.Diagnostics.Tracing.EventSource::m_constructionException
	Exception_t * ___m_constructionException_14;
	// System.Byte System.Diagnostics.Tracing.EventSource::m_outOfBandMessageCount
	uint8_t ___m_outOfBandMessageCount_15;
	// System.Diagnostics.Tracing.EventCommandEventArgs System.Diagnostics.Tracing.EventSource::m_deferredCommands
	EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * ___m_deferredCommands_16;
	// System.String[] System.Diagnostics.Tracing.EventSource::m_traits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_traits_17;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_curLiveSessions
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_curLiveSessions_20;
	// System.Diagnostics.Tracing.EtwSession[] System.Diagnostics.Tracing.EventSource::m_etwSessionIdMap
	EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* ___m_etwSessionIdMap_21;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession> System.Diagnostics.Tracing.EventSource::m_legacySessions
	List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * ___m_legacySessions_22;
	// System.Int64 System.Diagnostics.Tracing.EventSource::m_keywordTriggers
	int64_t ___m_keywordTriggers_23;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_activityFilteringForETWEnabled
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_activityFilteringForETWEnabled_24;
	// System.Diagnostics.Tracing.ActivityTracker System.Diagnostics.Tracing.EventSource::m_activityTracker
	ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * ___m_activityTracker_26;

public:
	inline static int32_t get_offset_of_providerMetadata_0() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___providerMetadata_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_providerMetadata_0() const { return ___providerMetadata_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_providerMetadata_0() { return &___providerMetadata_0; }
	inline void set_providerMetadata_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___providerMetadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerMetadata_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_1() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_name_1)); }
	inline String_t* get_m_name_1() const { return ___m_name_1; }
	inline String_t** get_address_of_m_name_1() { return &___m_name_1; }
	inline void set_m_name_1(String_t* value)
	{
		___m_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_id_2() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_id_2)); }
	inline int32_t get_m_id_2() const { return ___m_id_2; }
	inline int32_t* get_address_of_m_id_2() { return &___m_id_2; }
	inline void set_m_id_2(int32_t value)
	{
		___m_id_2 = value;
	}

	inline static int32_t get_offset_of_m_guid_3() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_guid_3)); }
	inline Guid_t  get_m_guid_3() const { return ___m_guid_3; }
	inline Guid_t * get_address_of_m_guid_3() { return &___m_guid_3; }
	inline void set_m_guid_3(Guid_t  value)
	{
		___m_guid_3 = value;
	}

	inline static int32_t get_offset_of_m_eventData_4() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventData_4)); }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* get_m_eventData_4() const { return ___m_eventData_4; }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65** get_address_of_m_eventData_4() { return &___m_eventData_4; }
	inline void set_m_eventData_4(EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* value)
	{
		___m_eventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_rawManifest_5() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_rawManifest_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_rawManifest_5() const { return ___m_rawManifest_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_rawManifest_5() { return &___m_rawManifest_5; }
	inline void set_m_rawManifest_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_rawManifest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rawManifest_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventCommandExecuted_6() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventCommandExecuted_6)); }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * get_m_eventCommandExecuted_6() const { return ___m_eventCommandExecuted_6; }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 ** get_address_of_m_eventCommandExecuted_6() { return &___m_eventCommandExecuted_6; }
	inline void set_m_eventCommandExecuted_6(EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * value)
	{
		___m_eventCommandExecuted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventCommandExecuted_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_config_7() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_config_7)); }
	inline int32_t get_m_config_7() const { return ___m_config_7; }
	inline int32_t* get_address_of_m_config_7() { return &___m_config_7; }
	inline void set_m_config_7(int32_t value)
	{
		___m_config_7 = value;
	}

	inline static int32_t get_offset_of_m_eventSourceEnabled_8() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventSourceEnabled_8)); }
	inline bool get_m_eventSourceEnabled_8() const { return ___m_eventSourceEnabled_8; }
	inline bool* get_address_of_m_eventSourceEnabled_8() { return &___m_eventSourceEnabled_8; }
	inline void set_m_eventSourceEnabled_8(bool value)
	{
		___m_eventSourceEnabled_8 = value;
	}

	inline static int32_t get_offset_of_m_level_9() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_level_9)); }
	inline int32_t get_m_level_9() const { return ___m_level_9; }
	inline int32_t* get_address_of_m_level_9() { return &___m_level_9; }
	inline void set_m_level_9(int32_t value)
	{
		___m_level_9 = value;
	}

	inline static int32_t get_offset_of_m_matchAnyKeyword_10() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_matchAnyKeyword_10)); }
	inline int64_t get_m_matchAnyKeyword_10() const { return ___m_matchAnyKeyword_10; }
	inline int64_t* get_address_of_m_matchAnyKeyword_10() { return &___m_matchAnyKeyword_10; }
	inline void set_m_matchAnyKeyword_10(int64_t value)
	{
		___m_matchAnyKeyword_10 = value;
	}

	inline static int32_t get_offset_of_m_Dispatchers_11() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_Dispatchers_11)); }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * get_m_Dispatchers_11() const { return ___m_Dispatchers_11; }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 ** get_address_of_m_Dispatchers_11() { return &___m_Dispatchers_11; }
	inline void set_m_Dispatchers_11(EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * value)
	{
		___m_Dispatchers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dispatchers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_provider_12() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_provider_12)); }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * get_m_provider_12() const { return ___m_provider_12; }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 ** get_address_of_m_provider_12() { return &___m_provider_12; }
	inline void set_m_provider_12(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * value)
	{
		___m_provider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_provider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_completelyInited_13() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_completelyInited_13)); }
	inline bool get_m_completelyInited_13() const { return ___m_completelyInited_13; }
	inline bool* get_address_of_m_completelyInited_13() { return &___m_completelyInited_13; }
	inline void set_m_completelyInited_13(bool value)
	{
		___m_completelyInited_13 = value;
	}

	inline static int32_t get_offset_of_m_constructionException_14() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_constructionException_14)); }
	inline Exception_t * get_m_constructionException_14() const { return ___m_constructionException_14; }
	inline Exception_t ** get_address_of_m_constructionException_14() { return &___m_constructionException_14; }
	inline void set_m_constructionException_14(Exception_t * value)
	{
		___m_constructionException_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_constructionException_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_outOfBandMessageCount_15() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_outOfBandMessageCount_15)); }
	inline uint8_t get_m_outOfBandMessageCount_15() const { return ___m_outOfBandMessageCount_15; }
	inline uint8_t* get_address_of_m_outOfBandMessageCount_15() { return &___m_outOfBandMessageCount_15; }
	inline void set_m_outOfBandMessageCount_15(uint8_t value)
	{
		___m_outOfBandMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_deferredCommands_16() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_deferredCommands_16)); }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * get_m_deferredCommands_16() const { return ___m_deferredCommands_16; }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F ** get_address_of_m_deferredCommands_16() { return &___m_deferredCommands_16; }
	inline void set_m_deferredCommands_16(EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * value)
	{
		___m_deferredCommands_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_deferredCommands_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_traits_17() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_traits_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_traits_17() const { return ___m_traits_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_traits_17() { return &___m_traits_17; }
	inline void set_m_traits_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_traits_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_traits_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_curLiveSessions_20() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_curLiveSessions_20)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_curLiveSessions_20() const { return ___m_curLiveSessions_20; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_curLiveSessions_20() { return &___m_curLiveSessions_20; }
	inline void set_m_curLiveSessions_20(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_curLiveSessions_20 = value;
	}

	inline static int32_t get_offset_of_m_etwSessionIdMap_21() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_etwSessionIdMap_21)); }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* get_m_etwSessionIdMap_21() const { return ___m_etwSessionIdMap_21; }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281** get_address_of_m_etwSessionIdMap_21() { return &___m_etwSessionIdMap_21; }
	inline void set_m_etwSessionIdMap_21(EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* value)
	{
		___m_etwSessionIdMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwSessionIdMap_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_legacySessions_22() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_legacySessions_22)); }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * get_m_legacySessions_22() const { return ___m_legacySessions_22; }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D ** get_address_of_m_legacySessions_22() { return &___m_legacySessions_22; }
	inline void set_m_legacySessions_22(List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * value)
	{
		___m_legacySessions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_legacySessions_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_keywordTriggers_23() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_keywordTriggers_23)); }
	inline int64_t get_m_keywordTriggers_23() const { return ___m_keywordTriggers_23; }
	inline int64_t* get_address_of_m_keywordTriggers_23() { return &___m_keywordTriggers_23; }
	inline void set_m_keywordTriggers_23(int64_t value)
	{
		___m_keywordTriggers_23 = value;
	}

	inline static int32_t get_offset_of_m_activityFilteringForETWEnabled_24() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityFilteringForETWEnabled_24)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_activityFilteringForETWEnabled_24() const { return ___m_activityFilteringForETWEnabled_24; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_activityFilteringForETWEnabled_24() { return &___m_activityFilteringForETWEnabled_24; }
	inline void set_m_activityFilteringForETWEnabled_24(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_activityFilteringForETWEnabled_24 = value;
	}

	inline static int32_t get_offset_of_m_activityTracker_26() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityTracker_26)); }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * get_m_activityTracker_26() const { return ___m_activityTracker_26; }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 ** get_address_of_m_activityTracker_26() { return &___m_activityTracker_26; }
	inline void set_m_activityTracker_26(ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * value)
	{
		___m_activityTracker_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_activityTracker_26), (void*)value);
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields
{
public:
	// System.UInt32 System.Diagnostics.Tracing.EventSource::s_currentPid
	uint32_t ___s_currentPid_18;
	// System.Action`1<System.Guid> System.Diagnostics.Tracing.EventSource::s_activityDying
	Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * ___s_activityDying_25;
	// System.Byte[] System.Diagnostics.Tracing.EventSource::namespaceBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___namespaceBytes_27;
	// System.Guid System.Diagnostics.Tracing.EventSource::AspNetEventSourceGuid
	Guid_t  ___AspNetEventSourceGuid_28;

public:
	inline static int32_t get_offset_of_s_currentPid_18() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_currentPid_18)); }
	inline uint32_t get_s_currentPid_18() const { return ___s_currentPid_18; }
	inline uint32_t* get_address_of_s_currentPid_18() { return &___s_currentPid_18; }
	inline void set_s_currentPid_18(uint32_t value)
	{
		___s_currentPid_18 = value;
	}

	inline static int32_t get_offset_of_s_activityDying_25() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_activityDying_25)); }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * get_s_activityDying_25() const { return ___s_activityDying_25; }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 ** get_address_of_s_activityDying_25() { return &___s_activityDying_25; }
	inline void set_s_activityDying_25(Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * value)
	{
		___s_activityDying_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activityDying_25), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceBytes_27() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___namespaceBytes_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_namespaceBytes_27() const { return ___namespaceBytes_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_namespaceBytes_27() { return &___namespaceBytes_27; }
	inline void set_namespaceBytes_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___namespaceBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of_AspNetEventSourceGuid_28() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___AspNetEventSourceGuid_28)); }
	inline Guid_t  get_AspNetEventSourceGuid_28() const { return ___AspNetEventSourceGuid_28; }
	inline Guid_t * get_address_of_AspNetEventSourceGuid_28() { return &___AspNetEventSourceGuid_28; }
	inline void set_AspNetEventSourceGuid_28(Guid_t  value)
	{
		___AspNetEventSourceGuid_28 = value;
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields
{
public:
	// System.Byte System.Diagnostics.Tracing.EventSource::m_EventSourceExceptionRecurenceCount
	uint8_t ___m_EventSourceExceptionRecurenceCount_19;

public:
	inline static int32_t get_offset_of_m_EventSourceExceptionRecurenceCount_19() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields, ___m_EventSourceExceptionRecurenceCount_19)); }
	inline uint8_t get_m_EventSourceExceptionRecurenceCount_19() const { return ___m_EventSourceExceptionRecurenceCount_19; }
	inline uint8_t* get_address_of_m_EventSourceExceptionRecurenceCount_19() { return &___m_EventSourceExceptionRecurenceCount_19; }
	inline void set_m_EventSourceExceptionRecurenceCount_19(uint8_t value)
	{
		___m_EventSourceExceptionRecurenceCount_19 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___algo_0)); }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___algo_0), (void*)value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_3), (void*)value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp2_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp2_4), (void*)value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workBuff_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workBuff_5), (void*)value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workout_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workout_6), (void*)value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ____rng_11)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_11), (void*)value);
	}
};


// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___font_0)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_font_0() const { return ___font_0; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___font_0), (void*)value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___generationExtents_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___pivot_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_pinvoke
{
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_com
{
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
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


// MessagePack.TinyJsonReader
struct TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561  : public RuntimeObject
{
public:
	// System.IO.TextReader MessagePack.TinyJsonReader::reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader_0;
	// System.Boolean MessagePack.TinyJsonReader::disposeInnerReader
	bool ___disposeInnerReader_1;
	// System.Text.StringBuilder MessagePack.TinyJsonReader::reusableBuilder
	StringBuilder_t * ___reusableBuilder_2;
	// MessagePack.TinyJsonToken MessagePack.TinyJsonReader::<TokenType>k__BackingField
	int32_t ___U3CTokenTypeU3Ek__BackingField_3;
	// MessagePack.ValueType MessagePack.TinyJsonReader::<ValueType>k__BackingField
	uint8_t ___U3CValueTypeU3Ek__BackingField_4;
	// System.Double MessagePack.TinyJsonReader::<DoubleValue>k__BackingField
	double ___U3CDoubleValueU3Ek__BackingField_5;
	// System.Int64 MessagePack.TinyJsonReader::<LongValue>k__BackingField
	int64_t ___U3CLongValueU3Ek__BackingField_6;
	// System.UInt64 MessagePack.TinyJsonReader::<ULongValue>k__BackingField
	uint64_t ___U3CULongValueU3Ek__BackingField_7;
	// System.Decimal MessagePack.TinyJsonReader::<DecimalValue>k__BackingField
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___U3CDecimalValueU3Ek__BackingField_8;
	// System.String MessagePack.TinyJsonReader::<StringValue>k__BackingField
	String_t* ___U3CStringValueU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___reader_0)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_reader_0() const { return ___reader_0; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposeInnerReader_1() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___disposeInnerReader_1)); }
	inline bool get_disposeInnerReader_1() const { return ___disposeInnerReader_1; }
	inline bool* get_address_of_disposeInnerReader_1() { return &___disposeInnerReader_1; }
	inline void set_disposeInnerReader_1(bool value)
	{
		___disposeInnerReader_1 = value;
	}

	inline static int32_t get_offset_of_reusableBuilder_2() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___reusableBuilder_2)); }
	inline StringBuilder_t * get_reusableBuilder_2() const { return ___reusableBuilder_2; }
	inline StringBuilder_t ** get_address_of_reusableBuilder_2() { return &___reusableBuilder_2; }
	inline void set_reusableBuilder_2(StringBuilder_t * value)
	{
		___reusableBuilder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableBuilder_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CTokenTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CTokenTypeU3Ek__BackingField_3() const { return ___U3CTokenTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTokenTypeU3Ek__BackingField_3() { return &___U3CTokenTypeU3Ek__BackingField_3; }
	inline void set_U3CTokenTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CTokenTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CValueTypeU3Ek__BackingField_4)); }
	inline uint8_t get_U3CValueTypeU3Ek__BackingField_4() const { return ___U3CValueTypeU3Ek__BackingField_4; }
	inline uint8_t* get_address_of_U3CValueTypeU3Ek__BackingField_4() { return &___U3CValueTypeU3Ek__BackingField_4; }
	inline void set_U3CValueTypeU3Ek__BackingField_4(uint8_t value)
	{
		___U3CValueTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDoubleValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CDoubleValueU3Ek__BackingField_5)); }
	inline double get_U3CDoubleValueU3Ek__BackingField_5() const { return ___U3CDoubleValueU3Ek__BackingField_5; }
	inline double* get_address_of_U3CDoubleValueU3Ek__BackingField_5() { return &___U3CDoubleValueU3Ek__BackingField_5; }
	inline void set_U3CDoubleValueU3Ek__BackingField_5(double value)
	{
		___U3CDoubleValueU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLongValueU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CLongValueU3Ek__BackingField_6)); }
	inline int64_t get_U3CLongValueU3Ek__BackingField_6() const { return ___U3CLongValueU3Ek__BackingField_6; }
	inline int64_t* get_address_of_U3CLongValueU3Ek__BackingField_6() { return &___U3CLongValueU3Ek__BackingField_6; }
	inline void set_U3CLongValueU3Ek__BackingField_6(int64_t value)
	{
		___U3CLongValueU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CULongValueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CULongValueU3Ek__BackingField_7)); }
	inline uint64_t get_U3CULongValueU3Ek__BackingField_7() const { return ___U3CULongValueU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CULongValueU3Ek__BackingField_7() { return &___U3CULongValueU3Ek__BackingField_7; }
	inline void set_U3CULongValueU3Ek__BackingField_7(uint64_t value)
	{
		___U3CULongValueU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDecimalValueU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CDecimalValueU3Ek__BackingField_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_U3CDecimalValueU3Ek__BackingField_8() const { return ___U3CDecimalValueU3Ek__BackingField_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_U3CDecimalValueU3Ek__BackingField_8() { return &___U3CDecimalValueU3Ek__BackingField_8; }
	inline void set_U3CDecimalValueU3Ek__BackingField_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___U3CDecimalValueU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CStringValueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561, ___U3CStringValueU3Ek__BackingField_9)); }
	inline String_t* get_U3CStringValueU3Ek__BackingField_9() const { return ___U3CStringValueU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CStringValueU3Ek__BackingField_9() { return &___U3CStringValueU3Ek__BackingField_9; }
	inline void set_U3CStringValueU3Ek__BackingField_9(String_t* value)
	{
		___U3CStringValueU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStringValueU3Ek__BackingField_9), (void*)value);
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


// System.Xml.XmlEncodedRawTextWriter
struct XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51  : public XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5
{
public:
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::useAsync
	bool ___useAsync_3;
	// System.Byte[] System.Xml.XmlEncodedRawTextWriter::bufBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bufBytes_4;
	// System.IO.Stream System.Xml.XmlEncodedRawTextWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.Xml.XmlEncodedRawTextWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Xml.XmlCharType System.Xml.XmlEncodedRawTextWriter::xmlCharType
	XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  ___xmlCharType_7;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::bufPos
	int32_t ___bufPos_8;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::textPos
	int32_t ___textPos_9;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::contentPos
	int32_t ___contentPos_10;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::cdataPos
	int32_t ___cdataPos_11;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::attrEndPos
	int32_t ___attrEndPos_12;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::bufLen
	int32_t ___bufLen_13;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::writeToNull
	bool ___writeToNull_14;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::hadDoubleBracket
	bool ___hadDoubleBracket_15;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::inAttributeValue
	bool ___inAttributeValue_16;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::bufBytesUsed
	int32_t ___bufBytesUsed_17;
	// System.Char[] System.Xml.XmlEncodedRawTextWriter::bufChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___bufChars_18;
	// System.Text.Encoder System.Xml.XmlEncodedRawTextWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_19;
	// System.IO.TextWriter System.Xml.XmlEncodedRawTextWriter::writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer_20;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::trackTextContent
	bool ___trackTextContent_21;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::inTextContent
	bool ___inTextContent_22;
	// System.Int32 System.Xml.XmlEncodedRawTextWriter::lastMarkPos
	int32_t ___lastMarkPos_23;
	// System.Int32[] System.Xml.XmlEncodedRawTextWriter::textContentMarks
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___textContentMarks_24;
	// System.Xml.CharEntityEncoderFallback System.Xml.XmlEncodedRawTextWriter::charEntityFallback
	CharEntityEncoderFallback_t4D5B1863C30C436F12B2BE9E8EE22193E27960EE * ___charEntityFallback_25;
	// System.Xml.NewLineHandling System.Xml.XmlEncodedRawTextWriter::newLineHandling
	int32_t ___newLineHandling_26;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::closeOutput
	bool ___closeOutput_27;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::omitXmlDeclaration
	bool ___omitXmlDeclaration_28;
	// System.String System.Xml.XmlEncodedRawTextWriter::newLineChars
	String_t* ___newLineChars_29;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::checkCharacters
	bool ___checkCharacters_30;
	// System.Xml.XmlStandalone System.Xml.XmlEncodedRawTextWriter::standalone
	int32_t ___standalone_31;
	// System.Xml.XmlOutputMethod System.Xml.XmlEncodedRawTextWriter::outputMethod
	int32_t ___outputMethod_32;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::autoXmlDeclaration
	bool ___autoXmlDeclaration_33;
	// System.Boolean System.Xml.XmlEncodedRawTextWriter::mergeCDataSections
	bool ___mergeCDataSections_34;

public:
	inline static int32_t get_offset_of_useAsync_3() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___useAsync_3)); }
	inline bool get_useAsync_3() const { return ___useAsync_3; }
	inline bool* get_address_of_useAsync_3() { return &___useAsync_3; }
	inline void set_useAsync_3(bool value)
	{
		___useAsync_3 = value;
	}

	inline static int32_t get_offset_of_bufBytes_4() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___bufBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bufBytes_4() const { return ___bufBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bufBytes_4() { return &___bufBytes_4; }
	inline void set_bufBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bufBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_7() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___xmlCharType_7)); }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  get_xmlCharType_7() const { return ___xmlCharType_7; }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA * get_address_of_xmlCharType_7() { return &___xmlCharType_7; }
	inline void set_xmlCharType_7(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  value)
	{
		___xmlCharType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_7))->___charProperties_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_bufPos_8() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___bufPos_8)); }
	inline int32_t get_bufPos_8() const { return ___bufPos_8; }
	inline int32_t* get_address_of_bufPos_8() { return &___bufPos_8; }
	inline void set_bufPos_8(int32_t value)
	{
		___bufPos_8 = value;
	}

	inline static int32_t get_offset_of_textPos_9() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___textPos_9)); }
	inline int32_t get_textPos_9() const { return ___textPos_9; }
	inline int32_t* get_address_of_textPos_9() { return &___textPos_9; }
	inline void set_textPos_9(int32_t value)
	{
		___textPos_9 = value;
	}

	inline static int32_t get_offset_of_contentPos_10() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___contentPos_10)); }
	inline int32_t get_contentPos_10() const { return ___contentPos_10; }
	inline int32_t* get_address_of_contentPos_10() { return &___contentPos_10; }
	inline void set_contentPos_10(int32_t value)
	{
		___contentPos_10 = value;
	}

	inline static int32_t get_offset_of_cdataPos_11() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___cdataPos_11)); }
	inline int32_t get_cdataPos_11() const { return ___cdataPos_11; }
	inline int32_t* get_address_of_cdataPos_11() { return &___cdataPos_11; }
	inline void set_cdataPos_11(int32_t value)
	{
		___cdataPos_11 = value;
	}

	inline static int32_t get_offset_of_attrEndPos_12() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___attrEndPos_12)); }
	inline int32_t get_attrEndPos_12() const { return ___attrEndPos_12; }
	inline int32_t* get_address_of_attrEndPos_12() { return &___attrEndPos_12; }
	inline void set_attrEndPos_12(int32_t value)
	{
		___attrEndPos_12 = value;
	}

	inline static int32_t get_offset_of_bufLen_13() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___bufLen_13)); }
	inline int32_t get_bufLen_13() const { return ___bufLen_13; }
	inline int32_t* get_address_of_bufLen_13() { return &___bufLen_13; }
	inline void set_bufLen_13(int32_t value)
	{
		___bufLen_13 = value;
	}

	inline static int32_t get_offset_of_writeToNull_14() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___writeToNull_14)); }
	inline bool get_writeToNull_14() const { return ___writeToNull_14; }
	inline bool* get_address_of_writeToNull_14() { return &___writeToNull_14; }
	inline void set_writeToNull_14(bool value)
	{
		___writeToNull_14 = value;
	}

	inline static int32_t get_offset_of_hadDoubleBracket_15() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___hadDoubleBracket_15)); }
	inline bool get_hadDoubleBracket_15() const { return ___hadDoubleBracket_15; }
	inline bool* get_address_of_hadDoubleBracket_15() { return &___hadDoubleBracket_15; }
	inline void set_hadDoubleBracket_15(bool value)
	{
		___hadDoubleBracket_15 = value;
	}

	inline static int32_t get_offset_of_inAttributeValue_16() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___inAttributeValue_16)); }
	inline bool get_inAttributeValue_16() const { return ___inAttributeValue_16; }
	inline bool* get_address_of_inAttributeValue_16() { return &___inAttributeValue_16; }
	inline void set_inAttributeValue_16(bool value)
	{
		___inAttributeValue_16 = value;
	}

	inline static int32_t get_offset_of_bufBytesUsed_17() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___bufBytesUsed_17)); }
	inline int32_t get_bufBytesUsed_17() const { return ___bufBytesUsed_17; }
	inline int32_t* get_address_of_bufBytesUsed_17() { return &___bufBytesUsed_17; }
	inline void set_bufBytesUsed_17(int32_t value)
	{
		___bufBytesUsed_17 = value;
	}

	inline static int32_t get_offset_of_bufChars_18() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___bufChars_18)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_bufChars_18() const { return ___bufChars_18; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_bufChars_18() { return &___bufChars_18; }
	inline void set_bufChars_18(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___bufChars_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufChars_18), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_19() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___encoder_19)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_19() const { return ___encoder_19; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_19() { return &___encoder_19; }
	inline void set_encoder_19(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_19), (void*)value);
	}

	inline static int32_t get_offset_of_writer_20() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___writer_20)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_writer_20() const { return ___writer_20; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_writer_20() { return &___writer_20; }
	inline void set_writer_20(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___writer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_20), (void*)value);
	}

	inline static int32_t get_offset_of_trackTextContent_21() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___trackTextContent_21)); }
	inline bool get_trackTextContent_21() const { return ___trackTextContent_21; }
	inline bool* get_address_of_trackTextContent_21() { return &___trackTextContent_21; }
	inline void set_trackTextContent_21(bool value)
	{
		___trackTextContent_21 = value;
	}

	inline static int32_t get_offset_of_inTextContent_22() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___inTextContent_22)); }
	inline bool get_inTextContent_22() const { return ___inTextContent_22; }
	inline bool* get_address_of_inTextContent_22() { return &___inTextContent_22; }
	inline void set_inTextContent_22(bool value)
	{
		___inTextContent_22 = value;
	}

	inline static int32_t get_offset_of_lastMarkPos_23() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___lastMarkPos_23)); }
	inline int32_t get_lastMarkPos_23() const { return ___lastMarkPos_23; }
	inline int32_t* get_address_of_lastMarkPos_23() { return &___lastMarkPos_23; }
	inline void set_lastMarkPos_23(int32_t value)
	{
		___lastMarkPos_23 = value;
	}

	inline static int32_t get_offset_of_textContentMarks_24() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___textContentMarks_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_textContentMarks_24() const { return ___textContentMarks_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_textContentMarks_24() { return &___textContentMarks_24; }
	inline void set_textContentMarks_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___textContentMarks_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textContentMarks_24), (void*)value);
	}

	inline static int32_t get_offset_of_charEntityFallback_25() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___charEntityFallback_25)); }
	inline CharEntityEncoderFallback_t4D5B1863C30C436F12B2BE9E8EE22193E27960EE * get_charEntityFallback_25() const { return ___charEntityFallback_25; }
	inline CharEntityEncoderFallback_t4D5B1863C30C436F12B2BE9E8EE22193E27960EE ** get_address_of_charEntityFallback_25() { return &___charEntityFallback_25; }
	inline void set_charEntityFallback_25(CharEntityEncoderFallback_t4D5B1863C30C436F12B2BE9E8EE22193E27960EE * value)
	{
		___charEntityFallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charEntityFallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_newLineHandling_26() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___newLineHandling_26)); }
	inline int32_t get_newLineHandling_26() const { return ___newLineHandling_26; }
	inline int32_t* get_address_of_newLineHandling_26() { return &___newLineHandling_26; }
	inline void set_newLineHandling_26(int32_t value)
	{
		___newLineHandling_26 = value;
	}

	inline static int32_t get_offset_of_closeOutput_27() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___closeOutput_27)); }
	inline bool get_closeOutput_27() const { return ___closeOutput_27; }
	inline bool* get_address_of_closeOutput_27() { return &___closeOutput_27; }
	inline void set_closeOutput_27(bool value)
	{
		___closeOutput_27 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_28() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___omitXmlDeclaration_28)); }
	inline bool get_omitXmlDeclaration_28() const { return ___omitXmlDeclaration_28; }
	inline bool* get_address_of_omitXmlDeclaration_28() { return &___omitXmlDeclaration_28; }
	inline void set_omitXmlDeclaration_28(bool value)
	{
		___omitXmlDeclaration_28 = value;
	}

	inline static int32_t get_offset_of_newLineChars_29() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___newLineChars_29)); }
	inline String_t* get_newLineChars_29() const { return ___newLineChars_29; }
	inline String_t** get_address_of_newLineChars_29() { return &___newLineChars_29; }
	inline void set_newLineChars_29(String_t* value)
	{
		___newLineChars_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLineChars_29), (void*)value);
	}

	inline static int32_t get_offset_of_checkCharacters_30() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___checkCharacters_30)); }
	inline bool get_checkCharacters_30() const { return ___checkCharacters_30; }
	inline bool* get_address_of_checkCharacters_30() { return &___checkCharacters_30; }
	inline void set_checkCharacters_30(bool value)
	{
		___checkCharacters_30 = value;
	}

	inline static int32_t get_offset_of_standalone_31() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___standalone_31)); }
	inline int32_t get_standalone_31() const { return ___standalone_31; }
	inline int32_t* get_address_of_standalone_31() { return &___standalone_31; }
	inline void set_standalone_31(int32_t value)
	{
		___standalone_31 = value;
	}

	inline static int32_t get_offset_of_outputMethod_32() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___outputMethod_32)); }
	inline int32_t get_outputMethod_32() const { return ___outputMethod_32; }
	inline int32_t* get_address_of_outputMethod_32() { return &___outputMethod_32; }
	inline void set_outputMethod_32(int32_t value)
	{
		___outputMethod_32 = value;
	}

	inline static int32_t get_offset_of_autoXmlDeclaration_33() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___autoXmlDeclaration_33)); }
	inline bool get_autoXmlDeclaration_33() const { return ___autoXmlDeclaration_33; }
	inline bool* get_address_of_autoXmlDeclaration_33() { return &___autoXmlDeclaration_33; }
	inline void set_autoXmlDeclaration_33(bool value)
	{
		___autoXmlDeclaration_33 = value;
	}

	inline static int32_t get_offset_of_mergeCDataSections_34() { return static_cast<int32_t>(offsetof(XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51, ___mergeCDataSections_34)); }
	inline bool get_mergeCDataSections_34() const { return ___mergeCDataSections_34; }
	inline bool* get_address_of_mergeCDataSections_34() { return &___mergeCDataSections_34; }
	inline void set_mergeCDataSections_34(bool value)
	{
		___mergeCDataSections_34 = value;
	}
};


// System.Xml.XmlUtf8RawTextWriter
struct XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2  : public XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5
{
public:
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::useAsync
	bool ___useAsync_3;
	// System.Byte[] System.Xml.XmlUtf8RawTextWriter::bufBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bufBytes_4;
	// System.IO.Stream System.Xml.XmlUtf8RawTextWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.Xml.XmlUtf8RawTextWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Xml.XmlCharType System.Xml.XmlUtf8RawTextWriter::xmlCharType
	XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  ___xmlCharType_7;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::bufPos
	int32_t ___bufPos_8;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::textPos
	int32_t ___textPos_9;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::contentPos
	int32_t ___contentPos_10;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::cdataPos
	int32_t ___cdataPos_11;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::attrEndPos
	int32_t ___attrEndPos_12;
	// System.Int32 System.Xml.XmlUtf8RawTextWriter::bufLen
	int32_t ___bufLen_13;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::writeToNull
	bool ___writeToNull_14;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::hadDoubleBracket
	bool ___hadDoubleBracket_15;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::inAttributeValue
	bool ___inAttributeValue_16;
	// System.Xml.NewLineHandling System.Xml.XmlUtf8RawTextWriter::newLineHandling
	int32_t ___newLineHandling_17;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::closeOutput
	bool ___closeOutput_18;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::omitXmlDeclaration
	bool ___omitXmlDeclaration_19;
	// System.String System.Xml.XmlUtf8RawTextWriter::newLineChars
	String_t* ___newLineChars_20;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::checkCharacters
	bool ___checkCharacters_21;
	// System.Xml.XmlStandalone System.Xml.XmlUtf8RawTextWriter::standalone
	int32_t ___standalone_22;
	// System.Xml.XmlOutputMethod System.Xml.XmlUtf8RawTextWriter::outputMethod
	int32_t ___outputMethod_23;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::autoXmlDeclaration
	bool ___autoXmlDeclaration_24;
	// System.Boolean System.Xml.XmlUtf8RawTextWriter::mergeCDataSections
	bool ___mergeCDataSections_25;

public:
	inline static int32_t get_offset_of_useAsync_3() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___useAsync_3)); }
	inline bool get_useAsync_3() const { return ___useAsync_3; }
	inline bool* get_address_of_useAsync_3() { return &___useAsync_3; }
	inline void set_useAsync_3(bool value)
	{
		___useAsync_3 = value;
	}

	inline static int32_t get_offset_of_bufBytes_4() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___bufBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bufBytes_4() const { return ___bufBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bufBytes_4() { return &___bufBytes_4; }
	inline void set_bufBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bufBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_7() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___xmlCharType_7)); }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  get_xmlCharType_7() const { return ___xmlCharType_7; }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA * get_address_of_xmlCharType_7() { return &___xmlCharType_7; }
	inline void set_xmlCharType_7(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  value)
	{
		___xmlCharType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_7))->___charProperties_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_bufPos_8() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___bufPos_8)); }
	inline int32_t get_bufPos_8() const { return ___bufPos_8; }
	inline int32_t* get_address_of_bufPos_8() { return &___bufPos_8; }
	inline void set_bufPos_8(int32_t value)
	{
		___bufPos_8 = value;
	}

	inline static int32_t get_offset_of_textPos_9() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___textPos_9)); }
	inline int32_t get_textPos_9() const { return ___textPos_9; }
	inline int32_t* get_address_of_textPos_9() { return &___textPos_9; }
	inline void set_textPos_9(int32_t value)
	{
		___textPos_9 = value;
	}

	inline static int32_t get_offset_of_contentPos_10() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___contentPos_10)); }
	inline int32_t get_contentPos_10() const { return ___contentPos_10; }
	inline int32_t* get_address_of_contentPos_10() { return &___contentPos_10; }
	inline void set_contentPos_10(int32_t value)
	{
		___contentPos_10 = value;
	}

	inline static int32_t get_offset_of_cdataPos_11() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___cdataPos_11)); }
	inline int32_t get_cdataPos_11() const { return ___cdataPos_11; }
	inline int32_t* get_address_of_cdataPos_11() { return &___cdataPos_11; }
	inline void set_cdataPos_11(int32_t value)
	{
		___cdataPos_11 = value;
	}

	inline static int32_t get_offset_of_attrEndPos_12() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___attrEndPos_12)); }
	inline int32_t get_attrEndPos_12() const { return ___attrEndPos_12; }
	inline int32_t* get_address_of_attrEndPos_12() { return &___attrEndPos_12; }
	inline void set_attrEndPos_12(int32_t value)
	{
		___attrEndPos_12 = value;
	}

	inline static int32_t get_offset_of_bufLen_13() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___bufLen_13)); }
	inline int32_t get_bufLen_13() const { return ___bufLen_13; }
	inline int32_t* get_address_of_bufLen_13() { return &___bufLen_13; }
	inline void set_bufLen_13(int32_t value)
	{
		___bufLen_13 = value;
	}

	inline static int32_t get_offset_of_writeToNull_14() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___writeToNull_14)); }
	inline bool get_writeToNull_14() const { return ___writeToNull_14; }
	inline bool* get_address_of_writeToNull_14() { return &___writeToNull_14; }
	inline void set_writeToNull_14(bool value)
	{
		___writeToNull_14 = value;
	}

	inline static int32_t get_offset_of_hadDoubleBracket_15() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___hadDoubleBracket_15)); }
	inline bool get_hadDoubleBracket_15() const { return ___hadDoubleBracket_15; }
	inline bool* get_address_of_hadDoubleBracket_15() { return &___hadDoubleBracket_15; }
	inline void set_hadDoubleBracket_15(bool value)
	{
		___hadDoubleBracket_15 = value;
	}

	inline static int32_t get_offset_of_inAttributeValue_16() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___inAttributeValue_16)); }
	inline bool get_inAttributeValue_16() const { return ___inAttributeValue_16; }
	inline bool* get_address_of_inAttributeValue_16() { return &___inAttributeValue_16; }
	inline void set_inAttributeValue_16(bool value)
	{
		___inAttributeValue_16 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_17() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___newLineHandling_17)); }
	inline int32_t get_newLineHandling_17() const { return ___newLineHandling_17; }
	inline int32_t* get_address_of_newLineHandling_17() { return &___newLineHandling_17; }
	inline void set_newLineHandling_17(int32_t value)
	{
		___newLineHandling_17 = value;
	}

	inline static int32_t get_offset_of_closeOutput_18() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___closeOutput_18)); }
	inline bool get_closeOutput_18() const { return ___closeOutput_18; }
	inline bool* get_address_of_closeOutput_18() { return &___closeOutput_18; }
	inline void set_closeOutput_18(bool value)
	{
		___closeOutput_18 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_19() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___omitXmlDeclaration_19)); }
	inline bool get_omitXmlDeclaration_19() const { return ___omitXmlDeclaration_19; }
	inline bool* get_address_of_omitXmlDeclaration_19() { return &___omitXmlDeclaration_19; }
	inline void set_omitXmlDeclaration_19(bool value)
	{
		___omitXmlDeclaration_19 = value;
	}

	inline static int32_t get_offset_of_newLineChars_20() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___newLineChars_20)); }
	inline String_t* get_newLineChars_20() const { return ___newLineChars_20; }
	inline String_t** get_address_of_newLineChars_20() { return &___newLineChars_20; }
	inline void set_newLineChars_20(String_t* value)
	{
		___newLineChars_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLineChars_20), (void*)value);
	}

	inline static int32_t get_offset_of_checkCharacters_21() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___checkCharacters_21)); }
	inline bool get_checkCharacters_21() const { return ___checkCharacters_21; }
	inline bool* get_address_of_checkCharacters_21() { return &___checkCharacters_21; }
	inline void set_checkCharacters_21(bool value)
	{
		___checkCharacters_21 = value;
	}

	inline static int32_t get_offset_of_standalone_22() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___standalone_22)); }
	inline int32_t get_standalone_22() const { return ___standalone_22; }
	inline int32_t* get_address_of_standalone_22() { return &___standalone_22; }
	inline void set_standalone_22(int32_t value)
	{
		___standalone_22 = value;
	}

	inline static int32_t get_offset_of_outputMethod_23() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___outputMethod_23)); }
	inline int32_t get_outputMethod_23() const { return ___outputMethod_23; }
	inline int32_t* get_address_of_outputMethod_23() { return &___outputMethod_23; }
	inline void set_outputMethod_23(int32_t value)
	{
		___outputMethod_23 = value;
	}

	inline static int32_t get_offset_of_autoXmlDeclaration_24() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___autoXmlDeclaration_24)); }
	inline bool get_autoXmlDeclaration_24() const { return ___autoXmlDeclaration_24; }
	inline bool* get_address_of_autoXmlDeclaration_24() { return &___autoXmlDeclaration_24; }
	inline void set_autoXmlDeclaration_24(bool value)
	{
		___autoXmlDeclaration_24 = value;
	}

	inline static int32_t get_offset_of_mergeCDataSections_25() { return static_cast<int32_t>(offsetof(XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2, ___mergeCDataSections_25)); }
	inline bool get_mergeCDataSections_25() const { return ___mergeCDataSections_25; }
	inline bool* get_address_of_mergeCDataSections_25() { return &___mergeCDataSections_25; }
	inline void set_mergeCDataSections_25(bool value)
	{
		___mergeCDataSections_25 = value;
	}
};

// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_tBD850040C8A413474ABDD09A94264E8DDB8E814A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4A17F4F8231360779A20AE96941AAD2DEF8E9E8D(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentPosition_4)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____culture_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____maxDepth_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____stack_12)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_12() const { return ____stack_12; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonWriter
struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_13;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stack_2)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_2() const { return ____stack_2; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentPosition_3)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CAutoCompleteOnCloseU3Ek__BackingField_7)); }
	inline bool get_U3CAutoCompleteOnCloseU3Ek__BackingField_7() const { return ___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return &___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline void set_U3CAutoCompleteOnCloseU3Ek__BackingField_7(bool value)
	{
		___U3CAutoCompleteOnCloseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatHandling_8)); }
	inline int32_t get__dateFormatHandling_8() const { return ____dateFormatHandling_8; }
	inline int32_t* get_address_of__dateFormatHandling_8() { return &____dateFormatHandling_8; }
	inline void set__dateFormatHandling_8(int32_t value)
	{
		____dateFormatHandling_8 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateTimeZoneHandling_9)); }
	inline int32_t get__dateTimeZoneHandling_9() const { return ____dateTimeZoneHandling_9; }
	inline int32_t* get_address_of__dateTimeZoneHandling_9() { return &____dateTimeZoneHandling_9; }
	inline void set__dateTimeZoneHandling_9(int32_t value)
	{
		____dateTimeZoneHandling_9 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stringEscapeHandling_10)); }
	inline int32_t get__stringEscapeHandling_10() const { return ____stringEscapeHandling_10; }
	inline int32_t* get_address_of__stringEscapeHandling_10() { return &____stringEscapeHandling_10; }
	inline void set__stringEscapeHandling_10(int32_t value)
	{
		____stringEscapeHandling_10 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_11() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____floatFormatHandling_11)); }
	inline int32_t get__floatFormatHandling_11() const { return ____floatFormatHandling_11; }
	inline int32_t* get_address_of__floatFormatHandling_11() { return &____floatFormatHandling_11; }
	inline void set__floatFormatHandling_11(int32_t value)
	{
		____floatFormatHandling_11 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_12() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatString_12)); }
	inline String_t* get__dateFormatString_12() const { return ____dateFormatString_12; }
	inline String_t** get_address_of__dateFormatString_12() { return &____dateFormatString_12; }
	inline void set__dateFormatString_12(String_t* value)
	{
		____dateFormatString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_12), (void*)value);
	}

	inline static int32_t get_offset_of__culture_13() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____culture_13)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_13() const { return ____culture_13; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_13() { return &____culture_13; }
	inline void set__culture_13(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_13), (void*)value);
	}
};

struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// System.Xml.TextEncodedRawTextWriter
struct TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162  : public XmlEncodedRawTextWriter_t82EB6C4258593D394E3F5196ECBBBA7A08D47C51
{
public:

public:
};


// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastString_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastSettings_2)); }
	inline TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  value)
	{
		___m_LastSettings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LastSettings_2))->___font_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Verts_5)); }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Verts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Characters_6)); }
	inline List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Characters_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Lines_7)); }
	inline List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lines_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};

// System.Xml.TextUtf8RawTextWriter
struct TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9  : public XmlUtf8RawTextWriter_t5DA88B4BA06B133BF33FADEF5D72ED653C8F7EF2
{
public:

public:
};


// System.Diagnostics.Tracing.TplEtwProvider
struct TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97  : public EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A
{
public:

public:
};

struct TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_StaticFields
{
public:
	// System.Diagnostics.Tracing.TplEtwProvider System.Diagnostics.Tracing.TplEtwProvider::Log
	TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97 * ___Log_29;

public:
	inline static int32_t get_offset_of_Log_29() { return static_cast<int32_t>(offsetof(TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_StaticFields, ___Log_29)); }
	inline TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97 * get_Log_29() const { return ___Log_29; }
	inline TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97 ** get_address_of_Log_29() { return &___Log_29; }
	inline void set_Log_29(TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97 * value)
	{
		___Log_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_29), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Security.Cryptography.TripleDES
struct TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196  : public SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___E1_12)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___E1_12), (void*)value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___D2_13)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D2_13), (void*)value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___E3_14)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___E3_14), (void*)value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___D1_15)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D1_15), (void*)value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___E2_16)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___E2_16), (void*)value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196, ___D3_17)); }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t25C58F0A8ECDD76A55FF56EF8CAC81BB2BBEDF90 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D3_17), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.TraceJsonReader
struct TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC  : public JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Serialization.TraceJsonReader::_innerReader
	JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ____innerReader_15;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonReader::_textWriter
	JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * ____textWriter_16;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonReader::_sw
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * ____sw_17;

public:
	inline static int32_t get_offset_of__innerReader_15() { return static_cast<int32_t>(offsetof(TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC, ____innerReader_15)); }
	inline JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * get__innerReader_15() const { return ____innerReader_15; }
	inline JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE ** get_address_of__innerReader_15() { return &____innerReader_15; }
	inline void set__innerReader_15(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * value)
	{
		____innerReader_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerReader_15), (void*)value);
	}

	inline static int32_t get_offset_of__textWriter_16() { return static_cast<int32_t>(offsetof(TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC, ____textWriter_16)); }
	inline JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * get__textWriter_16() const { return ____textWriter_16; }
	inline JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C ** get_address_of__textWriter_16() { return &____textWriter_16; }
	inline void set__textWriter_16(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * value)
	{
		____textWriter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textWriter_16), (void*)value);
	}

	inline static int32_t get_offset_of__sw_17() { return static_cast<int32_t>(offsetof(TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC, ____sw_17)); }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * get__sw_17() const { return ____sw_17; }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 ** get_address_of__sw_17() { return &____sw_17; }
	inline void set__sw_17(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * value)
	{
		____sw_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sw_17), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.TraceJsonWriter
struct TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087  : public JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837
{
public:
	// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_innerWriter
	JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * ____innerWriter_14;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_textWriter
	JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * ____textWriter_15;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_sw
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * ____sw_16;

public:
	inline static int32_t get_offset_of__innerWriter_14() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087, ____innerWriter_14)); }
	inline JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * get__innerWriter_14() const { return ____innerWriter_14; }
	inline JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 ** get_address_of__innerWriter_14() { return &____innerWriter_14; }
	inline void set__innerWriter_14(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * value)
	{
		____innerWriter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerWriter_14), (void*)value);
	}

	inline static int32_t get_offset_of__textWriter_15() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087, ____textWriter_15)); }
	inline JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * get__textWriter_15() const { return ____textWriter_15; }
	inline JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C ** get_address_of__textWriter_15() { return &____textWriter_15; }
	inline void set__textWriter_15(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C * value)
	{
		____textWriter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textWriter_15), (void*)value);
	}

	inline static int32_t get_offset_of__sw_16() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087, ____sw_16)); }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * get__sw_16() const { return ____sw_16; }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 ** get_address_of__sw_16() { return &____sw_16; }
	inline void set__sw_16(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * value)
	{
		____sw_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sw_16), (void*)value);
	}
};


// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302  : public TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppHString* ___items0);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for System.Collections.Specialized.StringCollection
struct StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringCollection_tA998B5DFD2921A16BBD33D32B8F6CCFFCEB6537E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.StringContent
struct StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringContent_t83CE0967FD151BB908449A2FECB37BDABD9E83A8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringReader_t74E352C280EAC22C878867444978741F19E1F895(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringReader_t74E352C280EAC22C878867444978741F19E1F895_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringTokenizer_tC96D34083131707A01C0FDDCE33EABCAD9F37D91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Extensions.Primitives.StringValues
struct StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper>, IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A, IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F
{
	inline StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742*>(this);
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

		if (::memcmp(&iid, &IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(10);
		interfaceIds[0] = IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742::IID;
		interfaceIds[1] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[2] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[5] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[6] = IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B::IID;
		interfaceIds[7] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[8] = IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID;
		interfaceIds[9] = IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F::IID;

		*iidCount = 10;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648(uint32_t ___index0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC(IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7(uint32_t ___index0, Il2CppHString ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB(uint32_t ___index0, Il2CppHString ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03(Il2CppHString ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA(uint32_t ___items0ArraySize, Il2CppHString* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37(uint32_t ___index0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED(uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB(IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringValues_tF072065151A4080180381AF6F4548C082ACA19E8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringValues_tF072065151A4080180381AF6F4548C082ACA19E8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.TailStream
struct TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.TextEncodedRawTextWriter
struct TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TextEncodedRawTextWriter_tC07A3FA704CE7DECA0D49CF659958C075A39A162_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.TextUtf8RawTextWriter
struct TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TextUtf8RawTextWriter_tD0BDA0777839388246A0D20529B3C799B9E619E9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper>, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.ThreadingModel
struct ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper>, IReference_1_tA218FE6A5685FF60126F5336A8E5D0F847D9F28F, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tA218FE6A5685FF60126F5336A8E5D0F847D9F28F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tA218FE6A5685FF60126F5336A8E5D0F847D9F28F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_tA218FE6A5685FF60126F5336A8E5D0F847D9F28F::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3A245C467FBBF21ED009CD0CF6102C8E729BD486(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ThreadingModel_t5AA378FD342715F061C31AE8AEA87ADCA70ACF60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper>, IReference_1_t3ADE70CDA3709FC1013F86F9093C3BBA79BE6D61, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t3ADE70CDA3709FC1013F86F9093C3BBA79BE6D61::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3ADE70CDA3709FC1013F86F9093C3BBA79BE6D61*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_t3ADE70CDA3709FC1013F86F9093C3BBA79BE6D61::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m094D70F015701799AB2F6315EC70443E973E1DF2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  returnValue;
		try
		{
			returnValue = *static_cast<TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *>(UnBox(GetManagedObjectInline(), TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 15;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  returnValue;
		try
		{
			returnValue = *static_cast<TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *>(UnBox(GetManagedObjectInline(), TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("TimeSpan", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.TimeSpan
struct TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper>, IReference_1_t7F05C50F11A2E104EDEC0A6D4514C39E1328AE71, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t7F05C50F11A2E104EDEC0A6D4514C39E1328AE71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t7F05C50F11A2E104EDEC0A6D4514C39E1328AE71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_t7F05C50F11A2E104EDEC0A6D4514C39E1328AE71::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9DAD0D0D5E0F0123C455BB6EDFA2896377861179(TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6  returnValue;
		try
		{
			returnValue = *static_cast<TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6 *>(UnBox(GetManagedObjectInline(), TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimeSpan_t15D02A23F8CAEAF57855387DF13E5D91AC4871E6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.TimerAwaitable
struct TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimerAwaitable_t39163423549192BAC68FC87DC00FD920D96C17B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MessagePack.TinyJsonReader
struct TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TinyJsonReader_t74B290EF419FFDCB7E94C34EB553E01889626561_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TouchHistory_t6ECE362D17F175003C0AE9AFCD22321D071376A0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.TplEtwProvider
struct TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TplEtwProvider_t012D2A17058F066CEDDFA4DE310206A23CF47F97_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Serialization.TraceJsonReader
struct TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TraceJsonReader_tE6DA43BAD64EFB997CF58512B20ABCDA1B8183AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Serialization.TraceJsonWriter
struct TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TraceJsonWriter_t6FB08447EF8DF21EF68AED88A72F08B8E284D087_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Json.TranscodingReadStream
struct TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TranscodingReadStream_t4DD39C85C1E1DEAB3ACFE36DEC262AD969B2FED8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Json.TranscodingWriteStream
struct TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TranscodingWriteStream_t924AF96526663FEE9DE079FBA58E0D515DBEF094_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TripleDESCryptoServiceProvider_t80636A423B3102460DEC2FF2B0D12528B304F302_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TripleDESTransform_tFA25961FFD229B50425BE6D613FCF4406752E196_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Type
struct Type_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Type_t_ComCallableWrapper>, IReference_1_tBD850040C8A413474ABDD09A94264E8DDB8E814A, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Type_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Type_t_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tBD850040C8A413474ABDD09A94264E8DDB8E814A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tBD850040C8A413474ABDD09A94264E8DDB8E814A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_tBD850040C8A413474ABDD09A94264E8DDB8E814A::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4A17F4F8231360779A20AE96941AAD2DEF8E9E8D(Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Type_t * returnValue;
		try
		{
			returnValue = static_cast<Type_t *>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		// Marshaling of return value back from managed representation
		Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
		il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Type_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Type_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Type_t_ComCallableWrapper(obj));
}
