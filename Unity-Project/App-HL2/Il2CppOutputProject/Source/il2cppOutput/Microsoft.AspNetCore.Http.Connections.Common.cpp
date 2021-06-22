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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734;
// System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>
struct IList_1_t27A5F725859870F8A1DF854064E70FDDD00708C1;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.List`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>
struct List_1_t5769478697F207E3E987284FBEFFDE1453279048;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25;
// System.Pinnable`1<System.Char>
struct Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// Microsoft.AspNetCore.Http.Connections.AvailableTransport[]
struct AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Microsoft.AspNetCore.Http.Connections.AvailableTransport
struct AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IO.InvalidDataException
struct InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.AspNetCore.Http.Connections.NegotiationResponse
struct NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter
struct ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t626358C5FDB061F21DFA7A02095EAF0578249CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t27A5F725859870F8A1DF854064E70FDDD00708C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5769478697F207E3E987284FBEFFDE1453279048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D____04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A;
IL2CPP_EXTERN_C String_t* _stringLiteral0892A8396C4F3C92BC53BCD9D9BC85FB20735F0A;
IL2CPP_EXTERN_C String_t* _stringLiteral103CD1E8513D506E45AE47C4BDEABFB713D7E8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral137B7AA72CB7DD7F3A6E1E1250FE642C6FF17F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral13BFF63CFED806451BC98A54169212FE8F17D0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral260727C413292B2078220DF57528EA4F36D1A3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral3339796C3AE8EC8D516BCCBAA254AD48AD1E3EEE;
IL2CPP_EXTERN_C String_t* _stringLiteral37CFD62B57A2A099207F3F568CB3DD06EE833097;
IL2CPP_EXTERN_C String_t* _stringLiteral3E73F64CA9735FB979F0ADF900D1E85173AF5567;
IL2CPP_EXTERN_C String_t* _stringLiteral4089C4157C8E819F2FA7F020E98EE41253103DDE;
IL2CPP_EXTERN_C String_t* _stringLiteral5ACC87E6B2B548D708984D8A5ABA764C905ACDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral5E216C1D4603F137356C88F9B48B0DFF27747483;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED9938728C6249D8D8F3DCFD3D6897CDBEA198C;
IL2CPP_EXTERN_C String_t* _stringLiteral64C99273009008F2814C530DB6265687D3B61A73;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8051D13CC169C6860F3F5AEFFD288377EA0991;
IL2CPP_EXTERN_C String_t* _stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABE710800A7E6EA605F68D846517582CE0C34E3;
IL2CPP_EXTERN_C String_t* _stringLiteral832B7DA664B30679D6DFA5E1F227E1AAEB43FCD8;
IL2CPP_EXTERN_C String_t* _stringLiteral93DF992285A728E8E1D638CA6FAEE96CCD4C73F9;
IL2CPP_EXTERN_C String_t* _stringLiteralB4CB0CE6E87C36CD5F11B2488DB41322EB1E7932;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF1D25B05860FF3AADE7EC54A45D791634970B6;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
IL2CPP_EXTERN_C String_t* _stringLiteralC738372F9EABB0FC755ECE7CC80E939A5E3C4AF7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C String_t* _stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66;
IL2CPP_EXTERN_C String_t* _stringLiteralDEAC62A815B0D4B2567C35504D87950CE15F5A72;
IL2CPP_EXTERN_C String_t* _stringLiteralEF38E1C661272EC8BF921ABCC3971C1F42743B75;
IL2CPP_EXTERN_C String_t* _stringLiteralF77FC5989DD594BB4B8DB8AAA2209FD948963A83;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD382245C1077F70594A7C02B505A7C77888DD5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD973C66CEAEABDED5C85EDE3502FA96D5BC971CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7FF0487F92C27D19CFFB65B8F9DFEB97F681181D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegotiateProtocol_ParseResponse_mBA954EC20B711C458E57BA1A9D3A1C73A62EF915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_EnsureObjectStart_m32741414182E546BC943B50D295F3F2AC95C4A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsBoolean_m27BE1098BF23B406D4AF8E005E654EF4A08D35A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsInt32_m876EB0D970B3A18C9FA2AC010182BF3A142AE067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB646F9991F42BBE498A336F42F23B1FCE5AC8525 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>
struct List_1_t5769478697F207E3E987284FBEFFDE1453279048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5769478697F207E3E987284FBEFFDE1453279048, ____items_1)); }
	inline AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* get__items_1() const { return ____items_1; }
	inline AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5769478697F207E3E987284FBEFFDE1453279048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5769478697F207E3E987284FBEFFDE1453279048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5769478697F207E3E987284FBEFFDE1453279048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5769478697F207E3E987284FBEFFDE1453279048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5769478697F207E3E987284FBEFFDE1453279048_StaticFields, ____emptyArray_5)); }
	inline AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AvailableTransportU5BU5D_tE3C5FF1C30095058625F2D6FA7B60F03FE37474E* value)
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


// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA  : public RuntimeObject
{
public:

public:
};


// System.Pinnable`1<System.Byte>
struct Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25, ___Data_0)); }
	inline uint8_t get_Data_0() const { return ___Data_0; }
	inline uint8_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(uint8_t value)
	{
		___Data_0 = value;
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


// Microsoft.AspNetCore.Http.Connections.AvailableTransport
struct AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96  : public RuntimeObject
{
public:
	// System.String Microsoft.AspNetCore.Http.Connections.AvailableTransport::<Transport>k__BackingField
	String_t* ___U3CTransportU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.String> Microsoft.AspNetCore.Http.Connections.AvailableTransport::<TransferFormats>k__BackingField
	RuntimeObject* ___U3CTransferFormatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTransportU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96, ___U3CTransportU3Ek__BackingField_0)); }
	inline String_t* get_U3CTransportU3Ek__BackingField_0() const { return ___U3CTransportU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTransportU3Ek__BackingField_0() { return &___U3CTransportU3Ek__BackingField_0; }
	inline void set_U3CTransportU3Ek__BackingField_0(String_t* value)
	{
		___U3CTransportU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransportU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransferFormatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96, ___U3CTransferFormatsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CTransferFormatsU3Ek__BackingField_1() const { return ___U3CTransferFormatsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CTransferFormatsU3Ek__BackingField_1() { return &___U3CTransferFormatsU3Ek__BackingField_1; }
	inline void set_U3CTransferFormatsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CTransferFormatsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransferFormatsU3Ek__BackingField_1), (void*)value);
	}
};


// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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


// Microsoft.AspNetCore.Http.Connections.NegotiationResponse
struct NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4  : public RuntimeObject
{
public:
	// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_0;
	// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_1;
	// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<ConnectionId>k__BackingField
	String_t* ___U3CConnectionIdU3Ek__BackingField_2;
	// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<ConnectionToken>k__BackingField
	String_t* ___U3CConnectionTokenU3Ek__BackingField_3;
	// System.Int32 Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport> Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<AvailableTransports>k__BackingField
	RuntimeObject* ___U3CAvailableTransportsU3Ek__BackingField_5;
	// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CUrlU3Ek__BackingField_0)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_0() const { return ___U3CUrlU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_0() { return &___U3CUrlU3Ek__BackingField_0; }
	inline void set_U3CUrlU3Ek__BackingField_0(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CAccessTokenU3Ek__BackingField_1)); }
	inline String_t* get_U3CAccessTokenU3Ek__BackingField_1() const { return ___U3CAccessTokenU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAccessTokenU3Ek__BackingField_1() { return &___U3CAccessTokenU3Ek__BackingField_1; }
	inline void set_U3CAccessTokenU3Ek__BackingField_1(String_t* value)
	{
		___U3CAccessTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CConnectionIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CConnectionIdU3Ek__BackingField_2() const { return ___U3CConnectionIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CConnectionIdU3Ek__BackingField_2() { return &___U3CConnectionIdU3Ek__BackingField_2; }
	inline void set_U3CConnectionIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CConnectionIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CConnectionTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CConnectionTokenU3Ek__BackingField_3() const { return ___U3CConnectionTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CConnectionTokenU3Ek__BackingField_3() { return &___U3CConnectionTokenU3Ek__BackingField_3; }
	inline void set_U3CConnectionTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CConnectionTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CVersionU3Ek__BackingField_4)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_4() const { return ___U3CVersionU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_4() { return &___U3CVersionU3Ek__BackingField_4; }
	inline void set_U3CVersionU3Ek__BackingField_4(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableTransportsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CAvailableTransportsU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CAvailableTransportsU3Ek__BackingField_5() const { return ___U3CAvailableTransportsU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CAvailableTransportsU3Ek__BackingField_5() { return &___U3CAvailableTransportsU3Ek__BackingField_5; }
	inline void set_U3CAvailableTransportsU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CAvailableTransportsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAvailableTransportsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4, ___U3CErrorU3Ek__BackingField_6)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_6() const { return ___U3CErrorU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_6() { return &___U3CErrorU3Ek__BackingField_6; }
	inline void set_U3CErrorU3Ek__BackingField_6(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter
struct ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0  : public RuntimeObject
{
public:
	// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::_writer
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ____writer_1;

public:
	inline static int32_t get_offset_of__writer_1() { return static_cast<int32_t>(offsetof(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0, ____writer_1)); }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * get__writer_1() const { return ____writer_1; }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 ** get_address_of__writer_1() { return &____writer_1; }
	inline void set__writer_1(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * value)
	{
		____writer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_1), (void*)value);
	}
};

struct ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::_cachedInstance
	ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * ____cachedInstance_0;

public:
	inline static int32_t get_offset_of__cachedInstance_0() { return static_cast<int32_t>(offsetof(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_ThreadStaticFields, ____cachedInstance_0)); }
	inline ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * get__cachedInstance_0() const { return ____cachedInstance_0; }
	inline ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 ** get_address_of__cachedInstance_0() { return &____cachedInstance_0; }
	inline void set__cachedInstance_0(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * value)
	{
		____cachedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_0), (void*)value);
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


// Microsoft.AspNetCore.Internal.SystemTextJsonExtensions
struct SystemTextJsonExtensions_t82A28E32B274B3701B4A38CCFA78142B38EF9EE0  : public RuntimeObject
{
public:

public:
};


// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A  : public RuntimeObject
{
public:
	// System.Byte[][] System.Text.Encodings.Web.TextEncoder::_asciiEscape
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____asciiEscape_0;
	// System.Int32[] System.Text.Encodings.Web.TextEncoder::_asciiNeedsEscaping
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____asciiNeedsEscaping_1;

public:
	inline static int32_t get_offset_of__asciiEscape_0() { return static_cast<int32_t>(offsetof(TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A, ____asciiEscape_0)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__asciiEscape_0() const { return ____asciiEscape_0; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__asciiEscape_0() { return &____asciiEscape_0; }
	inline void set__asciiEscape_0(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____asciiEscape_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asciiEscape_0), (void*)value);
	}

	inline static int32_t get_offset_of__asciiNeedsEscaping_1() { return static_cast<int32_t>(offsetof(TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A, ____asciiNeedsEscaping_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__asciiNeedsEscaping_1() const { return ____asciiNeedsEscaping_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__asciiNeedsEscaping_1() { return &____asciiNeedsEscaping_1; }
	inline void set__asciiNeedsEscaping_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____asciiNeedsEscaping_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asciiNeedsEscaping_1), (void*)value);
	}
};

struct TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A_StaticFields
{
public:
	// System.Byte[] System.Text.Encodings.Web.TextEncoder::s_noEscape
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_noEscape_2;

public:
	inline static int32_t get_offset_of_s_noEscape_2() { return static_cast<int32_t>(offsetof(TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A_StaticFields, ___s_noEscape_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_noEscape_2() const { return ___s_noEscape_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_noEscape_2() { return &___s_noEscape_2; }
	inline void set_s_noEscape_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_noEscape_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_noEscape_2), (void*)value);
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

// System.Memory`1<System.Byte>
struct Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 
{
public:
	// System.Object System.Memory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke_define
#define Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke_define
struct Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com_define
#define Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com_define
struct Memory_1_t74EC64394948867EA4B88BA52AD556B6B8F1FFDD_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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


// System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B 
{
public:
	// System.UInt32[] System.Text.Internal.AllowedCharactersBitmap::_allowedCharacters
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____allowedCharacters_1;

public:
	inline static int32_t get_offset_of__allowedCharacters_1() { return static_cast<int32_t>(offsetof(AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B, ____allowedCharacters_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__allowedCharacters_1() const { return ____allowedCharacters_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__allowedCharacters_1() { return &____allowedCharacters_1; }
	inline void set__allowedCharacters_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____allowedCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allowedCharacters_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_1;
};
// Native definition for COM marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_1;
};

// System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B 
{
public:
	// System.Int32[] System.Text.Json.BitStack::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_2;
	// System.UInt64 System.Text.Json.BitStack::_allocationFreeContainer
	uint64_t ____allocationFreeContainer_3;
	// System.Int32 System.Text.Json.BitStack::_currentDepth
	int32_t ____currentDepth_4;

public:
	inline static int32_t get_offset_of__array_2() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____array_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_2() const { return ____array_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_2() { return &____array_2; }
	inline void set__array_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_2), (void*)value);
	}

	inline static int32_t get_offset_of__allocationFreeContainer_3() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____allocationFreeContainer_3)); }
	inline uint64_t get__allocationFreeContainer_3() const { return ____allocationFreeContainer_3; }
	inline uint64_t* get_address_of__allocationFreeContainer_3() { return &____allocationFreeContainer_3; }
	inline void set__allocationFreeContainer_3(uint64_t value)
	{
		____allocationFreeContainer_3 = value;
	}

	inline static int32_t get_offset_of__currentDepth_4() { return static_cast<int32_t>(offsetof(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B, ____currentDepth_4)); }
	inline int32_t get__currentDepth_4() const { return ____currentDepth_4; }
	inline int32_t* get_address_of__currentDepth_4() { return &____currentDepth_4; }
	inline void set__currentDepth_4(int32_t value)
	{
		____currentDepth_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____array_2;
	uint64_t ____allocationFreeContainer_3;
	int32_t ____currentDepth_4;
};
// Native definition for COM marshalling of System.Text.Json.BitStack
struct BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____array_2;
	uint64_t ____allocationFreeContainer_3;
	int32_t ____currentDepth_4;
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


// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6  : public TextEncoder_tF01ECAD6F1E2F2523B4B1B63762D505D4641C18A
{
public:

public:
};


// System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 
{
public:
	// System.Byte[] System.Text.Json.JsonEncodedText::_utf8Value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____utf8Value_0;
	// System.String System.Text.Json.JsonEncodedText::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__utf8Value_0() { return static_cast<int32_t>(offsetof(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867, ____utf8Value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__utf8Value_0() const { return ____utf8Value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__utf8Value_0() { return &____utf8Value_0; }
	inline void set__utf8Value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____utf8Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8Value_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	char* ____value_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	Il2CppChar* ____value_1;
};

// System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 
{
public:
	// System.Int32 System.Text.Json.JsonWriterOptions::_optionsMask
	int32_t ____optionsMask_0;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::<Encoder>k__BackingField
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__optionsMask_0() { return static_cast<int32_t>(offsetof(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867, ____optionsMask_0)); }
	inline int32_t get__optionsMask_0() const { return ____optionsMask_0; }
	inline int32_t* get_address_of__optionsMask_0() { return &____optionsMask_0; }
	inline void set__optionsMask_0(int32_t value)
	{
		____optionsMask_0 = value;
	}

	inline static int32_t get_offset_of_U3CEncoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867, ___U3CEncoderU3Ek__BackingField_1)); }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * get_U3CEncoderU3Ek__BackingField_1() const { return ___U3CEncoderU3Ek__BackingField_1; }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 ** get_address_of_U3CEncoderU3Ek__BackingField_1() { return &___U3CEncoderU3Ek__BackingField_1; }
	inline void set_U3CEncoderU3Ek__BackingField_1(JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * value)
	{
		___U3CEncoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEncoderU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867_marshaled_pinvoke
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867_marshaled_com
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___U3CEncoderU3Ek__BackingField_1;
};

// System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 
{
public:
	// System.Object System.SequencePosition::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__integer_1() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____integer_1)); }
	inline int32_t get__integer_1() const { return ____integer_1; }
	inline int32_t* get_address_of__integer_1() { return &____integer_1; }
	inline void set__integer_1(int32_t value)
	{
		____integer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
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


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
struct __StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526 
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
		uint8_t __StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526__padding[15];
	};

public:
};


// System.SpanHelpers/PerTypeValues`1<System.Byte>
struct PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171  : public RuntimeObject
{
public:

public:
};

struct PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields
{
public:
	// System.Boolean System.SpanHelpers/PerTypeValues`1::IsReferenceOrContainsReferences
	bool ___IsReferenceOrContainsReferences_0;
	// T[] System.SpanHelpers/PerTypeValues`1::EmptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyArray_1;
	// System.IntPtr System.SpanHelpers/PerTypeValues`1::ArrayAdjustment
	intptr_t ___ArrayAdjustment_2;

public:
	inline static int32_t get_offset_of_IsReferenceOrContainsReferences_0() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___IsReferenceOrContainsReferences_0)); }
	inline bool get_IsReferenceOrContainsReferences_0() const { return ___IsReferenceOrContainsReferences_0; }
	inline bool* get_address_of_IsReferenceOrContainsReferences_0() { return &___IsReferenceOrContainsReferences_0; }
	inline void set_IsReferenceOrContainsReferences_0(bool value)
	{
		___IsReferenceOrContainsReferences_0 = value;
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___EmptyArray_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayAdjustment_2() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields, ___ArrayAdjustment_2)); }
	inline intptr_t get_ArrayAdjustment_2() const { return ___ArrayAdjustment_2; }
	inline intptr_t* get_address_of_ArrayAdjustment_2() { return &___ArrayAdjustment_2; }
	inline void set_ArrayAdjustment_2(intptr_t value)
	{
		___ArrayAdjustment_2 = value;
	}
};


// System.SpanHelpers/PerTypeValues`1<System.Char>
struct PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584  : public RuntimeObject
{
public:

public:
};

struct PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584_StaticFields
{
public:
	// System.Boolean System.SpanHelpers/PerTypeValues`1::IsReferenceOrContainsReferences
	bool ___IsReferenceOrContainsReferences_0;
	// T[] System.SpanHelpers/PerTypeValues`1::EmptyArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___EmptyArray_1;
	// System.IntPtr System.SpanHelpers/PerTypeValues`1::ArrayAdjustment
	intptr_t ___ArrayAdjustment_2;

public:
	inline static int32_t get_offset_of_IsReferenceOrContainsReferences_0() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584_StaticFields, ___IsReferenceOrContainsReferences_0)); }
	inline bool get_IsReferenceOrContainsReferences_0() const { return ___IsReferenceOrContainsReferences_0; }
	inline bool* get_address_of_IsReferenceOrContainsReferences_0() { return &___IsReferenceOrContainsReferences_0; }
	inline void set_IsReferenceOrContainsReferences_0(bool value)
	{
		___IsReferenceOrContainsReferences_0 = value;
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584_StaticFields, ___EmptyArray_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayAdjustment_2() { return static_cast<int32_t>(offsetof(PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584_StaticFields, ___ArrayAdjustment_2)); }
	inline intptr_t get_ArrayAdjustment_2() const { return ___ArrayAdjustment_2; }
	inline intptr_t* get_address_of_ArrayAdjustment_2() { return &___ArrayAdjustment_2; }
	inline void set_ArrayAdjustment_2(intptr_t value)
	{
		___ArrayAdjustment_2 = value;
	}
};


// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 
{
public:
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceStart
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ____sequenceStart_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceEnd
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ____sequenceEnd_1;

public:
	inline static int32_t get_offset_of__sequenceStart_0() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908, ____sequenceStart_0)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get__sequenceStart_0() const { return ____sequenceStart_0; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of__sequenceStart_0() { return &____sequenceStart_0; }
	inline void set__sequenceStart_0(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		____sequenceStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceStart_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__sequenceEnd_1() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908, ____sequenceEnd_1)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get__sequenceEnd_1() const { return ____sequenceEnd_1; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of__sequenceEnd_1() { return &____sequenceEnd_1; }
	inline void set__sequenceEnd_1(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		____sequenceEnd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceEnd_1))->____object_0), (void*)NULL);
	}
};

struct ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908_StaticFields
{
public:
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908_StaticFields, ___Empty_2)); }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  get_Empty_2() const { return ___Empty_2; }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};


// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____pinnable_0)); }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
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


// System.Span`1<System.Byte>
struct Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____pinnable_0)); }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Char>
struct Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241, ____pinnable_0)); }
	inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF
	__StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526  ___04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0;

public:
	inline static int32_t get_offset_of_U304394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D_StaticFields, ___04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0)); }
	inline __StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526  get_U304394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0() const { return ___04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0; }
	inline __StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526 * get_address_of_U304394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0() { return &___04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0; }
	inline void set_U304394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0(__StaticArrayInitTypeSizeU3D15_t4AE6C00D8DA19ABEFE9954460861444F5DD72526  value)
	{
		___04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0 = value;
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


// Microsoft.AspNetCore.Http.Connections.HttpTransportType
struct HttpTransportType_t249AB59F339CEB9A33746A801E8E7E4AA4CE0E2D 
{
public:
	// System.Int32 Microsoft.AspNetCore.Http.Connections.HttpTransportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpTransportType_t249AB59F339CEB9A33746A801E8E7E4AA4CE0E2D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonCommentHandling
struct JsonCommentHandling_t7CF4D6E8699225352765CA2C00FB9D9343563B39 
{
public:
	// System.Byte System.Text.Json.JsonCommentHandling::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonCommentHandling_t7CF4D6E8699225352765CA2C00FB9D9343563B39, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Text.Json.JsonTokenType
struct JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F 
{
public:
	// System.Byte System.Text.Json.JsonTokenType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// Microsoft.AspNetCore.Http.Connections.NegotiateProtocol
struct NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC  : public RuntimeObject
{
public:

public:
};

struct NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields
{
public:
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ConnectionIdPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ConnectionIdPropertyNameBytes_1;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ConnectionTokenPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ConnectionTokenPropertyNameBytes_3;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::UrlPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___UrlPropertyNameBytes_5;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::AccessTokenPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___AccessTokenPropertyNameBytes_7;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::AvailableTransportsPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___AvailableTransportsPropertyNameBytes_9;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::TransportPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___TransportPropertyNameBytes_11;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::TransferFormatsPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___TransferFormatsPropertyNameBytes_13;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ErrorPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ErrorPropertyNameBytes_15;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::NegotiateVersionPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___NegotiateVersionPropertyNameBytes_17;

public:
	inline static int32_t get_offset_of_ConnectionIdPropertyNameBytes_1() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___ConnectionIdPropertyNameBytes_1)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ConnectionIdPropertyNameBytes_1() const { return ___ConnectionIdPropertyNameBytes_1; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ConnectionIdPropertyNameBytes_1() { return &___ConnectionIdPropertyNameBytes_1; }
	inline void set_ConnectionIdPropertyNameBytes_1(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ConnectionIdPropertyNameBytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ConnectionIdPropertyNameBytes_1))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ConnectionIdPropertyNameBytes_1))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ConnectionTokenPropertyNameBytes_3() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___ConnectionTokenPropertyNameBytes_3)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ConnectionTokenPropertyNameBytes_3() const { return ___ConnectionTokenPropertyNameBytes_3; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ConnectionTokenPropertyNameBytes_3() { return &___ConnectionTokenPropertyNameBytes_3; }
	inline void set_ConnectionTokenPropertyNameBytes_3(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ConnectionTokenPropertyNameBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ConnectionTokenPropertyNameBytes_3))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ConnectionTokenPropertyNameBytes_3))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_UrlPropertyNameBytes_5() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___UrlPropertyNameBytes_5)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_UrlPropertyNameBytes_5() const { return ___UrlPropertyNameBytes_5; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_UrlPropertyNameBytes_5() { return &___UrlPropertyNameBytes_5; }
	inline void set_UrlPropertyNameBytes_5(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___UrlPropertyNameBytes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___UrlPropertyNameBytes_5))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___UrlPropertyNameBytes_5))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_AccessTokenPropertyNameBytes_7() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___AccessTokenPropertyNameBytes_7)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_AccessTokenPropertyNameBytes_7() const { return ___AccessTokenPropertyNameBytes_7; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_AccessTokenPropertyNameBytes_7() { return &___AccessTokenPropertyNameBytes_7; }
	inline void set_AccessTokenPropertyNameBytes_7(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___AccessTokenPropertyNameBytes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AccessTokenPropertyNameBytes_7))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___AccessTokenPropertyNameBytes_7))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_AvailableTransportsPropertyNameBytes_9() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___AvailableTransportsPropertyNameBytes_9)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_AvailableTransportsPropertyNameBytes_9() const { return ___AvailableTransportsPropertyNameBytes_9; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_AvailableTransportsPropertyNameBytes_9() { return &___AvailableTransportsPropertyNameBytes_9; }
	inline void set_AvailableTransportsPropertyNameBytes_9(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___AvailableTransportsPropertyNameBytes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AvailableTransportsPropertyNameBytes_9))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___AvailableTransportsPropertyNameBytes_9))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TransportPropertyNameBytes_11() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___TransportPropertyNameBytes_11)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_TransportPropertyNameBytes_11() const { return ___TransportPropertyNameBytes_11; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_TransportPropertyNameBytes_11() { return &___TransportPropertyNameBytes_11; }
	inline void set_TransportPropertyNameBytes_11(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___TransportPropertyNameBytes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TransportPropertyNameBytes_11))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TransportPropertyNameBytes_11))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TransferFormatsPropertyNameBytes_13() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___TransferFormatsPropertyNameBytes_13)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_TransferFormatsPropertyNameBytes_13() const { return ___TransferFormatsPropertyNameBytes_13; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_TransferFormatsPropertyNameBytes_13() { return &___TransferFormatsPropertyNameBytes_13; }
	inline void set_TransferFormatsPropertyNameBytes_13(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___TransferFormatsPropertyNameBytes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TransferFormatsPropertyNameBytes_13))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TransferFormatsPropertyNameBytes_13))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ErrorPropertyNameBytes_15() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___ErrorPropertyNameBytes_15)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ErrorPropertyNameBytes_15() const { return ___ErrorPropertyNameBytes_15; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ErrorPropertyNameBytes_15() { return &___ErrorPropertyNameBytes_15; }
	inline void set_ErrorPropertyNameBytes_15(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ErrorPropertyNameBytes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ErrorPropertyNameBytes_15))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ErrorPropertyNameBytes_15))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NegotiateVersionPropertyNameBytes_17() { return static_cast<int32_t>(offsetof(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields, ___NegotiateVersionPropertyNameBytes_17)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_NegotiateVersionPropertyNameBytes_17() const { return ___NegotiateVersionPropertyNameBytes_17; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_NegotiateVersionPropertyNameBytes_17() { return &___NegotiateVersionPropertyNameBytes_17; }
	inline void set_NegotiateVersionPropertyNameBytes_17(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___NegotiateVersionPropertyNameBytes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NegotiateVersionPropertyNameBytes_17))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NegotiateVersionPropertyNameBytes_17))->____value_1), (void*)NULL);
		#endif
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


// System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder
struct UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4  : public JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6
{
public:
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::_allowedCharacters
	AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B  ____allowedCharacters_3;

public:
	inline static int32_t get_offset_of__allowedCharacters_3() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4, ____allowedCharacters_3)); }
	inline AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B  get__allowedCharacters_3() const { return ____allowedCharacters_3; }
	inline AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B * get_address_of__allowedCharacters_3() { return &____allowedCharacters_3; }
	inline void set__allowedCharacters_3(AllowedCharactersBitmap_t4EF9A72C165E3C1C3B43128F1B4C289F311EC94B  value)
	{
		____allowedCharacters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____allowedCharacters_3))->____allowedCharacters_1), (void*)NULL);
	}
};

struct UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields
{
public:
	// System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_singleton
	UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4 * ___s_singleton_4;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_b
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_b_5;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_t
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_t_6;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_n
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_n_7;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_f
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_f_8;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_r
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_r_9;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_back
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_back_10;
	// System.Char[] System.Text.Encodings.Web.UnsafeRelaxedJavaScriptEncoder::s_doubleQuote
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_doubleQuote_11;

public:
	inline static int32_t get_offset_of_s_singleton_4() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_singleton_4)); }
	inline UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4 * get_s_singleton_4() const { return ___s_singleton_4; }
	inline UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4 ** get_address_of_s_singleton_4() { return &___s_singleton_4; }
	inline void set_s_singleton_4(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4 * value)
	{
		___s_singleton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_singleton_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_b_5() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_b_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_b_5() const { return ___s_b_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_b_5() { return &___s_b_5; }
	inline void set_s_b_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_b_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_b_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_t_6() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_t_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_t_6() const { return ___s_t_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_t_6() { return &___s_t_6; }
	inline void set_s_t_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_t_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_t_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_n_7() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_n_7)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_n_7() const { return ___s_n_7; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_n_7() { return &___s_n_7; }
	inline void set_s_n_7(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_n_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_n_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_f_8() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_f_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_f_8() const { return ___s_f_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_f_8() { return &___s_f_8; }
	inline void set_s_f_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_f_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_f_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_r_9() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_r_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_r_9() const { return ___s_r_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_r_9() { return &___s_r_9; }
	inline void set_s_r_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_r_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_r_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_back_10() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_back_10)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_back_10() const { return ___s_back_10; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_back_10() { return &___s_back_10; }
	inline void set_s_back_10(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_back_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_back_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_doubleQuote_11() { return static_cast<int32_t>(offsetof(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields, ___s_doubleQuote_11)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_doubleQuote_11() const { return ___s_doubleQuote_11; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_doubleQuote_11() { return &___s_doubleQuote_11; }
	inline void set_s_doubleQuote_11(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_doubleQuote_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_doubleQuote_11), (void*)value);
	}
};


// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.Encoder Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_14;
	// System.Buffers.IBufferWriter`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_bufferWriter
	RuntimeObject* ____bufferWriter_15;
	// System.Memory`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_memory
	Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  ____memory_16;
	// System.Int32 Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_memoryUsed
	int32_t ____memoryUsed_17;

public:
	inline static int32_t get_offset_of__encoder_14() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD, ____encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_14() const { return ____encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_14() { return &____encoder_14; }
	inline void set__encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of__bufferWriter_15() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD, ____bufferWriter_15)); }
	inline RuntimeObject* get__bufferWriter_15() const { return ____bufferWriter_15; }
	inline RuntimeObject** get_address_of__bufferWriter_15() { return &____bufferWriter_15; }
	inline void set__bufferWriter_15(RuntimeObject* value)
	{
		____bufferWriter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferWriter_15), (void*)value);
	}

	inline static int32_t get_offset_of__memory_16() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD, ____memory_16)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_16() const { return ____memory_16; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_16() { return &____memory_16; }
	inline void set__memory_16(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_16))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__memoryUsed_17() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD, ____memoryUsed_17)); }
	inline int32_t get__memoryUsed_17() const { return ____memoryUsed_17; }
	inline int32_t* get_address_of__memoryUsed_17() { return &____memoryUsed_17; }
	inline void set__memoryUsed_17(int32_t value)
	{
		____memoryUsed_17 = value;
	}
};

struct Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields
{
public:
	// System.Text.UTF8Encoding Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_utf8NoBom
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ____utf8NoBom_11;
	// System.Int32 Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::MaximumBytesPerUtf8Char
	int32_t ___MaximumBytesPerUtf8Char_12;

public:
	inline static int32_t get_offset_of__utf8NoBom_11() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields, ____utf8NoBom_11)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get__utf8NoBom_11() const { return ____utf8NoBom_11; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of__utf8NoBom_11() { return &____utf8NoBom_11; }
	inline void set__utf8NoBom_11(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		____utf8NoBom_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8NoBom_11), (void*)value);
	}

	inline static int32_t get_offset_of_MaximumBytesPerUtf8Char_12() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields, ___MaximumBytesPerUtf8Char_12)); }
	inline int32_t get_MaximumBytesPerUtf8Char_12() const { return ___MaximumBytesPerUtf8Char_12; }
	inline int32_t* get_address_of_MaximumBytesPerUtf8Char_12() { return &___MaximumBytesPerUtf8Char_12; }
	inline void set_MaximumBytesPerUtf8Char_12(int32_t value)
	{
		___MaximumBytesPerUtf8Char_12 = value;
	}
};

struct Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_cachedInstance
	Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * ____cachedInstance_13;

public:
	inline static int32_t get_offset_of__cachedInstance_13() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ThreadStaticFields, ____cachedInstance_13)); }
	inline Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * get__cachedInstance_13() const { return ____cachedInstance_13; }
	inline Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD ** get_address_of__cachedInstance_13() { return &____cachedInstance_13; }
	inline void set__cachedInstance_13(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * value)
	{
		____cachedInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_13), (void*)value);
	}
};


// Microsoft.AspNetCore.Http.Connections.HttpTransports
struct HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72  : public RuntimeObject
{
public:

public:
};

struct HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_StaticFields
{
public:
	// Microsoft.AspNetCore.Http.Connections.HttpTransportType Microsoft.AspNetCore.Http.Connections.HttpTransports::All
	int32_t ___All_0;

public:
	inline static int32_t get_offset_of_All_0() { return static_cast<int32_t>(offsetof(HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_StaticFields, ___All_0)); }
	inline int32_t get_All_0() const { return ___All_0; }
	inline int32_t* get_address_of_All_0() { return &___All_0; }
	inline void set_All_0(int32_t value)
	{
		___All_0 = value;
	}
};


// System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746 
{
public:
	// System.Int32 System.Text.Json.JsonReaderOptions::_maxDepth
	int32_t ____maxDepth_1;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonReaderOptions::_commentHandling
	uint8_t ____commentHandling_2;
	// System.Boolean System.Text.Json.JsonReaderOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__maxDepth_1() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ____maxDepth_1)); }
	inline int32_t get__maxDepth_1() const { return ____maxDepth_1; }
	inline int32_t* get_address_of__maxDepth_1() { return &____maxDepth_1; }
	inline void set__maxDepth_1(int32_t value)
	{
		____maxDepth_1 = value;
	}

	inline static int32_t get_offset_of__commentHandling_2() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ____commentHandling_2)); }
	inline uint8_t get__commentHandling_2() const { return ____commentHandling_2; }
	inline uint8_t* get_address_of__commentHandling_2() { return &____commentHandling_2; }
	inline void set__commentHandling_2(uint8_t value)
	{
		____commentHandling_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746, ___U3CAllowTrailingCommasU3Ek__BackingField_3)); }
	inline bool get_U3CAllowTrailingCommasU3Ek__BackingField_3() const { return ___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAllowTrailingCommasU3Ek__BackingField_3() { return &___U3CAllowTrailingCommasU3Ek__BackingField_3; }
	inline void set_U3CAllowTrailingCommasU3Ek__BackingField_3(bool value)
	{
		___U3CAllowTrailingCommasU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_pinvoke
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
};
// Native definition for COM marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_com
{
	int32_t ____maxDepth_1;
	uint8_t ____commentHandling_2;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_3;
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


// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236  : public RuntimeObject
{
public:
	// System.Buffers.IBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_output
	RuntimeObject* ____output_3;
	// System.IO.Stream System.Text.Json.Utf8JsonWriter::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.Buffers.ArrayBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_arrayBufferWriter
	ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * ____arrayBufferWriter_5;
	// System.Memory`1<System.Byte> System.Text.Json.Utf8JsonWriter::_memory
	Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  ____memory_6;
	// System.Boolean System.Text.Json.Utf8JsonWriter::_inObject
	bool ____inObject_7;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonWriter::_tokenType
	uint8_t ____tokenType_8;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonWriter::_bitStack
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  ____bitStack_9;
	// System.Int32 System.Text.Json.Utf8JsonWriter::_currentDepth
	int32_t ____currentDepth_10;
	// System.Text.Json.JsonWriterOptions System.Text.Json.Utf8JsonWriter::_options
	JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  ____options_11;
	// System.Int32 System.Text.Json.Utf8JsonWriter::<BytesPending>k__BackingField
	int32_t ___U3CBytesPendingU3Ek__BackingField_12;
	// System.Int64 System.Text.Json.Utf8JsonWriter::<BytesCommitted>k__BackingField
	int64_t ___U3CBytesCommittedU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__output_3() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____output_3)); }
	inline RuntimeObject* get__output_3() const { return ____output_3; }
	inline RuntimeObject** get_address_of__output_3() { return &____output_3; }
	inline void set__output_3(RuntimeObject* value)
	{
		____output_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_3), (void*)value);
	}

	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__arrayBufferWriter_5() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____arrayBufferWriter_5)); }
	inline ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * get__arrayBufferWriter_5() const { return ____arrayBufferWriter_5; }
	inline ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 ** get_address_of__arrayBufferWriter_5() { return &____arrayBufferWriter_5; }
	inline void set__arrayBufferWriter_5(ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3 * value)
	{
		____arrayBufferWriter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayBufferWriter_5), (void*)value);
	}

	inline static int32_t get_offset_of__memory_6() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____memory_6)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_6() const { return ____memory_6; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_6() { return &____memory_6; }
	inline void set__memory_6(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_6))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__inObject_7() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____inObject_7)); }
	inline bool get__inObject_7() const { return ____inObject_7; }
	inline bool* get_address_of__inObject_7() { return &____inObject_7; }
	inline void set__inObject_7(bool value)
	{
		____inObject_7 = value;
	}

	inline static int32_t get_offset_of__tokenType_8() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____tokenType_8)); }
	inline uint8_t get__tokenType_8() const { return ____tokenType_8; }
	inline uint8_t* get_address_of__tokenType_8() { return &____tokenType_8; }
	inline void set__tokenType_8(uint8_t value)
	{
		____tokenType_8 = value;
	}

	inline static int32_t get_offset_of__bitStack_9() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____bitStack_9)); }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  get__bitStack_9() const { return ____bitStack_9; }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B * get_address_of__bitStack_9() { return &____bitStack_9; }
	inline void set__bitStack_9(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  value)
	{
		____bitStack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____bitStack_9))->____array_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentDepth_10() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____currentDepth_10)); }
	inline int32_t get__currentDepth_10() const { return ____currentDepth_10; }
	inline int32_t* get_address_of__currentDepth_10() { return &____currentDepth_10; }
	inline void set__currentDepth_10(int32_t value)
	{
		____currentDepth_10 = value;
	}

	inline static int32_t get_offset_of__options_11() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ____options_11)); }
	inline JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  get__options_11() const { return ____options_11; }
	inline JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * get_address_of__options_11() { return &____options_11; }
	inline void set__options_11(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  value)
	{
		____options_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_11))->___U3CEncoderU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CBytesPendingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ___U3CBytesPendingU3Ek__BackingField_12)); }
	inline int32_t get_U3CBytesPendingU3Ek__BackingField_12() const { return ___U3CBytesPendingU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CBytesPendingU3Ek__BackingField_12() { return &___U3CBytesPendingU3Ek__BackingField_12; }
	inline void set_U3CBytesPendingU3Ek__BackingField_12(int32_t value)
	{
		___U3CBytesPendingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCommittedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236, ___U3CBytesCommittedU3Ek__BackingField_13)); }
	inline int64_t get_U3CBytesCommittedU3Ek__BackingField_13() const { return ___U3CBytesCommittedU3Ek__BackingField_13; }
	inline int64_t* get_address_of_U3CBytesCommittedU3Ek__BackingField_13() { return &___U3CBytesCommittedU3Ek__BackingField_13; }
	inline void set_U3CBytesCommittedU3Ek__BackingField_13(int64_t value)
	{
		___U3CBytesCommittedU3Ek__BackingField_13 = value;
	}
};

struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields
{
public:
	// System.Int32 System.Text.Json.Utf8JsonWriter::s_newLineLength
	int32_t ___s_newLineLength_0;
	// System.Char[] System.Text.Json.Utf8JsonWriter::s_singleLineCommentDelimiter
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___s_singleLineCommentDelimiter_14;

public:
	inline static int32_t get_offset_of_s_newLineLength_0() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields, ___s_newLineLength_0)); }
	inline int32_t get_s_newLineLength_0() const { return ___s_newLineLength_0; }
	inline int32_t* get_address_of_s_newLineLength_0() { return &___s_newLineLength_0; }
	inline void set_s_newLineLength_0(int32_t value)
	{
		___s_newLineLength_0 = value;
	}

	inline static int32_t get_offset_of_s_singleLineCommentDelimiter_14() { return static_cast<int32_t>(offsetof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_StaticFields, ___s_singleLineCommentDelimiter_14)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_s_singleLineCommentDelimiter_14() const { return ___s_singleLineCommentDelimiter_14; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_s_singleLineCommentDelimiter_14() { return &___s_singleLineCommentDelimiter_14; }
	inline void set_s_singleLineCommentDelimiter_14(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___s_singleLineCommentDelimiter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_singleLineCommentDelimiter_14), (void*)value);
	}
};


// System.IO.InvalidDataException
struct InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.Text.Json.JsonReaderState
struct JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788 
{
public:
	// System.Int64 System.Text.Json.JsonReaderState::_lineNumber
	int64_t ____lineNumber_0;
	// System.Int64 System.Text.Json.JsonReaderState::_bytePositionInLine
	int64_t ____bytePositionInLine_1;
	// System.Boolean System.Text.Json.JsonReaderState::_inObject
	bool ____inObject_2;
	// System.Boolean System.Text.Json.JsonReaderState::_isNotPrimitive
	bool ____isNotPrimitive_3;
	// System.Char System.Text.Json.JsonReaderState::_numberFormat
	Il2CppChar ____numberFormat_4;
	// System.Boolean System.Text.Json.JsonReaderState::_stringHasEscaping
	bool ____stringHasEscaping_5;
	// System.Boolean System.Text.Json.JsonReaderState::_trailingCommaBeforeComment
	bool ____trailingCommaBeforeComment_6;
	// System.Text.Json.JsonTokenType System.Text.Json.JsonReaderState::_tokenType
	uint8_t ____tokenType_7;
	// System.Text.Json.JsonTokenType System.Text.Json.JsonReaderState::_previousTokenType
	uint8_t ____previousTokenType_8;
	// System.Text.Json.JsonReaderOptions System.Text.Json.JsonReaderState::_readerOptions
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  ____readerOptions_9;
	// System.Text.Json.BitStack System.Text.Json.JsonReaderState::_bitStack
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  ____bitStack_10;

public:
	inline static int32_t get_offset_of__lineNumber_0() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____lineNumber_0)); }
	inline int64_t get__lineNumber_0() const { return ____lineNumber_0; }
	inline int64_t* get_address_of__lineNumber_0() { return &____lineNumber_0; }
	inline void set__lineNumber_0(int64_t value)
	{
		____lineNumber_0 = value;
	}

	inline static int32_t get_offset_of__bytePositionInLine_1() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____bytePositionInLine_1)); }
	inline int64_t get__bytePositionInLine_1() const { return ____bytePositionInLine_1; }
	inline int64_t* get_address_of__bytePositionInLine_1() { return &____bytePositionInLine_1; }
	inline void set__bytePositionInLine_1(int64_t value)
	{
		____bytePositionInLine_1 = value;
	}

	inline static int32_t get_offset_of__inObject_2() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____inObject_2)); }
	inline bool get__inObject_2() const { return ____inObject_2; }
	inline bool* get_address_of__inObject_2() { return &____inObject_2; }
	inline void set__inObject_2(bool value)
	{
		____inObject_2 = value;
	}

	inline static int32_t get_offset_of__isNotPrimitive_3() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____isNotPrimitive_3)); }
	inline bool get__isNotPrimitive_3() const { return ____isNotPrimitive_3; }
	inline bool* get_address_of__isNotPrimitive_3() { return &____isNotPrimitive_3; }
	inline void set__isNotPrimitive_3(bool value)
	{
		____isNotPrimitive_3 = value;
	}

	inline static int32_t get_offset_of__numberFormat_4() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____numberFormat_4)); }
	inline Il2CppChar get__numberFormat_4() const { return ____numberFormat_4; }
	inline Il2CppChar* get_address_of__numberFormat_4() { return &____numberFormat_4; }
	inline void set__numberFormat_4(Il2CppChar value)
	{
		____numberFormat_4 = value;
	}

	inline static int32_t get_offset_of__stringHasEscaping_5() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____stringHasEscaping_5)); }
	inline bool get__stringHasEscaping_5() const { return ____stringHasEscaping_5; }
	inline bool* get_address_of__stringHasEscaping_5() { return &____stringHasEscaping_5; }
	inline void set__stringHasEscaping_5(bool value)
	{
		____stringHasEscaping_5 = value;
	}

	inline static int32_t get_offset_of__trailingCommaBeforeComment_6() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____trailingCommaBeforeComment_6)); }
	inline bool get__trailingCommaBeforeComment_6() const { return ____trailingCommaBeforeComment_6; }
	inline bool* get_address_of__trailingCommaBeforeComment_6() { return &____trailingCommaBeforeComment_6; }
	inline void set__trailingCommaBeforeComment_6(bool value)
	{
		____trailingCommaBeforeComment_6 = value;
	}

	inline static int32_t get_offset_of__tokenType_7() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____tokenType_7)); }
	inline uint8_t get__tokenType_7() const { return ____tokenType_7; }
	inline uint8_t* get_address_of__tokenType_7() { return &____tokenType_7; }
	inline void set__tokenType_7(uint8_t value)
	{
		____tokenType_7 = value;
	}

	inline static int32_t get_offset_of__previousTokenType_8() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____previousTokenType_8)); }
	inline uint8_t get__previousTokenType_8() const { return ____previousTokenType_8; }
	inline uint8_t* get_address_of__previousTokenType_8() { return &____previousTokenType_8; }
	inline void set__previousTokenType_8(uint8_t value)
	{
		____previousTokenType_8 = value;
	}

	inline static int32_t get_offset_of__readerOptions_9() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____readerOptions_9)); }
	inline JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  get__readerOptions_9() const { return ____readerOptions_9; }
	inline JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746 * get_address_of__readerOptions_9() { return &____readerOptions_9; }
	inline void set__readerOptions_9(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  value)
	{
		____readerOptions_9 = value;
	}

	inline static int32_t get_offset_of__bitStack_10() { return static_cast<int32_t>(offsetof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788, ____bitStack_10)); }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  get__bitStack_10() const { return ____bitStack_10; }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B * get_address_of__bitStack_10() { return &____bitStack_10; }
	inline void set__bitStack_10(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  value)
	{
		____bitStack_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____bitStack_10))->____array_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.JsonReaderState
struct JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788_marshaled_pinvoke
{
	int64_t ____lineNumber_0;
	int64_t ____bytePositionInLine_1;
	int32_t ____inObject_2;
	int32_t ____isNotPrimitive_3;
	uint8_t ____numberFormat_4;
	int32_t ____stringHasEscaping_5;
	int32_t ____trailingCommaBeforeComment_6;
	uint8_t ____tokenType_7;
	uint8_t ____previousTokenType_8;
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_pinvoke ____readerOptions_9;
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_pinvoke ____bitStack_10;
};
// Native definition for COM marshalling of System.Text.Json.JsonReaderState
struct JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788_marshaled_com
{
	int64_t ____lineNumber_0;
	int64_t ____bytePositionInLine_1;
	int32_t ____inObject_2;
	int32_t ____isNotPrimitive_3;
	uint8_t ____numberFormat_4;
	int32_t ____stringHasEscaping_5;
	int32_t ____trailingCommaBeforeComment_6;
	uint8_t ____tokenType_7;
	uint8_t ____previousTokenType_8;
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_com ____readerOptions_9;
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_com ____bitStack_10;
};

// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 
{
public:
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::_buffer
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ____buffer_0;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isFinalBlock
	bool ____isFinalBlock_1;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isInputSequence
	bool ____isInputSequence_2;
	// System.Int64 System.Text.Json.Utf8JsonReader::_lineNumber
	int64_t ____lineNumber_3;
	// System.Int64 System.Text.Json.Utf8JsonReader::_bytePositionInLine
	int64_t ____bytePositionInLine_4;
	// System.Int32 System.Text.Json.Utf8JsonReader::_consumed
	int32_t ____consumed_5;
	// System.Boolean System.Text.Json.Utf8JsonReader::_inObject
	bool ____inObject_6;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isNotPrimitive
	bool ____isNotPrimitive_7;
	// System.Char System.Text.Json.Utf8JsonReader::_numberFormat
	Il2CppChar ____numberFormat_8;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_tokenType
	uint8_t ____tokenType_9;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_previousTokenType
	uint8_t ____previousTokenType_10;
	// System.Text.Json.JsonReaderOptions System.Text.Json.Utf8JsonReader::_readerOptions
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  ____readerOptions_11;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonReader::_bitStack
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  ____bitStack_12;
	// System.Int64 System.Text.Json.Utf8JsonReader::_totalConsumed
	int64_t ____totalConsumed_13;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isLastSegment
	bool ____isLastSegment_14;
	// System.Boolean System.Text.Json.Utf8JsonReader::_stringHasEscaping
	bool ____stringHasEscaping_15;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isMultiSegment
	bool ____isMultiSegment_16;
	// System.Boolean System.Text.Json.Utf8JsonReader::_trailingCommaBeforeComment
	bool ____trailingCommaBeforeComment_17;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_nextPosition
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ____nextPosition_18;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_currentPosition
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ____currentPosition_19;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::_sequence
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____sequence_20;
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSpan>k__BackingField
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___U3CValueSpanU3Ek__BackingField_21;
	// System.Int64 System.Text.Json.Utf8JsonReader::<TokenStartIndex>k__BackingField
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	// System.Boolean System.Text.Json.Utf8JsonReader::<HasValueSequence>k__BackingField
	bool ___U3CHasValueSequenceU3Ek__BackingField_23;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSequence>k__BackingField
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___U3CValueSequenceU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____buffer_0)); }
	inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  get__buffer_0() const { return ____buffer_0; }
	inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____buffer_0))->____pinnable_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__isFinalBlock_1() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____isFinalBlock_1)); }
	inline bool get__isFinalBlock_1() const { return ____isFinalBlock_1; }
	inline bool* get_address_of__isFinalBlock_1() { return &____isFinalBlock_1; }
	inline void set__isFinalBlock_1(bool value)
	{
		____isFinalBlock_1 = value;
	}

	inline static int32_t get_offset_of__isInputSequence_2() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____isInputSequence_2)); }
	inline bool get__isInputSequence_2() const { return ____isInputSequence_2; }
	inline bool* get_address_of__isInputSequence_2() { return &____isInputSequence_2; }
	inline void set__isInputSequence_2(bool value)
	{
		____isInputSequence_2 = value;
	}

	inline static int32_t get_offset_of__lineNumber_3() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____lineNumber_3)); }
	inline int64_t get__lineNumber_3() const { return ____lineNumber_3; }
	inline int64_t* get_address_of__lineNumber_3() { return &____lineNumber_3; }
	inline void set__lineNumber_3(int64_t value)
	{
		____lineNumber_3 = value;
	}

	inline static int32_t get_offset_of__bytePositionInLine_4() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____bytePositionInLine_4)); }
	inline int64_t get__bytePositionInLine_4() const { return ____bytePositionInLine_4; }
	inline int64_t* get_address_of__bytePositionInLine_4() { return &____bytePositionInLine_4; }
	inline void set__bytePositionInLine_4(int64_t value)
	{
		____bytePositionInLine_4 = value;
	}

	inline static int32_t get_offset_of__consumed_5() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____consumed_5)); }
	inline int32_t get__consumed_5() const { return ____consumed_5; }
	inline int32_t* get_address_of__consumed_5() { return &____consumed_5; }
	inline void set__consumed_5(int32_t value)
	{
		____consumed_5 = value;
	}

	inline static int32_t get_offset_of__inObject_6() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____inObject_6)); }
	inline bool get__inObject_6() const { return ____inObject_6; }
	inline bool* get_address_of__inObject_6() { return &____inObject_6; }
	inline void set__inObject_6(bool value)
	{
		____inObject_6 = value;
	}

	inline static int32_t get_offset_of__isNotPrimitive_7() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____isNotPrimitive_7)); }
	inline bool get__isNotPrimitive_7() const { return ____isNotPrimitive_7; }
	inline bool* get_address_of__isNotPrimitive_7() { return &____isNotPrimitive_7; }
	inline void set__isNotPrimitive_7(bool value)
	{
		____isNotPrimitive_7 = value;
	}

	inline static int32_t get_offset_of__numberFormat_8() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____numberFormat_8)); }
	inline Il2CppChar get__numberFormat_8() const { return ____numberFormat_8; }
	inline Il2CppChar* get_address_of__numberFormat_8() { return &____numberFormat_8; }
	inline void set__numberFormat_8(Il2CppChar value)
	{
		____numberFormat_8 = value;
	}

	inline static int32_t get_offset_of__tokenType_9() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____tokenType_9)); }
	inline uint8_t get__tokenType_9() const { return ____tokenType_9; }
	inline uint8_t* get_address_of__tokenType_9() { return &____tokenType_9; }
	inline void set__tokenType_9(uint8_t value)
	{
		____tokenType_9 = value;
	}

	inline static int32_t get_offset_of__previousTokenType_10() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____previousTokenType_10)); }
	inline uint8_t get__previousTokenType_10() const { return ____previousTokenType_10; }
	inline uint8_t* get_address_of__previousTokenType_10() { return &____previousTokenType_10; }
	inline void set__previousTokenType_10(uint8_t value)
	{
		____previousTokenType_10 = value;
	}

	inline static int32_t get_offset_of__readerOptions_11() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____readerOptions_11)); }
	inline JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  get__readerOptions_11() const { return ____readerOptions_11; }
	inline JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746 * get_address_of__readerOptions_11() { return &____readerOptions_11; }
	inline void set__readerOptions_11(JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746  value)
	{
		____readerOptions_11 = value;
	}

	inline static int32_t get_offset_of__bitStack_12() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____bitStack_12)); }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  get__bitStack_12() const { return ____bitStack_12; }
	inline BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B * get_address_of__bitStack_12() { return &____bitStack_12; }
	inline void set__bitStack_12(BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B  value)
	{
		____bitStack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____bitStack_12))->____array_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__totalConsumed_13() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____totalConsumed_13)); }
	inline int64_t get__totalConsumed_13() const { return ____totalConsumed_13; }
	inline int64_t* get_address_of__totalConsumed_13() { return &____totalConsumed_13; }
	inline void set__totalConsumed_13(int64_t value)
	{
		____totalConsumed_13 = value;
	}

	inline static int32_t get_offset_of__isLastSegment_14() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____isLastSegment_14)); }
	inline bool get__isLastSegment_14() const { return ____isLastSegment_14; }
	inline bool* get_address_of__isLastSegment_14() { return &____isLastSegment_14; }
	inline void set__isLastSegment_14(bool value)
	{
		____isLastSegment_14 = value;
	}

	inline static int32_t get_offset_of__stringHasEscaping_15() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____stringHasEscaping_15)); }
	inline bool get__stringHasEscaping_15() const { return ____stringHasEscaping_15; }
	inline bool* get_address_of__stringHasEscaping_15() { return &____stringHasEscaping_15; }
	inline void set__stringHasEscaping_15(bool value)
	{
		____stringHasEscaping_15 = value;
	}

	inline static int32_t get_offset_of__isMultiSegment_16() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____isMultiSegment_16)); }
	inline bool get__isMultiSegment_16() const { return ____isMultiSegment_16; }
	inline bool* get_address_of__isMultiSegment_16() { return &____isMultiSegment_16; }
	inline void set__isMultiSegment_16(bool value)
	{
		____isMultiSegment_16 = value;
	}

	inline static int32_t get_offset_of__trailingCommaBeforeComment_17() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____trailingCommaBeforeComment_17)); }
	inline bool get__trailingCommaBeforeComment_17() const { return ____trailingCommaBeforeComment_17; }
	inline bool* get_address_of__trailingCommaBeforeComment_17() { return &____trailingCommaBeforeComment_17; }
	inline void set__trailingCommaBeforeComment_17(bool value)
	{
		____trailingCommaBeforeComment_17 = value;
	}

	inline static int32_t get_offset_of__nextPosition_18() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____nextPosition_18)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get__nextPosition_18() const { return ____nextPosition_18; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of__nextPosition_18() { return &____nextPosition_18; }
	inline void set__nextPosition_18(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		____nextPosition_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____nextPosition_18))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentPosition_19() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____currentPosition_19)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get__currentPosition_19() const { return ____currentPosition_19; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of__currentPosition_19() { return &____currentPosition_19; }
	inline void set__currentPosition_19(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		____currentPosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_19))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__sequence_20() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ____sequence_20)); }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  get__sequence_20() const { return ____sequence_20; }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * get_address_of__sequence_20() { return &____sequence_20; }
	inline void set__sequence_20(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  value)
	{
		____sequence_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____sequence_20))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____sequence_20))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CValueSpanU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ___U3CValueSpanU3Ek__BackingField_21)); }
	inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  get_U3CValueSpanU3Ek__BackingField_21() const { return ___U3CValueSpanU3Ek__BackingField_21; }
	inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * get_address_of_U3CValueSpanU3Ek__BackingField_21() { return &___U3CValueSpanU3Ek__BackingField_21; }
	inline void set_U3CValueSpanU3Ek__BackingField_21(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  value)
	{
		___U3CValueSpanU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CValueSpanU3Ek__BackingField_21))->____pinnable_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CTokenStartIndexU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ___U3CTokenStartIndexU3Ek__BackingField_22)); }
	inline int64_t get_U3CTokenStartIndexU3Ek__BackingField_22() const { return ___U3CTokenStartIndexU3Ek__BackingField_22; }
	inline int64_t* get_address_of_U3CTokenStartIndexU3Ek__BackingField_22() { return &___U3CTokenStartIndexU3Ek__BackingField_22; }
	inline void set_U3CTokenStartIndexU3Ek__BackingField_22(int64_t value)
	{
		___U3CTokenStartIndexU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHasValueSequenceU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ___U3CHasValueSequenceU3Ek__BackingField_23)); }
	inline bool get_U3CHasValueSequenceU3Ek__BackingField_23() const { return ___U3CHasValueSequenceU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CHasValueSequenceU3Ek__BackingField_23() { return &___U3CHasValueSequenceU3Ek__BackingField_23; }
	inline void set_U3CHasValueSequenceU3Ek__BackingField_23(bool value)
	{
		___U3CHasValueSequenceU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CValueSequenceU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6, ___U3CValueSequenceU3Ek__BackingField_24)); }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  get_U3CValueSequenceU3Ek__BackingField_24() const { return ___U3CValueSequenceU3Ek__BackingField_24; }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * get_address_of_U3CValueSequenceU3Ek__BackingField_24() { return &___U3CValueSequenceU3Ek__BackingField_24; }
	inline void set_U3CValueSequenceU3Ek__BackingField_24(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  value)
	{
		___U3CValueSequenceU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CValueSequenceU3Ek__BackingField_24))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CValueSequenceU3Ek__BackingField_24))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6_marshaled_pinvoke
{
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____numberFormat_8;
	uint8_t ____tokenType_9;
	uint8_t ____previousTokenType_10;
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_pinvoke ____readerOptions_11;
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_pinvoke ____bitStack_12;
	int64_t ____totalConsumed_13;
	int32_t ____isLastSegment_14;
	int32_t ____stringHasEscaping_15;
	int32_t ____isMultiSegment_16;
	int32_t ____trailingCommaBeforeComment_17;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke ____nextPosition_18;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke ____currentPosition_19;
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____sequence_20;
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___U3CValueSpanU3Ek__BackingField_21;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_23;
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___U3CValueSequenceU3Ek__BackingField_24;
};
// Native definition for COM marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6_marshaled_com
{
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____numberFormat_8;
	uint8_t ____tokenType_9;
	uint8_t ____previousTokenType_10;
	JsonReaderOptions_t80AED0C9C22E34D73C306C54129937B6CC628746_marshaled_com ____readerOptions_11;
	BitStack_t0DFAB76233CD43C33E4736B6A031C9A05086DF7B_marshaled_com ____bitStack_12;
	int64_t ____totalConsumed_13;
	int32_t ____isLastSegment_14;
	int32_t ____stringHasEscaping_15;
	int32_t ____isMultiSegment_16;
	int32_t ____trailingCommaBeforeComment_17;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com ____nextPosition_18;
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com ____currentPosition_19;
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____sequence_20;
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___U3CValueSpanU3Ek__BackingField_21;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_23;
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___U3CValueSequenceU3Ek__BackingField_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Memory`1<!0> System.Memory`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_gshared (const RuntimeMethod* method);
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Char>(!!0[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_gshared_inline (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.Span`1<System.Char>::op_Implicit(System.Span`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_gshared (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  ___span0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Char>::op_Implicit(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method);
// System.Span`1<!0> System.Memory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method);
// !0& System.Span`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_gshared (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method);
// System.Int32 System.Memory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_gshared (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method);
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_gshared (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___span0, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Memory`1<!0> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_gshared_inline (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Get(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * ReusableUtf8JsonWriter_Get_m3CE65EC0DEBB6FC4B29C10F4D352D4D5E6DDF506 (RuntimeObject* ___stream0, const RuntimeMethod* method);
// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::GetJsonWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_mD25B9155C5D913E99F8318531B693671A8CE1E53_inline (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartObject_mDBB166D7C6BB2AB073674FBCF130CFB2F7B9BE0D (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Error_mC80496831251A1DEBA20377F8E32021FD95FD61B_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.Text.Json.JsonEncodedText,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Flush_mFBF59A4DFBFA802B724D25BB5CE84E81957CD6CD (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NegotiationResponse_get_Version_m471CCAEDB865F2F0BB3943C1D3E95BB114F251AF_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.Text.Json.JsonEncodedText,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mE13A78D1BA06700966C33EB7D73AA06B814B4F3B (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, int32_t ___value1, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Url_mBD1B5DA2A3E8EF657E3193D186ECBCB6375F78D8_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_AccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_AccessToken_m659104895C3DB242BBDF1185769BC6A253D31E3C_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_ConnectionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionId_mBCA859BE36D9478FF0A673E66ACDC8D3F5929F33_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_ConnectionToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionToken_mF9A684B1BE4E6BA57C4E329F91320F777FAB243C_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray(System.Text.Json.JsonEncodedText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport> Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_AvailableTransports()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Http.Connections.AvailableTransport::get_Transport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteNull(System.Text.Json.JsonEncodedText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNull_m49730607031401C6A0683D7A0FD89271E3CFD609 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.String> Microsoft.AspNetCore.Http.Connections.AvailableTransport::get_TransferFormats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_m06E95AE000F88F655D1E129B922ED8C1B2672FA1 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Return(Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter_Return_mF3BEFC12807645A09F18933B4CE54ACE3209B3C1 (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * ___writer0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonReader::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Boolean,System.Text.Json.JsonReaderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonReader__ctor_m9B06C18F0937767E27F5853AF8D1222E3CAEA858 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___jsonData0, bool ___isFinalBlock1, JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  ___state2, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::CheckRead(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureObjectStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureObjectStart_m32741414182E546BC943B50D295F3F2AC95C4A53 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::get_TokenType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonEncodedText::get_EncodedUtf8Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5 (JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.Utf8JsonReader::ValueTextEquals(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___utf8Text0, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsString(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsInt32(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  SystemTextJsonExtensions_ReadAsInt32_m876EB0D970B3A18C9FA2AC010182BF3A142AE067 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureArrayStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>::.ctor()
inline void List_1__ctor_m7FF0487F92C27D19CFFB65B8F9DFEB97F681181D (List_1_t5769478697F207E3E987284FBEFFDE1453279048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5769478697F207E3E987284FBEFFDE1453279048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Microsoft.AspNetCore.Http.Connections.AvailableTransport Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ParseAvailableTransport(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>::Add(!0)
inline void List_1_Add_mD973C66CEAEABDED5C85EDE3502FA96D5BC971CE (List_1_t5769478697F207E3E987284FBEFFDE1453279048 * __this, AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5769478697F207E3E987284FBEFFDE1453279048 *, AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.ReadOnlySpan`1<System.Byte> Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::get_ProtocolVersionPropertyNameBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  NegotiateProtocol_get_ProtocolVersionPropertyNameBytes_m9D581C822F59336F921C132CEBB7863026E767AD (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonReader::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.IO.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692 (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse__ctor_mA757D8324916863B935E42D2CD5B712FE5768457 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_ConnectionId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionId_m6D9258945B1E0B7A7622146763BF27EF32B59005_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_ConnectionToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionToken_m3875AE1333E8BED909138FBA5617AE3AA159D539_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Url(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Url_m8130632D46372EF0812786EBD08C88324AD37243_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_AccessToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_AccessToken_m81F30992D9C178038C9CC4B836166DA6EF143960_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_AvailableTransports(System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_AvailableTransports_mA3A0C11B9AD2D500E4E04DDDE42B5232CFF39B48_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Error_mA2C8CDAC83C68925780E8D7B3AB5BB10688986B9_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Version_m261B0C541EC4FEE18335AA96A505CF82D2D5E78B_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.IO.InvalidDataException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mA234CAC0202189C1550D9F47EAD93DAF548D2DC4 (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableTransport__ctor_m19F200218BA299B633F38D5A45EAFED7D40AD016 (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::set_Transport(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableTransport_set_Transport_m8BE243E4E5FFAA313A7EDD77C20E39F414392D1D_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::set_TransferFormats(System.Collections.Generic.IList`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableTransport_set_TransferFormats_m2F6E23F8E5F303E59572076B862FFEE615F88661_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.String System.Text.Json.Utf8JsonReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Text.Json.JsonEncodedText System.Text.Json.JsonEncodedText::Encode(System.String,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A (String_t* ___value0, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___encoder1, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonWriterOptions::set_SkipValidation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterOptions_set_SkipValidation_m8FDD432338EEF7EA694D21D979A3FA74A211BF23 (JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * __this, bool ___value0, const RuntimeMethod* method);
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_UnsafeRelaxedJsonEscaping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * JavaScriptEncoder_get_UnsafeRelaxedJsonEscaping_m9C60452931FBFF571399F66669483EF27264E477_inline (const RuntimeMethod* method);
// System.Void System.Text.Json.JsonWriterOptions::set_Encoder(System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m67FB213E0E43596B6BBF2419485839AC73F84495_inline (JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * __this, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>,System.Text.Json.JsonWriterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter__ctor_m900ACC11CED7521E3A9B76D14A1A0C6038A41806 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, RuntimeObject* ___bufferWriter0, JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  ___options1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter__ctor_mB692527AB942B8F8BB1883372BF13ABF0263F15A (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * __this, RuntimeObject* ___stream0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Reset(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Reset_mFE02B669A469CBFB8C96FF37008B73F2EED401F9 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Reset_mB4FE2ED062F5B16BC80A81C4E2DBDF10DC23A2F1 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.Utf8JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_m2FD9CD4EACF0007A520A5866B230C9770B033218 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_mD7AB8DA12015947E60EA9BC8C28C0B54B731D9A7 (uint8_t ___tokenType0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 System.Text.Json.Utf8JsonReader::GetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonReader_GetInt32_m6E496D1C463F4C8601AB1D853109E9CDED769FC5 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Void System.IO.TextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__ctor_mB41FD8BC31B8E35D439C0313A21088DD640E4B16 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::SetWriter(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m32689F410BF8B1E6FCC19F1695ECAC2B9DC1AE7F_inline (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method);
// System.Memory`1<!0> System.Memory`1<System.Byte>::get_Empty()
inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342 (const RuntimeMethod* method)
{
	return ((  Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  (*) (const RuntimeMethod*))Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_gshared)(method);
}
// System.Span`1<!!0> System.MemoryExtensions::AsSpan<System.Char>(!!0[],System.Int32,System.Int32)
inline Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_inline (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_gshared_inline)(___array0, ___start1, ___length2, method);
}
// System.ReadOnlySpan`1<!0> System.Span`1<System.Char>::op_Implicit(System.Span`1<!0>)
inline ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  (*) (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 , const RuntimeMethod*))Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_gshared)(___span0, method);
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteInternal(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteInternal_m824B780A150EA3BA9489EA580711C8E8069142C7 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___buffer0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Char>::op_Implicit(!0[])
inline ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_gshared)(___array0, method);
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::EnsureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_EnsureBuffer_m2DD9E82C0D1C1337ACDA7773F28E27FB67B3ACF8 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method);
// System.Span`1<!0> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, const RuntimeMethod*))Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_gshared_inline)(__this, method);
}
// !0& System.Span`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, int32_t, const RuntimeMethod*))Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_gshared_inline)(__this, ___index0, method);
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteMultiByteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteMultiByteChar_m664604D77394051CF5CB337FF325E800693309A1 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Span`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::GetBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mB499CA92809E5232B5FA0AF1C2E3F3A7CA3FD7E1_inline (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method);
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<!!0>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_gshared)(___span0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, const RuntimeMethod*))Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  MemoryExtensions_AsSpan_m26D24EB534C3C5946F5F9EF6B4C02C766067724C_inline (String_t* ___text0, const RuntimeMethod* method);
// System.Int32 System.Memory`1<System.Byte>::get_Length()
inline int32_t Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7 (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, const RuntimeMethod*))Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_gshared)(__this, method);
}
// System.Span`1<!0> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_gshared_inline)(__this, ___start0, ___length1, method);
}
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<!!0>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922 (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC , const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_gshared)(___span0, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
inline ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  (*) (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_gshared_inline)(__this, ___start0, method);
}
// System.Memory`1<!0> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, int32_t, int32_t, const RuntimeMethod*))Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter_Dispose_m27D59E6F6325CD5EA2E5ABB0E2FDC6F13A2A159C (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA83C010AF67DEDDC3E671DFDAF49634DFB2A2C90 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, bool ___encoderShouldEmitUTF8Identifier0, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline)(___o0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *, Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_inline (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4B1505E62CFA19EE4C92F330E4204B597FC68600 (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m036820F3189C0FA81D83CA10627B743A17412449 (const RuntimeMethod* method);
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616 (const RuntimeMethod* method);
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
// System.String Microsoft.AspNetCore.Http.Connections.AvailableTransport::get_Transport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433 (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTransportU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::set_Transport(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableTransport_set_Transport_m8BE243E4E5FFAA313A7EDD77C20E39F414392D1D (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTransportU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.String> Microsoft.AspNetCore.Http.Connections.AvailableTransport::get_TransferFormats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5 (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTransferFormatsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::set_TransferFormats(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableTransport_set_TransferFormats_m2F6E23F8E5F303E59572076B862FFEE615F88661 (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTransferFormatsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.AvailableTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableTransport__ctor_m19F200218BA299B633F38D5A45EAFED7D40AD016 (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.Http.Connections.HttpTransports::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTransports__cctor_mCB0E9646E9661D339EFBCEA1A3B82D18C4BEEC1F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_StaticFields*)il2cpp_codegen_static_fields_for(HttpTransports_tDB9A63915E326830F54DE37B94560D2D1D690A72_il2cpp_TypeInfo_var))->set_All_0(7);
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
// System.ReadOnlySpan`1<System.Byte> Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::get_ProtocolVersionPropertyNameBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  NegotiateProtocol_get_ProtocolVersionPropertyNameBytes_m9D581C822F59336F921C132CEBB7863026E767AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D____04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_inline((&L_0), (void*)(void*)(il2cpp_codegen_get_field_data(U3CPrivateImplementationDetailsU3E_tEF3188B7C23B7C9173B30DD67055B92EB160686D____04394427795842A5876FA977E4B0CC975DE6C1865A1F8847EB59AC77BD9402DF_0_FieldInfo_var)), ((int32_t)15), /*hidden argument*/ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::WriteResponse(Microsoft.AspNetCore.Http.Connections.NegotiationResponse,System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiateProtocol_WriteResponse_m7305E43789569C6A939B3C4E4F1FA10014A10EA1 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * ___response0, RuntimeObject* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t626358C5FDB061F21DFA7A02095EAF0578249CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t27A5F725859870F8A1DF854064E70FDDD00708C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * V_0 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___output1;
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_1;
		L_1 = ReusableUtf8JsonWriter_Get_m3CE65EC0DEBB6FC4B29C10F4D352D4D5E6DDF506(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_2 = V_0;
			NullCheck(L_2);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_3;
			L_3 = ReusableUtf8JsonWriter_GetJsonWriter_mD25B9155C5D913E99F8318531B693671A8CE1E53_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_4 = V_1;
			NullCheck(L_4);
			Utf8JsonWriter_WriteStartObject_mDBB166D7C6BB2AB073674FBCF130CFB2F7B9BE0D(L_4, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_5 = ___response0;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = NegotiationResponse_get_Error_mC80496831251A1DEBA20377F8E32021FD95FD61B_inline(L_5, /*hidden argument*/NULL);
			bool L_7;
			L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0043;
			}
		}

IL_0021:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_9 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_ErrorPropertyNameBytes_15();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_10 = ___response0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = NegotiationResponse_get_Error_mC80496831251A1DEBA20377F8E32021FD95FD61B_inline(L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_8, L_9, L_11, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_12 = V_1;
			NullCheck(L_12);
			Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53(L_12, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_13 = V_1;
			NullCheck(L_13);
			Utf8JsonWriter_Flush_mFBF59A4DFBFA802B724D25BB5CE84E81957CD6CD(L_13, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1B3, FINALLY_01ac);
		}

IL_0043:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_15 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_NegotiateVersionPropertyNameBytes_17();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_16 = ___response0;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = NegotiationResponse_get_Version_m471CCAEDB865F2F0BB3943C1D3E95BB114F251AF_inline(L_16, /*hidden argument*/NULL);
			NullCheck(L_14);
			Utf8JsonWriter_WriteNumber_mE13A78D1BA06700966C33EB7D73AA06B814B4F3B(L_14, L_15, L_17, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_18 = ___response0;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = NegotiationResponse_get_Url_mBD1B5DA2A3E8EF657E3193D186ECBCB6375F78D8_inline(L_18, /*hidden argument*/NULL);
			bool L_20;
			L_20 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_0072;
			}
		}

IL_0061:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_21 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_22 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_UrlPropertyNameBytes_5();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_23 = ___response0;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = NegotiationResponse_get_Url_mBD1B5DA2A3E8EF657E3193D186ECBCB6375F78D8_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_21);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_21, L_22, L_24, /*hidden argument*/NULL);
		}

IL_0072:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_25 = ___response0;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = NegotiationResponse_get_AccessToken_m659104895C3DB242BBDF1185769BC6A253D31E3C_inline(L_25, /*hidden argument*/NULL);
			bool L_27;
			L_27 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_0090;
			}
		}

IL_007f:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_28 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_29 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_AccessTokenPropertyNameBytes_7();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_30 = ___response0;
			NullCheck(L_30);
			String_t* L_31;
			L_31 = NegotiationResponse_get_AccessToken_m659104895C3DB242BBDF1185769BC6A253D31E3C_inline(L_30, /*hidden argument*/NULL);
			NullCheck(L_28);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_28, L_29, L_31, /*hidden argument*/NULL);
		}

IL_0090:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_32 = ___response0;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = NegotiationResponse_get_ConnectionId_mBCA859BE36D9478FF0A673E66ACDC8D3F5929F33_inline(L_32, /*hidden argument*/NULL);
			bool L_34;
			L_34 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_33, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_00ae;
			}
		}

IL_009d:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_35 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_36 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_ConnectionIdPropertyNameBytes_1();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_37 = ___response0;
			NullCheck(L_37);
			String_t* L_38;
			L_38 = NegotiationResponse_get_ConnectionId_mBCA859BE36D9478FF0A673E66ACDC8D3F5929F33_inline(L_37, /*hidden argument*/NULL);
			NullCheck(L_35);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_35, L_36, L_38, /*hidden argument*/NULL);
		}

IL_00ae:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_39 = ___response0;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = NegotiationResponse_get_Version_m471CCAEDB865F2F0BB3943C1D3E95BB114F251AF_inline(L_39, /*hidden argument*/NULL);
			if ((((int32_t)L_40) <= ((int32_t)0)))
			{
				goto IL_00d5;
			}
		}

IL_00b7:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_41 = ___response0;
			NullCheck(L_41);
			String_t* L_42;
			L_42 = NegotiationResponse_get_ConnectionToken_mF9A684B1BE4E6BA57C4E329F91320F777FAB243C_inline(L_41, /*hidden argument*/NULL);
			bool L_43;
			L_43 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_42, /*hidden argument*/NULL);
			if (L_43)
			{
				goto IL_00d5;
			}
		}

IL_00c4:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_44 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_45 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_ConnectionTokenPropertyNameBytes_3();
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_46 = ___response0;
			NullCheck(L_46);
			String_t* L_47;
			L_47 = NegotiationResponse_get_ConnectionToken_mF9A684B1BE4E6BA57C4E329F91320F777FAB243C_inline(L_46, /*hidden argument*/NULL);
			NullCheck(L_44);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_44, L_45, L_47, /*hidden argument*/NULL);
		}

IL_00d5:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_48 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_49 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_AvailableTransportsPropertyNameBytes_9();
			NullCheck(L_48);
			Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B(L_48, L_49, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_50 = ___response0;
			NullCheck(L_50);
			RuntimeObject* L_51;
			L_51 = NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230_inline(L_50, /*hidden argument*/NULL);
			if (!L_51)
			{
				goto IL_0198;
			}
		}

IL_00eb:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_52 = ___response0;
			NullCheck(L_52);
			RuntimeObject* L_53;
			L_53 = NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230_inline(L_52, /*hidden argument*/NULL);
			NullCheck(L_53);
			int32_t L_54;
			L_54 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>::get_Count() */, ICollection_1_t626358C5FDB061F21DFA7A02095EAF0578249CF7_il2cpp_TypeInfo_var, L_53);
			V_2 = L_54;
			V_3 = 0;
			goto IL_0191;
		}

IL_00fe:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_55 = ___response0;
			NullCheck(L_55);
			RuntimeObject* L_56;
			L_56 = NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230_inline(L_55, /*hidden argument*/NULL);
			int32_t L_57 = V_3;
			NullCheck(L_56);
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_58;
			L_58 = InterfaceFuncInvoker1< AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>::get_Item(System.Int32) */, IList_1_t27A5F725859870F8A1DF854064E70FDDD00708C1_il2cpp_TypeInfo_var, L_56, L_57);
			V_4 = L_58;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_59 = V_1;
			NullCheck(L_59);
			Utf8JsonWriter_WriteStartObject_mDBB166D7C6BB2AB073674FBCF130CFB2F7B9BE0D(L_59, /*hidden argument*/NULL);
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_60 = V_4;
			NullCheck(L_60);
			String_t* L_61;
			L_61 = AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433_inline(L_60, /*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_012f;
			}
		}

IL_011b:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_62 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_63 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_TransportPropertyNameBytes_11();
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_64 = V_4;
			NullCheck(L_64);
			String_t* L_65;
			L_65 = AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433_inline(L_64, /*hidden argument*/NULL);
			NullCheck(L_62);
			Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_62, L_63, L_65, /*hidden argument*/NULL);
			goto IL_013a;
		}

IL_012f:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_66 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_67 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_TransportPropertyNameBytes_11();
			NullCheck(L_66);
			Utf8JsonWriter_WriteNull_m49730607031401C6A0683D7A0FD89271E3CFD609(L_66, L_67, /*hidden argument*/NULL);
		}

IL_013a:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_68 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_69 = ((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_TransferFormatsPropertyNameBytes_13();
			NullCheck(L_68);
			Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B(L_68, L_69, /*hidden argument*/NULL);
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_70 = V_4;
			NullCheck(L_70);
			RuntimeObject* L_71;
			L_71 = AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline(L_70, /*hidden argument*/NULL);
			if (!L_71)
			{
				goto IL_0181;
			}
		}

IL_014e:
		{
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_72 = V_4;
			NullCheck(L_72);
			RuntimeObject* L_73;
			L_73 = AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline(L_72, /*hidden argument*/NULL);
			NullCheck(L_73);
			int32_t L_74;
			L_74 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_73);
			V_5 = L_74;
			V_6 = 0;
			goto IL_017b;
		}

IL_0161:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_75 = V_1;
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_76 = V_4;
			NullCheck(L_76);
			RuntimeObject* L_77;
			L_77 = AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline(L_76, /*hidden argument*/NULL);
			int32_t L_78 = V_6;
			NullCheck(L_77);
			String_t* L_79;
			L_79 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_77, L_78);
			NullCheck(L_75);
			Utf8JsonWriter_WriteStringValue_m06E95AE000F88F655D1E129B922ED8C1B2672FA1(L_75, L_79, /*hidden argument*/NULL);
			int32_t L_80 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		}

IL_017b:
		{
			int32_t L_81 = V_6;
			int32_t L_82 = V_5;
			if ((((int32_t)L_81) < ((int32_t)L_82)))
			{
				goto IL_0161;
			}
		}

IL_0181:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_83 = V_1;
			NullCheck(L_83);
			Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414(L_83, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_84 = V_1;
			NullCheck(L_84);
			Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53(L_84, /*hidden argument*/NULL);
			int32_t L_85 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		}

IL_0191:
		{
			int32_t L_86 = V_3;
			int32_t L_87 = V_2;
			if ((((int32_t)L_86) < ((int32_t)L_87)))
			{
				goto IL_00fe;
			}
		}

IL_0198:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_88 = V_1;
			NullCheck(L_88);
			Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414(L_88, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_89 = V_1;
			NullCheck(L_89);
			Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53(L_89, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_90 = V_1;
			NullCheck(L_90);
			Utf8JsonWriter_Flush_mFBF59A4DFBFA802B724D25BB5CE84E81957CD6CD(L_90, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1B3, FINALLY_01ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ac;
	}

FINALLY_01ac:
	{ // begin finally (depth: 1)
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_91 = V_0;
		ReusableUtf8JsonWriter_Return_mF3BEFC12807645A09F18933B4CE54ACE3209B3C1(L_91, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(428)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(428)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1B3, IL_01b3)
	}

IL_01b3:
	{
		return;
	}
}
// Microsoft.AspNetCore.Http.Connections.NegotiationResponse Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ParseResponse(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9 (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD973C66CEAEABDED5C85EDE3502FA96D5BC971CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7FF0487F92C27D19CFFB65B8F9DFEB97F681181D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5769478697F207E3E987284FBEFFDE1453279048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0892A8396C4F3C92BC53BCD9D9BC85FB20735F0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BFF63CFED806451BC98A54169212FE8F17D0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3339796C3AE8EC8D516BCCBAA254AD48AD1E3EEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC738372F9EABB0FC755ECE7CC80E939A5E3C4AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	List_1_t5769478697F207E3E987284FBEFFDE1453279048 * V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  V_9;
	memset((&V_9), 0, sizeof(V_9));
	uint8_t V_10 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_11;
	memset((&V_11), 0, sizeof(V_11));
	NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * V_12 = NULL;
	Exception_t * V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_0 = ___content0;
			il2cpp_codegen_initobj((&V_9), sizeof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788 ));
			JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  L_1 = V_9;
			Utf8JsonReader__ctor_m9B06C18F0937767E27F5853AF8D1222E3CAEA858((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_0, (bool)1, L_1, /*hidden argument*/NULL);
			bool L_2;
			L_2 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			SystemTextJsonExtensions_EnsureObjectStart_m32741414182E546BC943B50D295F3F2AC95C4A53((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			V_1 = (String_t*)NULL;
			V_2 = (String_t*)NULL;
			V_3 = (String_t*)NULL;
			V_4 = (String_t*)NULL;
			V_5 = (List_1_t5769478697F207E3E987284FBEFFDE1453279048 *)NULL;
			V_6 = (String_t*)NULL;
			V_7 = 0;
			V_8 = (bool)0;
			goto IL_01d9;
		}

IL_003c:
		{
			uint8_t L_3;
			L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			V_10 = L_3;
			uint8_t L_4 = V_10;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_01b8;
			}
		}

IL_004d:
		{
			uint8_t L_5 = V_10;
			if ((!(((uint32_t)L_5) == ((uint32_t)5))))
			{
				goto IL_01bd;
			}
		}

IL_0055:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_6;
			L_6 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_UrlPropertyNameBytes_5()), /*hidden argument*/NULL);
			bool L_7;
			L_7 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_007a;
			}
		}

IL_0068:
		{
			String_t* L_8;
			L_8 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A, /*hidden argument*/NULL);
			V_3 = L_8;
			goto IL_01d9;
		}

IL_007a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_9;
			L_9 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_AccessTokenPropertyNameBytes_7()), /*hidden argument*/NULL);
			bool L_10;
			L_10 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00a0;
			}
		}

IL_008d:
		{
			String_t* L_11;
			L_11 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteralC738372F9EABB0FC755ECE7CC80E939A5E3C4AF7, /*hidden argument*/NULL);
			V_4 = L_11;
			goto IL_01d9;
		}

IL_00a0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_12;
			L_12 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_ConnectionIdPropertyNameBytes_1()), /*hidden argument*/NULL);
			bool L_13;
			L_13 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00c5;
			}
		}

IL_00b3:
		{
			String_t* L_14;
			L_14 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteral3339796C3AE8EC8D516BCCBAA254AD48AD1E3EEE, /*hidden argument*/NULL);
			V_1 = L_14;
			goto IL_01d9;
		}

IL_00c5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_15;
			L_15 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_ConnectionTokenPropertyNameBytes_3()), /*hidden argument*/NULL);
			bool L_16;
			L_16 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00ea;
			}
		}

IL_00d8:
		{
			String_t* L_17;
			L_17 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteral13BFF63CFED806451BC98A54169212FE8F17D0B3, /*hidden argument*/NULL);
			V_2 = L_17;
			goto IL_01d9;
		}

IL_00ea:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_18;
			L_18 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_NegotiateVersionPropertyNameBytes_17()), /*hidden argument*/NULL);
			bool L_19;
			L_19 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0119;
			}
		}

IL_00fd:
		{
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20;
			L_20 = SystemTextJsonExtensions_ReadAsInt32_m876EB0D970B3A18C9FA2AC010182BF3A142AE067((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteral0892A8396C4F3C92BC53BCD9D9BC85FB20735F0A, /*hidden argument*/NULL);
			V_11 = L_20;
			int32_t L_21;
			L_21 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_11), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			V_7 = L_21;
			goto IL_01d9;
		}

IL_0119:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_22;
			L_22 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_AvailableTransportsPropertyNameBytes_9()), /*hidden argument*/NULL);
			bool L_23;
			L_23 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0173;
			}
		}

IL_012c:
		{
			bool L_24;
			L_24 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			List_1_t5769478697F207E3E987284FBEFFDE1453279048 * L_25 = (List_1_t5769478697F207E3E987284FBEFFDE1453279048 *)il2cpp_codegen_object_new(List_1_t5769478697F207E3E987284FBEFFDE1453279048_il2cpp_TypeInfo_var);
			List_1__ctor_m7FF0487F92C27D19CFFB65B8F9DFEB97F681181D(L_25, /*hidden argument*/List_1__ctor_m7FF0487F92C27D19CFFB65B8F9DFEB97F681181D_RuntimeMethod_var);
			V_5 = L_25;
			goto IL_0168;
		}

IL_0144:
		{
			uint8_t L_26;
			L_26 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_26) == ((uint32_t)1))))
			{
				goto IL_015e;
			}
		}

IL_014e:
		{
			List_1_t5769478697F207E3E987284FBEFFDE1453279048 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_28;
			L_28 = NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			NullCheck(L_27);
			List_1_Add_mD973C66CEAEABDED5C85EDE3502FA96D5BC971CE(L_27, L_28, /*hidden argument*/List_1_Add_mD973C66CEAEABDED5C85EDE3502FA96D5BC971CE_RuntimeMethod_var);
			goto IL_0168;
		}

IL_015e:
		{
			uint8_t L_29;
			L_29 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			if ((((int32_t)L_29) == ((int32_t)4)))
			{
				goto IL_01d9;
			}
		}

IL_0168:
		{
			bool L_30;
			L_30 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_0144;
			}
		}

IL_0171:
		{
			goto IL_01d9;
		}

IL_0173:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_31;
			L_31 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_ErrorPropertyNameBytes_15()), /*hidden argument*/NULL);
			bool L_32;
			L_32 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0196;
			}
		}

IL_0186:
		{
			String_t* L_33;
			L_33 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, /*hidden argument*/NULL);
			V_6 = L_33;
			goto IL_01d9;
		}

IL_0196:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_34;
			L_34 = NegotiateProtocol_get_ProtocolVersionPropertyNameBytes_m9D581C822F59336F921C132CEBB7863026E767AD(/*hidden argument*/NULL);
			bool L_35;
			L_35 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_01af;
			}
		}

IL_01a4:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_36 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E73F64CA9735FB979F0ADF900D1E85173AF5567)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
		}

IL_01af:
		{
			Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			goto IL_01d9;
		}

IL_01b8:
		{
			V_8 = (bool)1;
			goto IL_01d9;
		}

IL_01bd:
		{
			uint8_t L_37;
			L_37 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			uint8_t L_38 = L_37;
			RuntimeObject * L_39 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_38);
			String_t* L_40;
			L_40 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral832B7DA664B30679D6DFA5E1F227E1AAEB43FCD8)), L_39, /*hidden argument*/NULL);
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_41 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_41, L_40, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
		}

IL_01d9:
		{
			bool L_42 = V_8;
			if (L_42)
			{
				goto IL_01e9;
			}
		}

IL_01dd:
		{
			bool L_43;
			L_43 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_0), /*hidden argument*/NULL);
			if (L_43)
			{
				goto IL_003c;
			}
		}

IL_01e9:
		{
			String_t* L_44 = V_3;
			if (L_44)
			{
				goto IL_0220;
			}
		}

IL_01ec:
		{
			String_t* L_45 = V_6;
			if (L_45)
			{
				goto IL_0220;
			}
		}

IL_01f0:
		{
			String_t* L_46 = V_1;
			if (L_46)
			{
				goto IL_01fe;
			}
		}

IL_01f3:
		{
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_47 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4CB0CE6E87C36CD5F11B2488DB41322EB1E7932)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
		}

IL_01fe:
		{
			int32_t L_48 = V_7;
			if ((((int32_t)L_48) <= ((int32_t)0)))
			{
				goto IL_0211;
			}
		}

IL_0203:
		{
			String_t* L_49 = V_2;
			if (L_49)
			{
				goto IL_0211;
			}
		}

IL_0206:
		{
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_50 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A8051D13CC169C6860F3F5AEFFD288377EA0991)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
		}

IL_0211:
		{
			List_1_t5769478697F207E3E987284FBEFFDE1453279048 * L_51 = V_5;
			if (L_51)
			{
				goto IL_0220;
			}
		}

IL_0215:
		{
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_52 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral103CD1E8513D506E45AE47C4BDEABFB713D7E8D4)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
		}

IL_0220:
		{
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_53 = (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 *)il2cpp_codegen_object_new(NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4_il2cpp_TypeInfo_var);
			NegotiationResponse__ctor_mA757D8324916863B935E42D2CD5B712FE5768457(L_53, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_54 = L_53;
			String_t* L_55 = V_1;
			NullCheck(L_54);
			NegotiationResponse_set_ConnectionId_m6D9258945B1E0B7A7622146763BF27EF32B59005_inline(L_54, L_55, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_56 = L_54;
			String_t* L_57 = V_2;
			NullCheck(L_56);
			NegotiationResponse_set_ConnectionToken_m3875AE1333E8BED909138FBA5617AE3AA159D539_inline(L_56, L_57, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_58 = L_56;
			String_t* L_59 = V_3;
			NullCheck(L_58);
			NegotiationResponse_set_Url_m8130632D46372EF0812786EBD08C88324AD37243_inline(L_58, L_59, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_60 = L_58;
			String_t* L_61 = V_4;
			NullCheck(L_60);
			NegotiationResponse_set_AccessToken_m81F30992D9C178038C9CC4B836166DA6EF143960_inline(L_60, L_61, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_62 = L_60;
			List_1_t5769478697F207E3E987284FBEFFDE1453279048 * L_63 = V_5;
			NullCheck(L_62);
			NegotiationResponse_set_AvailableTransports_mA3A0C11B9AD2D500E4E04DDDE42B5232CFF39B48_inline(L_62, L_63, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_64 = L_62;
			String_t* L_65 = V_6;
			NullCheck(L_64);
			NegotiationResponse_set_Error_mA2C8CDAC83C68925780E8D7B3AB5BB10688986B9_inline(L_64, L_65, /*hidden argument*/NULL);
			NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_66 = L_64;
			int32_t L_67 = V_7;
			NullCheck(L_66);
			NegotiationResponse_set_Version_m261B0C541EC4FEE18335AA96A505CF82D2D5E78B_inline(L_66, L_67, /*hidden argument*/NULL);
			V_12 = L_66;
			goto IL_026d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025e;
		}
		throw e;
	}

CATCH_025e:
	{ // begin catch(System.Exception)
		V_13 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_68 = V_13;
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_69 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mA234CAC0202189C1550D9F47EAD93DAF548D2DC4(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ABE710800A7E6EA605F68D846517582CE0C34E3)), L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mC6B731BE8BB5C44A82E291916B6D10F7A3BD24A9_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_026d:
	{
		NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * L_70 = V_12;
		return L_70;
	}
}
// Microsoft.AspNetCore.Http.Connections.NegotiationResponse Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ParseResponse(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * NegotiateProtocol_ParseResponse_mBA954EC20B711C458E57BA1A9D3A1C73A62EF915 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___content0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37CFD62B57A2A099207F3F568CB3DD06EE833097)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseResponse_mBA954EC20B711C458E57BA1A9D3A1C73A62EF915_RuntimeMethod_var)));
	}
}
// Microsoft.AspNetCore.Http.Connections.AvailableTransport Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::ParseAvailableTransport(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260727C413292B2078220DF57528EA4F36D1A3DC);
		s_Il2CppMethodInitialized = true;
	}
	AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * V_0 = NULL;
	uint8_t V_1 = 0;
	bool V_2 = false;
	uint8_t V_3 = 0;
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_0 = (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 *)il2cpp_codegen_object_new(AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96_il2cpp_TypeInfo_var);
		AvailableTransport__ctor_m19F200218BA299B633F38D5A45EAFED7D40AD016(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_010f;
	}

IL_000b:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_1 = ___reader0;
		uint8_t L_2;
		L_2 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_00cc;
		}
	}
	{
		uint8_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_00f4;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_5 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_6;
		L_6 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_TransportPropertyNameBytes_11()), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_8 = V_0;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_9 = ___reader0;
		String_t* L_10;
		L_10 = SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_9, _stringLiteral260727C413292B2078220DF57528EA4F36D1A3DC, /*hidden argument*/NULL);
		NullCheck(L_8);
		AvailableTransport_set_Transport_m8BE243E4E5FFAA313A7EDD77C20E39F414392D1D_inline(L_8, L_10, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_0048:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_11 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_12;
		L_12 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->get_address_of_TransferFormatsPropertyNameBytes_13()), /*hidden argument*/NULL);
		bool L_13;
		L_13 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c4;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_14 = ___reader0;
		bool L_15;
		L_15 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_14, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_16 = ___reader0;
		SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_16, /*hidden argument*/NULL);
		V_2 = (bool)0;
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_17 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_18, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_17);
		AvailableTransport_set_TransferFormats_m2F6E23F8E5F303E59572076B862FFEE615F88661_inline(L_17, L_18, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_0076:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_19 = ___reader0;
		uint8_t L_20;
		L_20 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		uint8_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)4)))
		{
			goto IL_0098;
		}
	}
	{
		uint8_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)7))))
		{
			goto IL_009c;
		}
	}
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline(L_23, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_25 = ___reader0;
		String_t* L_26;
		L_26 = Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_24, L_26);
		goto IL_00b7;
	}

IL_0098:
	{
		V_2 = (bool)1;
		goto IL_00b7;
	}

IL_009c:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_27 = ___reader0;
		uint8_t L_28;
		L_28 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_27, /*hidden argument*/NULL);
		uint8_t L_29 = L_28;
		RuntimeObject * L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_29);
		String_t* L_31;
		L_31 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF38E1C661272EC8BF921ABCC3971C1F42743B75)), L_30, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_32 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var)));
	}

IL_00b7:
	{
		bool L_33 = V_2;
		if (L_33)
		{
			goto IL_010f;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_34 = ___reader0;
		bool L_35;
		L_35 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_010f;
	}

IL_00c4:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_36 = ___reader0;
		Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_36, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00cc:
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433_inline(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00df;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_39 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF77FC5989DD594BB4B8DB8AAA2209FD948963A83)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var)));
	}

IL_00df:
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_40 = V_0;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline(L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00f2;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_42 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEAC62A815B0D4B2567C35504D87950CE15F5A72)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var)));
	}

IL_00f2:
	{
		AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * L_43 = V_0;
		return L_43;
	}

IL_00f4:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_44 = ___reader0;
		uint8_t L_45;
		L_45 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_44, /*hidden argument*/NULL);
		uint8_t L_46 = L_45;
		RuntimeObject * L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_46);
		String_t* L_48;
		L_48 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5ED9938728C6249D8D8F3DCFD3D6897CDBEA198C)), L_47, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_49 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_49, L_48, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var)));
	}

IL_010f:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_50 = ___reader0;
		bool L_51;
		L_51 = SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_000b;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_52 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCF1D25B05860FF3AADE7EC54A45D791634970B6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NegotiateProtocol_ParseAvailableTransport_mC03C2D775871B916975F6239B1CF424C4349612C_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiateProtocol::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiateProtocol__cctor_m4E0D22FB8319F98E278164E3F91343C6E011F07F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0892A8396C4F3C92BC53BCD9D9BC85FB20735F0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137B7AA72CB7DD7F3A6E1E1250FE642C6FF17F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BFF63CFED806451BC98A54169212FE8F17D0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260727C413292B2078220DF57528EA4F36D1A3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3339796C3AE8EC8D516BCCBAA254AD48AD1E3EEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93DF992285A728E8E1D638CA6FAEE96CCD4C73F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC738372F9EABB0FC755ECE7CC80E939A5E3C4AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_0;
		L_0 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral3339796C3AE8EC8D516BCCBAA254AD48AD1E3EEE, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_ConnectionIdPropertyNameBytes_1(L_0);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_1;
		L_1 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral13BFF63CFED806451BC98A54169212FE8F17D0B3, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_ConnectionTokenPropertyNameBytes_3(L_1);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_2;
		L_2 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_UrlPropertyNameBytes_5(L_2);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3;
		L_3 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteralC738372F9EABB0FC755ECE7CC80E939A5E3C4AF7, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_AccessTokenPropertyNameBytes_7(L_3);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_4;
		L_4 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral137B7AA72CB7DD7F3A6E1E1250FE642C6FF17F3A, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_AvailableTransportsPropertyNameBytes_9(L_4);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_5;
		L_5 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral260727C413292B2078220DF57528EA4F36D1A3DC, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_TransportPropertyNameBytes_11(L_5);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_6;
		L_6 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral93DF992285A728E8E1D638CA6FAEE96CCD4C73F9, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_TransferFormatsPropertyNameBytes_13(L_6);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_7;
		L_7 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_ErrorPropertyNameBytes_15(L_7);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_8;
		L_8 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral0892A8396C4F3C92BC53BCD9D9BC85FB20735F0A, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_StaticFields*)il2cpp_codegen_static_fields_for(NegotiateProtocol_t8D6934242F7CD5872642DD8B614AA0FA4C5CDACC_il2cpp_TypeInfo_var))->set_NegotiateVersionPropertyNameBytes_17(L_8);
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
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Url_mBD1B5DA2A3E8EF657E3193D186ECBCB6375F78D8 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_Url_m8130632D46372EF0812786EBD08C88324AD37243 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_AccessToken_m659104895C3DB242BBDF1185769BC6A253D31E3C (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAccessTokenU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_AccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_AccessToken_m81F30992D9C178038C9CC4B836166DA6EF143960 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAccessTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionId_mBCA859BE36D9478FF0A673E66ACDC8D3F5929F33 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConnectionIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_ConnectionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionId_m6D9258945B1E0B7A7622146763BF27EF32B59005 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_ConnectionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionToken_mF9A684B1BE4E6BA57C4E329F91320F777FAB243C (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConnectionTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_ConnectionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionToken_m3875AE1333E8BED909138FBA5617AE3AA159D539 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConnectionTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegotiationResponse_get_Version_m471CCAEDB865F2F0BB3943C1D3E95BB114F251AF (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_Version_m261B0C541EC4FEE18335AA96A505CF82D2D5E78B (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport> Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_AvailableTransports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAvailableTransportsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_AvailableTransports(System.Collections.Generic.IList`1<Microsoft.AspNetCore.Http.Connections.AvailableTransport>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_AvailableTransports_mA3A0C11B9AD2D500E4E04DDDE42B5232CFF39B48 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAvailableTransportsU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.Connections.NegotiationResponse::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Error_mC80496831251A1DEBA20377F8E32021FD95FD61B (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse_set_Error_mA2C8CDAC83C68925780E8D7B3AB5BB10688986B9 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Connections.NegotiationResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegotiationResponse__ctor_mA757D8324916863B935E42D2CD5B712FE5768457 (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter__ctor_mB692527AB942B8F8BB1883372BF13ABF0263F15A (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * __this, RuntimeObject* ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___stream0;
		il2cpp_codegen_initobj((&V_0), sizeof(JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 ));
		JsonWriterOptions_set_SkipValidation_m8FDD432338EEF7EA694D21D979A3FA74A211BF23((JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * L_1;
		L_1 = JavaScriptEncoder_get_UnsafeRelaxedJsonEscaping_m9C60452931FBFF571399F66669483EF27264E477_inline(/*hidden argument*/NULL);
		JsonWriterOptions_set_Encoder_m67FB213E0E43596B6BBF2419485839AC73F84495_inline((JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 *)(&V_0), L_1, /*hidden argument*/NULL);
		JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  L_2 = V_0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_3 = (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 *)il2cpp_codegen_object_new(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_il2cpp_TypeInfo_var);
		Utf8JsonWriter__ctor_m900ACC11CED7521E3A9B76D14A1A0C6038A41806(L_3, L_0, L_2, /*hidden argument*/NULL);
		__this->set__writer_1(L_3);
		return;
	}
}
// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Get(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * ReusableUtf8JsonWriter_Get_m3CE65EC0DEBB6FC4B29C10F4D352D4D5E6DDF506 (RuntimeObject* ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * V_0 = NULL;
	{
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_0 = ((ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var))->get__cachedInstance_0();
		V_0 = L_0;
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_2 = ___stream0;
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_3 = (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 *)il2cpp_codegen_object_new(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var);
		ReusableUtf8JsonWriter__ctor_mB692527AB942B8F8BB1883372BF13ABF0263F15A(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		((ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var))->set__cachedInstance_0((ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 *)NULL);
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_4 = V_0;
		NullCheck(L_4);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = L_4->get__writer_1();
		RuntimeObject* L_6 = ___stream0;
		NullCheck(L_5);
		Utf8JsonWriter_Reset_mFE02B669A469CBFB8C96FF37008B73F2EED401F9(L_5, L_6, /*hidden argument*/NULL);
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_7 = V_0;
		return L_7;
	}
}
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Return(Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter_Return_mF3BEFC12807645A09F18933B4CE54ACE3209B3C1 (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_0 = ___writer0;
		((ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0_il2cpp_TypeInfo_var))->set__cachedInstance_0(L_0);
		ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * L_1 = ___writer0;
		NullCheck(L_1);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = L_1->get__writer_1();
		NullCheck(L_2);
		Utf8JsonWriter_Reset_mB4FE2ED062F5B16BC80A81C4E2DBDF10DC23A2F1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::GetJsonWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_mD25B9155C5D913E99F8318531B693671A8CE1E53 (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * __this, const RuntimeMethod* method)
{
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_0 = __this->get__writer_1();
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
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::CheckRead(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		bool L_1;
		L_1 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCF1D25B05860FF3AADE7EC54A45D791634970B6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_CheckRead_m21D9D7FFD81F6AB2CBF6120AC308F364E0604103_RuntimeMethod_var)));
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureObjectStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureObjectStart_m32741414182E546BC943B50D295F3F2AC95C4A53 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		uint8_t L_1;
		L_1 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		String_t* L_3;
		L_3 = SystemTextJsonExtensions_GetTokenString_m2FD9CD4EACF0007A520A5866B230C9770B033218((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4089C4157C8E819F2FA7F020E98EE41253103DDE)), /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_5 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_EnsureObjectStart_m32741414182E546BC943B50D295F3F2AC95C4A53_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_m2FD9CD4EACF0007A520A5866B230C9770B033218 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		uint8_t L_1;
		L_1 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = SystemTextJsonExtensions_GetTokenString_mD7AB8DA12015947E60EA9BC8C28C0B54B731D9A7(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_mD7AB8DA12015947E60EA9BC8C28C0B54B731D9A7 (uint8_t ___tokenType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACC87E6B2B548D708984D8A5ABA764C905ACDF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___tokenType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0026;
			}
			case 4:
			{
				goto IL_0032;
			}
			case 5:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_0020:
	{
		return _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
	}

IL_0026:
	{
		return _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
	}

IL_002c:
	{
		return _stringLiteral5ACC87E6B2B548D708984D8A5ABA764C905ACDF4;
	}

IL_0032:
	{
		RuntimeObject * L_1 = Box(JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var, (&___tokenType0));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		___tokenType0 = *(uint8_t*)UnBox(L_1);
		return L_2;
	}
}
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureArrayStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		uint8_t L_1;
		L_1 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		String_t* L_3;
		L_3 = SystemTextJsonExtensions_GetTokenString_m2FD9CD4EACF0007A520A5866B230C9770B033218((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64C99273009008F2814C530DB6265687D3B61A73)), /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_5 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_EnsureArrayStart_m9164A723973B8F7619A348BDEEC8F7340F056460_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsBoolean(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_ReadAsBoolean_m27BE1098BF23B406D4AF8E005E654EF4A08D35A8 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint8_t V_1 = 0;
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		bool L_1;
		L_1 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		uint8_t L_3;
		L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		uint8_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)9))))
		{
			goto IL_001c;
		}
	}
	{
		uint8_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0036;
	}

IL_001c:
	{
		V_0 = (bool)1;
		goto IL_0036;
	}

IL_0020:
	{
		String_t* L_6 = ___propertyName1;
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E216C1D4603F137356C88F9B48B0DFF27747483)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD382245C1077F70594A7C02B505A7C77888DD5)), /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_8 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsBoolean_m27BE1098BF23B406D4AF8E005E654EF4A08D35A8_RuntimeMethod_var)));
	}

IL_0036:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsString(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		bool L_1;
		L_1 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		uint8_t L_3;
		L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = ___propertyName1;
		uint8_t L_5 = 7;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66)), L_4, L_6, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_8 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsString_mE21A640F3AB9D8434EEFB7B5CC4989E2F509D161_RuntimeMethod_var)));
	}

IL_0027:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_9 = ___reader0;
		String_t* L_10;
		L_10 = Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Nullable`1<System.Int32> Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsInt32(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  SystemTextJsonExtensions_ReadAsInt32_m876EB0D970B3A18C9FA2AC010182BF3A142AE067 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		bool L_1;
		L_1 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		uint8_t L_3;
		L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4 = V_0;
		return L_4;
	}

IL_001b:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_5 = ___reader0;
		uint8_t L_6;
		L_6 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___propertyName1;
		uint8_t L_8 = 8;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66)), L_7, L_9, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_11 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsInt32_m876EB0D970B3A18C9FA2AC010182BF3A142AE067_RuntimeMethod_var)));
	}

IL_003b:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_12 = ___reader0;
		int32_t L_13;
		L_13 = Utf8JsonReader_GetInt32_m6E496D1C463F4C8601AB1D853109E9CDED769FC5((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_12, /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		return L_14;
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
// System.Text.Encoding Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Utf8BufferTextWriter_get_Encoding_mC9C0B0E7DC18BA42C82C3A98647400468B578D27 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->get__utf8NoBom_11();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__ctor_mB41FD8BC31B8E35D439C0313A21088DD640E4B16 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->get__utf8NoBom_11();
		NullCheck(L_0);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_1;
		L_1 = VirtFuncInvoker0< Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * >::Invoke(39 /* System.Text.Encoder System.Text.Encoding::GetEncoder() */, L_0);
		__this->set__encoder_14(L_1);
		return;
	}
}
// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Get(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * Utf8BufferTextWriter_Get_mCD7A1DB1A13E19D112DB67DF51D973CD008B631C (RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_0 = ((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->get__cachedInstance_13();
		V_0 = L_0;
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_2 = (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD *)il2cpp_codegen_object_new(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		Utf8BufferTextWriter__ctor_mB41FD8BC31B8E35D439C0313A21088DD640E4B16(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->set__cachedInstance_13((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD *)NULL);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_3 = V_0;
		RuntimeObject* L_4 = ___bufferWriter0;
		NullCheck(L_3);
		Utf8BufferTextWriter_SetWriter_m32689F410BF8B1E6FCC19F1695ECAC2B9DC1AE7F_inline(L_3, L_4, /*hidden argument*/NULL);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Return(Microsoft.AspNetCore.Internal.Utf8BufferTextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Return_mB71E34ECAF0DA821624E72DB7F44555535447FBE (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_0 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->set__cachedInstance_13(L_0);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_1 = ___writer0;
		NullCheck(L_1);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_2 = L_1->get__encoder_14();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Text.Encoder::Reset() */, L_2);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_3 = ___writer0;
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_4;
		L_4 = Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342(/*hidden argument*/Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set__memory_16(L_4);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_5 = ___writer0;
		NullCheck(L_5);
		L_5->set__memoryUsed_17(0);
		Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * L_6 = ___writer0;
		NullCheck(L_6);
		L_6->set__bufferWriter_15((RuntimeObject*)NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::SetWriter(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m32689F410BF8B1E6FCC19F1695ECAC2B9DC1AE7F (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferWriter0;
		__this->set__bufferWriter_15(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_m17D25B7AD61BDC49794622B75F310416CD8A90AD (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  L_3;
		L_3 = MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_inline(L_0, L_1, L_2, /*hidden argument*/MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_RuntimeMethod_var);
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_4;
		L_4 = Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E(L_3, /*hidden argument*/Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_RuntimeMethod_var);
		Utf8BufferTextWriter_WriteInternal_m824B780A150EA3BA9489EA580711C8E8069142C7(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_m4B68932459E5B35372DF7118E6AF5A6BAABB6AF0 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3(L_0, /*hidden argument*/ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_RuntimeMethod_var);
		Utf8BufferTextWriter_WriteInternal_m824B780A150EA3BA9489EA580711C8E8069142C7(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_m0AC560BA2870499B34CD1BFD96D49D53CD132B77 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_0036;
		}
	}
	{
		Utf8BufferTextWriter_EnsureBuffer_m2DD9E82C0D1C1337ACDA7773F28E27FB67B3ACF8(__this, /*hidden argument*/NULL);
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_1 = __this->get_address_of__memory_16();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_inline((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_1, /*hidden argument*/Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = __this->get__memoryUsed_17();
		uint8_t* L_4;
		L_4 = Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), L_3, /*hidden argument*/Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var);
		Il2CppChar L_5 = ___value0;
		*((int8_t*)L_4) = (int8_t)((int32_t)((uint8_t)L_5));
		int32_t L_6 = __this->get__memoryUsed_17();
		__this->set__memoryUsed_17(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		return;
	}

IL_0036:
	{
		Il2CppChar L_7 = ___value0;
		Utf8BufferTextWriter_WriteMultiByteChar_m664604D77394051CF5CB337FF325E800693309A1(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteMultiByteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteMultiByteChar_m664604D77394051CF5CB337FF325E800693309A1 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	bool V_5 = false;
	{
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_0;
		L_0 = Utf8BufferTextWriter_GetBuffer_mB499CA92809E5232B5FA0AF1C2E3F3A7CA3FD7E1_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_1 = V_0;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F(L_1, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		V_4 = (uint8_t*)L_2;
		uint8_t* L_3 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_3);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_4 = __this->get__encoder_14();
		uint8_t* L_5 = V_3;
		int32_t L_6;
		L_6 = Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), /*hidden argument*/Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		NullCheck(L_4);
		VirtActionInvoker8< Il2CppChar*, int32_t, uint8_t*, int32_t, bool, int32_t*, int32_t*, bool* >::Invoke(10 /* System.Void System.Text.Encoder::Convert(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&) */, L_4, (Il2CppChar*)(Il2CppChar*)((uintptr_t)(&___value0)), 1, (uint8_t*)(uint8_t*)L_5, L_6, (bool)0, (int32_t*)(&V_2), (int32_t*)(&V_1), (bool*)(&V_5));
		V_4 = (uint8_t*)((uintptr_t)0);
		int32_t L_7 = __this->get__memoryUsed_17();
		int32_t L_8 = V_1;
		__this->set__memoryUsed_17(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_m58B6EB7818B295F5C04FBC7D79572C90EE571E49 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_1;
		L_1 = MemoryExtensions_AsSpan_m26D24EB534C3C5946F5F9EF6B4C02C766067724C_inline(L_0, /*hidden argument*/NULL);
		Utf8BufferTextWriter_WriteInternal_m824B780A150EA3BA9489EA580711C8E8069142C7(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Span`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mB499CA92809E5232B5FA0AF1C2E3F3A7CA3FD7E1 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Utf8BufferTextWriter_EnsureBuffer_m2DD9E82C0D1C1337ACDA7773F28E27FB67B3ACF8(__this, /*hidden argument*/NULL);
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_0 = __this->get_address_of__memory_16();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_1;
		L_1 = Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_inline((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_0, /*hidden argument*/Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = __this->get__memoryUsed_17();
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_3 = __this->get_address_of__memory_16();
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_3, /*hidden argument*/Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		int32_t L_5 = __this->get__memoryUsed_17();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_6;
		L_6 = Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::EnsureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_EnsureBuffer_m2DD9E82C0D1C1337ACDA7773F28E27FB67B3ACF8 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_0 = __this->get_address_of__memory_16();
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_0, /*hidden argument*/Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		int32_t L_2 = __this->get__memoryUsed_17();
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->get_MaximumBytesPerUtf8Char_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) >= ((int32_t)L_3)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_4 = __this->get__memoryUsed_17();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = __this->get__bufferWriter_15();
		int32_t L_6 = __this->get__memoryUsed_17();
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0033:
	{
		RuntimeObject* L_7 = __this->get__bufferWriter_15();
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->get_MaximumBytesPerUtf8Char_12();
		NullCheck(L_7);
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_9;
		L_9 = InterfaceFuncInvoker1< Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 , int32_t >::Invoke(1 /* System.Memory`1<!0> System.Buffers.IBufferWriter`1<System.Byte>::GetMemory(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set__memory_16(L_9);
		__this->set__memoryUsed_17(0);
	}

IL_0050:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteInternal(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteInternal_m824B780A150EA3BA9489EA580711C8E8069142C7 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	bool V_7 = false;
	{
		goto IL_0069;
	}

IL_0002:
	{
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_0;
		L_0 = Utf8BufferTextWriter_GetBuffer_mB499CA92809E5232B5FA0AF1C2E3F3A7CA3FD7E1_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_1 = ___buffer0;
		Il2CppChar* L_2;
		L_2 = MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922(L_1, /*hidden argument*/MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_RuntimeMethod_var);
		V_4 = (Il2CppChar*)L_2;
		Il2CppChar* L_3 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_3);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_4 = V_0;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F(L_4, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var);
		V_6 = (uint8_t*)L_5;
		uint8_t* L_6 = V_6;
		V_5 = (uint8_t*)((uintptr_t)L_6);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_7 = __this->get__encoder_14();
		Il2CppChar* L_8 = V_3;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_inline((ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *)(&___buffer0), /*hidden argument*/ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_RuntimeMethod_var);
		uint8_t* L_10 = V_5;
		int32_t L_11;
		L_11 = Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), /*hidden argument*/Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var);
		NullCheck(L_7);
		VirtActionInvoker8< Il2CppChar*, int32_t, uint8_t*, int32_t, bool, int32_t*, int32_t*, bool* >::Invoke(10 /* System.Void System.Text.Encoder::Convert(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&) */, L_7, (Il2CppChar*)(Il2CppChar*)L_8, L_9, (uint8_t*)(uint8_t*)L_10, L_11, (bool)0, (int32_t*)(&V_2), (int32_t*)(&V_1), (bool*)(&V_7));
		V_6 = (uint8_t*)((uintptr_t)0);
		V_4 = (Il2CppChar*)((uintptr_t)0);
		int32_t L_12 = V_2;
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_13;
		L_13 = ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_inline((ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *)(&___buffer0), L_12, /*hidden argument*/ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_RuntimeMethod_var);
		___buffer0 = L_13;
		int32_t L_14 = __this->get__memoryUsed_17();
		int32_t L_15 = V_1;
		__this->set__memoryUsed_17(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
	}

IL_0069:
	{
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_inline((ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC *)(&___buffer0), /*hidden argument*/ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_RuntimeMethod_var);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Flush_mDFE05E00670F237A302051E6CD127B0B9F59B6FF (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__memoryUsed_17();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__bufferWriter_15();
		int32_t L_2 = __this->get__memoryUsed_17();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_1, L_2);
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_3 = __this->get_address_of__memory_16();
		int32_t L_4 = __this->get__memoryUsed_17();
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_5 = __this->get_address_of__memory_16();
		int32_t L_6;
		L_6 = Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_5, /*hidden argument*/Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		int32_t L_7 = __this->get__memoryUsed_17();
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_8;
		L_8 = Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_inline((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_3, L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_RuntimeMethod_var);
		__this->set__memory_16(L_8);
		__this->set__memoryUsed_17(0);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Dispose_mAEF5CAED9C7F8F5A8A66AF011D81983C61AA8B99 (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		TextWriter_Dispose_m27D59E6F6325CD5EA2E5ABB0E2FDC6F13A2A159C(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, __this);
	}

IL_0010:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__cctor_m4C548B539F1A55F4D93F124CF97BF34AFF35F6DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA83C010AF67DEDDC3E671DFDAF49634DFB2A2C90(L_0, (bool)0, /*hidden argument*/NULL);
		((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->set__utf8NoBom_11(L_0);
		((Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_il2cpp_TypeInfo_var))->set_MaximumBytesPerUtf8Char_12(4);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_mD25B9155C5D913E99F8318531B693671A8CE1E53_inline (ReusableUtf8JsonWriter_t188057630C40548C52519F06CCDEB4DDEC4942C0 * __this, const RuntimeMethod* method)
{
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_0 = __this->get__writer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Error_mC80496831251A1DEBA20377F8E32021FD95FD61B_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NegotiationResponse_get_Version_m471CCAEDB865F2F0BB3943C1D3E95BB114F251AF_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_Url_mBD1B5DA2A3E8EF657E3193D186ECBCB6375F78D8_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_AccessToken_m659104895C3DB242BBDF1185769BC6A253D31E3C_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAccessTokenU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionId_mBCA859BE36D9478FF0A673E66ACDC8D3F5929F33_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConnectionIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NegotiationResponse_get_ConnectionToken_mF9A684B1BE4E6BA57C4E329F91320F777FAB243C_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConnectionTokenU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NegotiationResponse_get_AvailableTransports_mC57C0B45606B5D3B7929A75F6B2B9590B8668230_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAvailableTransportsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AvailableTransport_get_Transport_m10DAA41E5CFD7543B34324D5DA87FF915DB51433_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTransportU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AvailableTransport_get_TransferFormats_m1A994D249460824C98E8DFAB6895D0B9F37765E5_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTransferFormatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__tokenType_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionId_m6D9258945B1E0B7A7622146763BF27EF32B59005_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_ConnectionToken_m3875AE1333E8BED909138FBA5617AE3AA159D539_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConnectionTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Url_m8130632D46372EF0812786EBD08C88324AD37243_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_AccessToken_m81F30992D9C178038C9CC4B836166DA6EF143960_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAccessTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_AvailableTransports_mA3A0C11B9AD2D500E4E04DDDE42B5232CFF39B48_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAvailableTransportsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Error_mA2C8CDAC83C68925780E8D7B3AB5BB10688986B9_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NegotiationResponse_set_Version_m261B0C541EC4FEE18335AA96A505CF82D2D5E78B_inline (NegotiationResponse_t6DF0B13F3FFBF32070A53D3BA6D227C34A25F1D4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableTransport_set_Transport_m8BE243E4E5FFAA313A7EDD77C20E39F414392D1D_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTransportU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableTransport_set_TransferFormats_m2F6E23F8E5F303E59572076B862FFEE615F88661_inline (AvailableTransport_t33D9EDFB761FD944678B28CD550D6C7648401D96 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTransferFormatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * JavaScriptEncoder_get_UnsafeRelaxedJsonEscaping_m9C60452931FBFF571399F66669483EF27264E477_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_il2cpp_TypeInfo_var);
		UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4 * L_0 = ((UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_StaticFields*)il2cpp_codegen_static_fields_for(UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_il2cpp_TypeInfo_var))->get_s_singleton_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m67FB213E0E43596B6BBF2419485839AC73F84495_inline (JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * __this, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___value0, const RuntimeMethod* method)
{
	{
		JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * L_0 = ___value0;
		__this->set_U3CEncoderU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m32689F410BF8B1E6FCC19F1695ECAC2B9DC1AE7F_inline (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferWriter0;
		__this->set__bufferWriter_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mB499CA92809E5232B5FA0AF1C2E3F3A7CA3FD7E1_inline (Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Utf8BufferTextWriter_EnsureBuffer_m2DD9E82C0D1C1337ACDA7773F28E27FB67B3ACF8(__this, /*hidden argument*/NULL);
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_0 = __this->get_address_of__memory_16();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_1;
		L_1 = Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_inline((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_0, /*hidden argument*/Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = __this->get__memoryUsed_17();
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_3 = __this->get_address_of__memory_16();
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_3, /*hidden argument*/Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		int32_t L_5 = __this->get__memoryUsed_17();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_6;
		L_6 = Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  MemoryExtensions_AsSpan_m26D24EB534C3C5946F5F9EF6B4C02C766067724C_inline (String_t* ___text0, const RuntimeMethod* method)
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
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC ));
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * L_3;
		L_3 = Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_inline(L_2, /*hidden argument*/Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var))->get_StringAdjustment_0();
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_inline((&L_7), L_3, (intptr_t)L_4, L_6, /*hidden argument*/ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB9B04C5C3777B59C0351C263B931058C38A46DC2_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 14)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mBF303B48BF91AC99370C208697CE1214E8449A16((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___length1;
		__this->set__length_2(L_4);
		__this->set__pinnable_0((Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)NULL);
		void* L_5 = ___pointer0;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		__this->set__byteOffset_1((intptr_t)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_gshared_inline (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_inline((&L_3), (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 )L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get__index_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__object_0();
		NullCheck((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13))));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = VirtFuncInvoker0< Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  >::Invoke(9 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, (MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13))));
		V_0 = (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_2;
		int32_t L_3 = (int32_t)__this->get__index_1();
		int32_t L_4 = (int32_t)__this->get__length_2();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5;
		L_5 = Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), (int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)2147483647LL))), (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject * L_11 = (RuntimeObject *)__this->get__object_0();
		String_t* L_12 = (String_t*)((String_t*)IsInst((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		V_1 = (String_t*)L_12;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_14;
		L_14 = ((  Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		intptr_t L_15 = ((MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var))->get_StringAdjustment_0();
		String_t* L_16 = V_1;
		NullCheck((String_t*)L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_16, /*hidden argument*/NULL);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_inline((&L_18), (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)L_14, (intptr_t)L_15, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		V_0 = (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_18;
		int32_t L_19 = (int32_t)__this->get__index_1();
		int32_t L_20 = (int32_t)__this->get__length_2();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_21;
		L_21 = Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), (int32_t)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_21;
	}

IL_0089:
	{
		RuntimeObject * L_22 = (RuntimeObject *)__this->get__object_0();
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject * L_23 = (RuntimeObject *)__this->get__object_0();
		int32_t L_24 = (int32_t)__this->get__index_1();
		int32_t L_25 = (int32_t)__this->get__length_2();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_inline((&L_26), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_23, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18))), (int32_t)L_24, (int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)2147483647LL))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A ));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_27 = V_0;
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4B1505E62CFA19EE4C92F330E4204B597FC68600(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_2 = (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_6 = ___index0;
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((uint8_t*)(uint8_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (uint8_t*)(L_7);
	}

IL_0030:
	{
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_8 = (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)__this->get__pinnable_0();
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		uint8_t* L_11;
		L_11 = ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)((uint8_t*)(uint8_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_12 = ___index0;
		uint8_t* L_13;
		L_13 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((uint8_t*)(uint8_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (uint8_t*)(L_13);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->get__length_2();
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		intptr_t L_5 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_6 = ___start0;
		intptr_t L_7;
		L_7 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_0 = (intptr_t)L_7;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_8 = (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)__this->get__pinnable_0();
		intptr_t L_9 = V_0;
		int32_t L_10 = ___length1;
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_inline((&L_11), (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)L_8, (intptr_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_gshared_inline (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * L_7 = (Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_inline((&L_10), (Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return (ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)2147483647LL)));
		int32_t L_2 = ___start0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___length1;
		int32_t L_5 = V_1;
		int32_t L_6 = ___start0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m036820F3189C0FA81D83CA10627B743A17412449(/*hidden argument*/NULL);
	}

IL_001e:
	{
		RuntimeObject * L_7 = (RuntimeObject *)__this->get__object_0();
		int32_t L_8 = (int32_t)__this->get__index_1();
		int32_t L_9 = ___start0;
		int32_t L_10 = ___length1;
		int32_t L_11 = V_0;
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_inline((&L_12), (RuntimeObject *)L_7, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10|(int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)-2147483648LL))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 )L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB9879F9DB70DC9BF572331711E12823613D9EC7C_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_gshared_inline (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0017;
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 ));
		return;
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0043;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___array0;
		NullCheck((RuntimeObject *)(RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)(RuntimeObject *)L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 11)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_5, (Type_t *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616(/*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_9 = ___start1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___length2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0057:
	{
		int32_t L_14 = ___length2;
		__this->set__length_2(L_14);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___array0;
		Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * L_16;
		L_16 = ((  Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		__this->set__pinnable_0(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		intptr_t L_17 = ((PerTypeValues_1_tCA7C4DFBCDC68AD91E014C0DB2608B6240229584_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->get_ArrayAdjustment_2();
		int32_t L_18 = ___start1;
		intptr_t L_19;
		L_19 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_17, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__this->set__byteOffset_1((intptr_t)L_19);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0017;
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A ));
		return;
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0043;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		NullCheck((RuntimeObject *)(RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)(RuntimeObject *)L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 11)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_5, (Type_t *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616(/*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))))))
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0057:
	{
		int32_t L_14 = ___length2;
		__this->set__length_2(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___array0;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_16;
		L_16 = ((  Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		__this->set__pinnable_0(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		intptr_t L_17 = ((PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->get_ArrayAdjustment_2();
		int32_t L_18 = ___start1;
		intptr_t L_19;
		L_19 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_17, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		__this->set__byteOffset_1((intptr_t)L_19);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		__this->set__object_0(L_0);
		int32_t L_1 = ___start1;
		__this->set__index_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
