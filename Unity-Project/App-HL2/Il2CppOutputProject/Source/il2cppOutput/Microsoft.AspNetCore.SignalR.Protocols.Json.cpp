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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo>
struct ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tCB963BA7F071839639F443DD18CE2F1F15A68528;
// Microsoft.Extensions.Options.IOptions`1<Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions>
struct IOptions_1_t86891F9C27F7E9771127269DF91241EF63D84856;
// Microsoft.Extensions.Options.IOptions`1<System.Object>
struct IOptions_1_t0FB29786D54313F7C23B902CBC055A0FEEF8812D;
// System.Collections.Generic.IReadOnlyList`1<System.Type>
struct IReadOnlyList_1_tA4D3241643ABADD44CA14878713D04E6EFDE2F1D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25;
// System.Pinnable`1<System.Char>
struct Pinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Microsoft.AspNetCore.SignalR.Protocol.CancelInvocationMessage
struct CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA;
// Microsoft.AspNetCore.SignalR.Protocol.CloseMessage
struct CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage
struct CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD026E670F587EC9A579AF43B6B8CC6D12F7068BE;
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
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage
struct HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2;
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage
struct HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB;
// Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage
struct HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.AspNetCore.SignalR.Protocol.IHubProtocol
struct IHubProtocol_t5D7A53884575FD8E570642476FC379EF3FBEB217;
// Microsoft.AspNetCore.SignalR.IInvocationBinder
struct IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803;
// System.IO.InvalidDataException
struct InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Microsoft.AspNetCore.SignalR.Protocol.InvocationBindingFailureMessage
struct InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B;
// Microsoft.AspNetCore.SignalR.Protocol.InvocationMessage
struct InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFB9E0E44A1C96E94A99F2FE6430FC80A6E2D31D6;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6;
// Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol
struct JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524;
// Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions
struct JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6;
// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC;
// System.Text.Json.MemberAccessor
struct MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699;
// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter
struct ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// Microsoft.AspNetCore.SignalR.Protocol.StreamBindingFailureMessage
struct StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D;
// Microsoft.AspNetCore.SignalR.Protocol.StreamInvocationMessage
struct StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8;
// Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage
struct StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C;
// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2FDD75B2F3EBB2E68D0FFD87B7425DD1F9D5861D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOptions_1_t86891F9C27F7E9771127269DF91241EF63D84856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t8100E72F776CC98A4E12AEF97BB8E10DFDCCE66D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tA4D3241643ABADD44CA14878713D04E6EFDE2F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeRelaxedJavaScriptEncoder_tCD00F6ADD5C738E977F7BCC60242032C9AA6A2D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04D8D8B1A7424790D1B3CDF609D54086C63B0EF8;
IL2CPP_EXTERN_C String_t* _stringLiteral057F1E43FBABAC23586AA55F0EF538573003911F;
IL2CPP_EXTERN_C String_t* _stringLiteral0E988FD059BFAF7496F983AF2B41FBC372D1A1DA;
IL2CPP_EXTERN_C String_t* _stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521;
IL2CPP_EXTERN_C String_t* _stringLiteral1699559B547AE0F2170A87C5D92B80483AEC1405;
IL2CPP_EXTERN_C String_t* _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B;
IL2CPP_EXTERN_C String_t* _stringLiteral2D0B18AF8FE0C26462400684485ADF84CD3AC751;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral368FD5FDD9D32A20DF4066D2D3E2DFB1AFED1638;
IL2CPP_EXTERN_C String_t* _stringLiteral4089C4157C8E819F2FA7F020E98EE41253103DDE;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5;
IL2CPP_EXTERN_C String_t* _stringLiteral5ACC87E6B2B548D708984D8A5ABA764C905ACDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral5D47119D40E1D81001C848D8562C8CED3A74F7A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5E216C1D4603F137356C88F9B48B0DFF27747483;
IL2CPP_EXTERN_C String_t* _stringLiteral602A150409DA10AD220A2047FFC10A1CCD72F938;
IL2CPP_EXTERN_C String_t* _stringLiteral64C99273009008F2814C530DB6265687D3B61A73;
IL2CPP_EXTERN_C String_t* _stringLiteral676FAE1D3F9F23568212E17D5529DA3EAA85F75C;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE71A711DA768E489EB73A42460BA5FEE5F0430;
IL2CPP_EXTERN_C String_t* _stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434;
IL2CPP_EXTERN_C String_t* _stringLiteral795031906F453C5391378462575BB2D25F0C6CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral805F84311EA7092E3277934B5D78AD5558C35C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral94141E1FC491E736FD7C62AAF6375244F4F37615;
IL2CPP_EXTERN_C String_t* _stringLiteral954BA8E79817CA0C4985F9080D23259FB6812B2B;
IL2CPP_EXTERN_C String_t* _stringLiteralB895CF111576DE2F09AEAA9AC332736F30CF8CD3;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DD7FE08DC43CA9A31D74FC078106B978561D85;
IL2CPP_EXTERN_C String_t* _stringLiteralB8F76A26928547B210362C7935DB9241906665F9;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF1D25B05860FF3AADE7EC54A45D791634970B6;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E06709487965DAE05B1526BFA7C070617FF576;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C String_t* _stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD382245C1077F70594A7C02B505A7C77888DD5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindCancelInvocationMessage_m60DC05C7280A39A01844A0F41FCB3F9965241725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHubProtocol_WriteMessageCore_m7ABF67A4F3A53EAF80E235502C87FC8B7C5CF1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA52EA25F7B50F7ECEB23723EC413415E0CE0E96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA1A2A0DB16D03D44FDD109E543AF417C3D8FC17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mDD970E3B1980CFC8EE44B26871C47F81BD603922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m2B14DC18790DC0AEF9ACF277631E24190FB2347A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Options_Create_TisJsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_mEAE1FE47327830777C155C4A303CA54CFEE6617A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m88FF9BAD4C2EE61EF380CB0AB86B8AF6C588DECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m2D9F420AFF9FAADA5D1F4B21E6067D62E43DF7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_mB885D59E9ECC01BB5F20F2507C63759F97470498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m19399362960EBC5B316561815EAAB3A91187ED0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m10BAF4836146C0C3B31A1EEC3E61A9B6AE513F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_EnsureArrayStart_mA788D5776172D161A8FC068669ED4B11A5E66F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_EnsureObjectStart_m95A3E8CC9F5CF7538A2F42B75246230F14D6F306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsBoolean_mB61D6842E4216484534F9D50C45149E1DBABBFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsInt32_mB6B18C86114D6558E4994DB590873D65AD913D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_tE125F6DEEFC15AC95C29187B7A530B9153E5EA04_m58E958DF2A9E60302C0B34698D99A906629CC6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
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
struct U3CModuleU3E_tF2A2A6D2EE3A79CD0025C8248053D2C89A486E50 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
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


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
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


// Microsoft.AspNetCore.SignalR.Protocol.HubMessage
struct HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB  : public RuntimeObject
{
public:

public:
};


// Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions
struct JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55  : public RuntimeObject
{
public:
	// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::<PayloadSerializerOptions>k__BackingField
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___U3CPayloadSerializerOptionsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CPayloadSerializerOptionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55, ___U3CPayloadSerializerOptionsU3Ek__BackingField_0)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get_U3CPayloadSerializerOptionsU3Ek__BackingField_0() const { return ___U3CPayloadSerializerOptionsU3Ek__BackingField_0; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of_U3CPayloadSerializerOptionsU3Ek__BackingField_0() { return &___U3CPayloadSerializerOptionsU3Ek__BackingField_0; }
	inline void set_U3CPayloadSerializerOptionsU3Ek__BackingField_0(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		___U3CPayloadSerializerOptionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPayloadSerializerOptionsU3Ek__BackingField_0), (void*)value);
	}
};


// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6  : public RuntimeObject
{
public:

public:
};

struct JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_StaticFields
{
public:
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::<CamelCase>k__BackingField
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ___U3CCamelCaseU3Ek__BackingField_0;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::<Default>k__BackingField
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ___U3CDefaultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCamelCaseU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_StaticFields, ___U3CCamelCaseU3Ek__BackingField_0)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get_U3CCamelCaseU3Ek__BackingField_0() const { return ___U3CCamelCaseU3Ek__BackingField_0; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of_U3CCamelCaseU3Ek__BackingField_0() { return &___U3CCamelCaseU3Ek__BackingField_0; }
	inline void set_U3CCamelCaseU3Ek__BackingField_0(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		___U3CCamelCaseU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCamelCaseU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_StaticFields, ___U3CDefaultU3Ek__BackingField_1)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get_U3CDefaultU3Ek__BackingField_1() const { return ___U3CDefaultU3Ek__BackingField_1; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of_U3CDefaultU3Ek__BackingField_1() { return &___U3CDefaultU3Ek__BackingField_1; }
	inline void set_U3CDefaultU3Ek__BackingField_1(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		___U3CDefaultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultU3Ek__BackingField_1), (void*)value);
	}
};


// Microsoft.Extensions.DependencyInjection.JsonProtocolDependencyInjectionExtensions
struct JsonProtocolDependencyInjectionExtensions_t249D6037CA4C7DC43D426A8A93EE590FC6E42923  : public RuntimeObject
{
public:

public:
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


// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter
struct ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681  : public RuntimeObject
{
public:
	// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::_writer
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ____writer_1;

public:
	inline static int32_t get_offset_of__writer_1() { return static_cast<int32_t>(offsetof(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681, ____writer_1)); }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * get__writer_1() const { return ____writer_1; }
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 ** get_address_of__writer_1() { return &____writer_1; }
	inline void set__writer_1(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * value)
	{
		____writer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_1), (void*)value);
	}
};

struct ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::_cachedInstance
	ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * ____cachedInstance_0;

public:
	inline static int32_t get_offset_of__cachedInstance_0() { return static_cast<int32_t>(offsetof(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_ThreadStaticFields, ____cachedInstance_0)); }
	inline ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * get__cachedInstance_0() const { return ____cachedInstance_0; }
	inline ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 ** get_address_of__cachedInstance_0() { return &____cachedInstance_0; }
	inline void set__cachedInstance_0(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * value)
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


// Microsoft.AspNetCore.Internal.SystemTextJsonExtensions
struct SystemTextJsonExtensions_t0D42C6CFC85ECE19F0B3D14447AE2568D688D917  : public RuntimeObject
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


// Microsoft.AspNetCore.Internal.TextMessageFormatter
struct TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC  : public RuntimeObject
{
public:

public:
};

struct TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields
{
public:
	// System.Byte Microsoft.AspNetCore.Internal.TextMessageFormatter::RecordSeparator
	uint8_t ___RecordSeparator_0;

public:
	inline static int32_t get_offset_of_RecordSeparator_0() { return static_cast<int32_t>(offsetof(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields, ___RecordSeparator_0)); }
	inline uint8_t get_RecordSeparator_0() const { return ___RecordSeparator_0; }
	inline uint8_t* get_address_of_RecordSeparator_0() { return &___RecordSeparator_0; }
	inline void set_RecordSeparator_0(uint8_t value)
	{
		___RecordSeparator_0 = value;
	}
};


// Microsoft.AspNetCore.Internal.TextMessageParser
struct TextMessageParser_t53DFBB3D6D960FD4E82A9670C4ADF796BFD9662C  : public RuntimeObject
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


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC 
{
public:
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC, ____length_2)); }
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


// Microsoft.AspNetCore.SignalR.Protocol.CloseMessage
struct CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376  : public HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB
{
public:
	// System.String Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_1;
	// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::<AllowReconnect>k__BackingField
	bool ___U3CAllowReconnectU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376, ___U3CErrorU3Ek__BackingField_1)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllowReconnectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376, ___U3CAllowReconnectU3Ek__BackingField_2)); }
	inline bool get_U3CAllowReconnectU3Ek__BackingField_2() const { return ___U3CAllowReconnectU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowReconnectU3Ek__BackingField_2() { return &___U3CAllowReconnectU3Ek__BackingField_2; }
	inline void set_U3CAllowReconnectU3Ek__BackingField_2(bool value)
	{
		___U3CAllowReconnectU3Ek__BackingField_2 = value;
	}
};

struct CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_StaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Protocol.CloseMessage Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::Empty
	CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_StaticFields, ___Empty_0)); }
	inline CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * get_Empty_0() const { return ___Empty_0; }
	inline CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD026E670F587EC9A579AF43B6B8CC6D12F7068BE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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
struct IsReadOnlyAttribute_tFB9E0E44A1C96E94A99F2FE6430FC80A6E2D31D6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// Microsoft.AspNetCore.SignalR.Protocol.StreamBindingFailureMessage
struct StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D  : public HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB
{
public:
	// System.String Microsoft.AspNetCore.SignalR.Protocol.StreamBindingFailureMessage::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Microsoft.AspNetCore.SignalR.Protocol.StreamBindingFailureMessage::<BindingFailure>k__BackingField
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___U3CBindingFailureU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBindingFailureU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D, ___U3CBindingFailureU3Ek__BackingField_1)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get_U3CBindingFailureU3Ek__BackingField_1() const { return ___U3CBindingFailureU3Ek__BackingField_1; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of_U3CBindingFailureU3Ek__BackingField_1() { return &___U3CBindingFailureU3Ek__BackingField_1; }
	inline void set_U3CBindingFailureU3Ek__BackingField_1(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		___U3CBindingFailureU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBindingFailureU3Ek__BackingField_1), (void*)value);
	}
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


// System.Nullable`1<System.SequencePosition>
struct Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 
{
public:
	// T System.Nullable`1::value
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546, ___value_0)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get_value_0() const { return ___value_0; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// Microsoft.AspNetCore.SignalR.Protocol.CancelInvocationMessage
struct CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA  : public HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2
{
public:

public:
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


// Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage
struct HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6  : public HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2
{
public:
	// System.String Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_2;
	// System.Object[] Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::<Arguments>k__BackingField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___U3CArgumentsU3Ek__BackingField_3;
	// System.String[] Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::<StreamIds>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CStreamIdsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6, ___U3CTargetU3Ek__BackingField_2)); }
	inline String_t* get_U3CTargetU3Ek__BackingField_2() const { return ___U3CTargetU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTargetU3Ek__BackingField_2() { return &___U3CTargetU3Ek__BackingField_2; }
	inline void set_U3CTargetU3Ek__BackingField_2(String_t* value)
	{
		___U3CTargetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6, ___U3CArgumentsU3Ek__BackingField_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_U3CArgumentsU3Ek__BackingField_3() const { return ___U3CArgumentsU3Ek__BackingField_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_U3CArgumentsU3Ek__BackingField_3() { return &___U3CArgumentsU3Ek__BackingField_3; }
	inline void set_U3CArgumentsU3Ek__BackingField_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___U3CArgumentsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArgumentsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStreamIdsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6, ___U3CStreamIdsU3Ek__BackingField_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CStreamIdsU3Ek__BackingField_4() const { return ___U3CStreamIdsU3Ek__BackingField_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CStreamIdsU3Ek__BackingField_4() { return &___U3CStreamIdsU3Ek__BackingField_4; }
	inline void set_U3CStreamIdsU3Ek__BackingField_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CStreamIdsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamIdsU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.InvocationBindingFailureMessage
struct InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B  : public HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2
{
public:
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Microsoft.AspNetCore.SignalR.Protocol.InvocationBindingFailureMessage::<BindingFailure>k__BackingField
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___U3CBindingFailureU3Ek__BackingField_2;
	// System.String Microsoft.AspNetCore.SignalR.Protocol.InvocationBindingFailureMessage::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBindingFailureU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B, ___U3CBindingFailureU3Ek__BackingField_2)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get_U3CBindingFailureU3Ek__BackingField_2() const { return ___U3CBindingFailureU3Ek__BackingField_2; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of_U3CBindingFailureU3Ek__BackingField_2() { return &___U3CBindingFailureU3Ek__BackingField_2; }
	inline void set_U3CBindingFailureU3Ek__BackingField_2(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		___U3CBindingFailureU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBindingFailureU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B, ___U3CTargetU3Ek__BackingField_3)); }
	inline String_t* get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(String_t* value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetU3Ek__BackingField_3), (void*)value);
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


// Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol
struct JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524  : public RuntimeObject
{
public:
	// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::_payloadSerializerOptions
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ____payloadSerializerOptions_22;

public:
	inline static int32_t get_offset_of__payloadSerializerOptions_22() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524, ____payloadSerializerOptions_22)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get__payloadSerializerOptions_22() const { return ____payloadSerializerOptions_22; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of__payloadSerializerOptions_22() { return &____payloadSerializerOptions_22; }
	inline void set__payloadSerializerOptions_22(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		____payloadSerializerOptions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadSerializerOptions_22), (void*)value);
	}
};

struct JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields
{
public:
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ResultPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ResultPropertyNameBytes_1;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ItemPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ItemPropertyNameBytes_3;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::InvocationIdPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___InvocationIdPropertyNameBytes_5;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::StreamIdsPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___StreamIdsPropertyNameBytes_7;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::TypePropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___TypePropertyNameBytes_9;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ErrorPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ErrorPropertyNameBytes_11;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::AllowReconnectPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___AllowReconnectPropertyNameBytes_13;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::TargetPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___TargetPropertyNameBytes_15;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ArgumentsPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___ArgumentsPropertyNameBytes_17;
	// System.Text.Json.JsonEncodedText Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::HeadersPropertyNameBytes
	JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___HeadersPropertyNameBytes_19;
	// System.String Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ProtocolName
	String_t* ___ProtocolName_20;
	// System.Int32 Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ProtocolVersion
	int32_t ___ProtocolVersion_21;

public:
	inline static int32_t get_offset_of_ResultPropertyNameBytes_1() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ResultPropertyNameBytes_1)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ResultPropertyNameBytes_1() const { return ___ResultPropertyNameBytes_1; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ResultPropertyNameBytes_1() { return &___ResultPropertyNameBytes_1; }
	inline void set_ResultPropertyNameBytes_1(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ResultPropertyNameBytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ResultPropertyNameBytes_1))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ResultPropertyNameBytes_1))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ItemPropertyNameBytes_3() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ItemPropertyNameBytes_3)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ItemPropertyNameBytes_3() const { return ___ItemPropertyNameBytes_3; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ItemPropertyNameBytes_3() { return &___ItemPropertyNameBytes_3; }
	inline void set_ItemPropertyNameBytes_3(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ItemPropertyNameBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ItemPropertyNameBytes_3))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ItemPropertyNameBytes_3))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_InvocationIdPropertyNameBytes_5() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___InvocationIdPropertyNameBytes_5)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_InvocationIdPropertyNameBytes_5() const { return ___InvocationIdPropertyNameBytes_5; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_InvocationIdPropertyNameBytes_5() { return &___InvocationIdPropertyNameBytes_5; }
	inline void set_InvocationIdPropertyNameBytes_5(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___InvocationIdPropertyNameBytes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___InvocationIdPropertyNameBytes_5))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___InvocationIdPropertyNameBytes_5))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_StreamIdsPropertyNameBytes_7() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___StreamIdsPropertyNameBytes_7)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_StreamIdsPropertyNameBytes_7() const { return ___StreamIdsPropertyNameBytes_7; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_StreamIdsPropertyNameBytes_7() { return &___StreamIdsPropertyNameBytes_7; }
	inline void set_StreamIdsPropertyNameBytes_7(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___StreamIdsPropertyNameBytes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___StreamIdsPropertyNameBytes_7))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___StreamIdsPropertyNameBytes_7))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TypePropertyNameBytes_9() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___TypePropertyNameBytes_9)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_TypePropertyNameBytes_9() const { return ___TypePropertyNameBytes_9; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_TypePropertyNameBytes_9() { return &___TypePropertyNameBytes_9; }
	inline void set_TypePropertyNameBytes_9(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___TypePropertyNameBytes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TypePropertyNameBytes_9))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TypePropertyNameBytes_9))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ErrorPropertyNameBytes_11() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ErrorPropertyNameBytes_11)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ErrorPropertyNameBytes_11() const { return ___ErrorPropertyNameBytes_11; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ErrorPropertyNameBytes_11() { return &___ErrorPropertyNameBytes_11; }
	inline void set_ErrorPropertyNameBytes_11(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ErrorPropertyNameBytes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ErrorPropertyNameBytes_11))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ErrorPropertyNameBytes_11))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_AllowReconnectPropertyNameBytes_13() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___AllowReconnectPropertyNameBytes_13)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_AllowReconnectPropertyNameBytes_13() const { return ___AllowReconnectPropertyNameBytes_13; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_AllowReconnectPropertyNameBytes_13() { return &___AllowReconnectPropertyNameBytes_13; }
	inline void set_AllowReconnectPropertyNameBytes_13(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___AllowReconnectPropertyNameBytes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AllowReconnectPropertyNameBytes_13))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___AllowReconnectPropertyNameBytes_13))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TargetPropertyNameBytes_15() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___TargetPropertyNameBytes_15)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_TargetPropertyNameBytes_15() const { return ___TargetPropertyNameBytes_15; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_TargetPropertyNameBytes_15() { return &___TargetPropertyNameBytes_15; }
	inline void set_TargetPropertyNameBytes_15(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___TargetPropertyNameBytes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TargetPropertyNameBytes_15))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TargetPropertyNameBytes_15))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ArgumentsPropertyNameBytes_17() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ArgumentsPropertyNameBytes_17)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_ArgumentsPropertyNameBytes_17() const { return ___ArgumentsPropertyNameBytes_17; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_ArgumentsPropertyNameBytes_17() { return &___ArgumentsPropertyNameBytes_17; }
	inline void set_ArgumentsPropertyNameBytes_17(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___ArgumentsPropertyNameBytes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ArgumentsPropertyNameBytes_17))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ArgumentsPropertyNameBytes_17))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_HeadersPropertyNameBytes_19() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___HeadersPropertyNameBytes_19)); }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  get_HeadersPropertyNameBytes_19() const { return ___HeadersPropertyNameBytes_19; }
	inline JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * get_address_of_HeadersPropertyNameBytes_19() { return &___HeadersPropertyNameBytes_19; }
	inline void set_HeadersPropertyNameBytes_19(JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  value)
	{
		___HeadersPropertyNameBytes_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___HeadersPropertyNameBytes_19))->____utf8Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___HeadersPropertyNameBytes_19))->____value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ProtocolName_20() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ProtocolName_20)); }
	inline String_t* get_ProtocolName_20() const { return ___ProtocolName_20; }
	inline String_t** get_address_of_ProtocolName_20() { return &___ProtocolName_20; }
	inline void set_ProtocolName_20(String_t* value)
	{
		___ProtocolName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolName_20), (void*)value);
	}

	inline static int32_t get_offset_of_ProtocolVersion_21() { return static_cast<int32_t>(offsetof(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields, ___ProtocolVersion_21)); }
	inline int32_t get_ProtocolVersion_21() const { return ___ProtocolVersion_21; }
	inline int32_t* get_address_of_ProtocolVersion_21() { return &___ProtocolVersion_21; }
	inline void set_ProtocolVersion_21(int32_t value)
	{
		___ProtocolVersion_21 = value;
	}
};


// System.Text.Json.Serialization.JsonIgnoreCondition
struct JsonIgnoreCondition_t4FA48C41C374B2CF29A9CEC409994BBCE6090726 
{
public:
	// System.Int32 System.Text.Json.Serialization.JsonIgnoreCondition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonIgnoreCondition_t4FA48C41C374B2CF29A9CEC409994BBCE6090726, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage
struct StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0  : public HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2
{
public:
	// System.Object Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage::<Item>k__BackingField
	RuntimeObject * ___U3CItemU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CItemU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0, ___U3CItemU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CItemU3Ek__BackingField_2() const { return ___U3CItemU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CItemU3Ek__BackingField_2() { return &___U3CItemU3Ek__BackingField_2; }
	inline void set_U3CItemU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CItemU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemU3Ek__BackingField_2), (void*)value);
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
struct Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
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
	inline static int32_t get_offset_of__encoder_14() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69, ____encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_14() const { return ____encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_14() { return &____encoder_14; }
	inline void set__encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of__bufferWriter_15() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69, ____bufferWriter_15)); }
	inline RuntimeObject* get__bufferWriter_15() const { return ____bufferWriter_15; }
	inline RuntimeObject** get_address_of__bufferWriter_15() { return &____bufferWriter_15; }
	inline void set__bufferWriter_15(RuntimeObject* value)
	{
		____bufferWriter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferWriter_15), (void*)value);
	}

	inline static int32_t get_offset_of__memory_16() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69, ____memory_16)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_16() const { return ____memory_16; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_16() { return &____memory_16; }
	inline void set__memory_16(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_16))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__memoryUsed_17() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69, ____memoryUsed_17)); }
	inline int32_t get__memoryUsed_17() const { return ____memoryUsed_17; }
	inline int32_t* get_address_of__memoryUsed_17() { return &____memoryUsed_17; }
	inline void set__memoryUsed_17(int32_t value)
	{
		____memoryUsed_17 = value;
	}
};

struct Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields
{
public:
	// System.Text.UTF8Encoding Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_utf8NoBom
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ____utf8NoBom_11;
	// System.Int32 Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::MaximumBytesPerUtf8Char
	int32_t ___MaximumBytesPerUtf8Char_12;

public:
	inline static int32_t get_offset_of__utf8NoBom_11() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields, ____utf8NoBom_11)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get__utf8NoBom_11() const { return ____utf8NoBom_11; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of__utf8NoBom_11() { return &____utf8NoBom_11; }
	inline void set__utf8NoBom_11(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		____utf8NoBom_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8NoBom_11), (void*)value);
	}

	inline static int32_t get_offset_of_MaximumBytesPerUtf8Char_12() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields, ___MaximumBytesPerUtf8Char_12)); }
	inline int32_t get_MaximumBytesPerUtf8Char_12() const { return ___MaximumBytesPerUtf8Char_12; }
	inline int32_t* get_address_of_MaximumBytesPerUtf8Char_12() { return &___MaximumBytesPerUtf8Char_12; }
	inline void set_MaximumBytesPerUtf8Char_12(int32_t value)
	{
		___MaximumBytesPerUtf8Char_12 = value;
	}
};

struct Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_cachedInstance
	Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * ____cachedInstance_13;

public:
	inline static int32_t get_offset_of__cachedInstance_13() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ThreadStaticFields, ____cachedInstance_13)); }
	inline Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * get__cachedInstance_13() const { return ____cachedInstance_13; }
	inline Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 ** get_address_of__cachedInstance_13() { return &____cachedInstance_13; }
	inline void set__cachedInstance_13(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * value)
	{
		____cachedInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_13), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.InvocationMessage
struct InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291  : public HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6
{
public:

public:
};


// System.Text.Json.JsonException
struct JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8  : public Exception_t
{
public:
	// System.String System.Text.Json.JsonException::_message
	String_t* ____message_17;
	// System.Boolean System.Text.Json.JsonException::<AppendPathInformation>k__BackingField
	bool ___U3CAppendPathInformationU3Ek__BackingField_18;
	// System.Nullable`1<System.Int64> System.Text.Json.JsonException::<LineNumber>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CLineNumberU3Ek__BackingField_19;
	// System.Nullable`1<System.Int64> System.Text.Json.JsonException::<BytePositionInLine>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CBytePositionInLineU3Ek__BackingField_20;
	// System.String System.Text.Json.JsonException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of__message_17() { return static_cast<int32_t>(offsetof(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8, ____message_17)); }
	inline String_t* get__message_17() const { return ____message_17; }
	inline String_t** get_address_of__message_17() { return &____message_17; }
	inline void set__message_17(String_t* value)
	{
		____message_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppendPathInformationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8, ___U3CAppendPathInformationU3Ek__BackingField_18)); }
	inline bool get_U3CAppendPathInformationU3Ek__BackingField_18() const { return ___U3CAppendPathInformationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CAppendPathInformationU3Ek__BackingField_18() { return &___U3CAppendPathInformationU3Ek__BackingField_18; }
	inline void set_U3CAppendPathInformationU3Ek__BackingField_18(bool value)
	{
		___U3CAppendPathInformationU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CLineNumberU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8, ___U3CLineNumberU3Ek__BackingField_19)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CLineNumberU3Ek__BackingField_19() const { return ___U3CLineNumberU3Ek__BackingField_19; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CLineNumberU3Ek__BackingField_19() { return &___U3CLineNumberU3Ek__BackingField_19; }
	inline void set_U3CLineNumberU3Ek__BackingField_19(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CLineNumberU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CBytePositionInLineU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8, ___U3CBytePositionInLineU3Ek__BackingField_20)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CBytePositionInLineU3Ek__BackingField_20() const { return ___U3CBytePositionInLineU3Ek__BackingField_20; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CBytePositionInLineU3Ek__BackingField_20() { return &___U3CBytePositionInLineU3Ek__BackingField_20; }
	inline void set_U3CBytePositionInLineU3Ek__BackingField_20(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CBytePositionInLineU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8, ___U3CPathU3Ek__BackingField_21)); }
	inline String_t* get_U3CPathU3Ek__BackingField_21() const { return ___U3CPathU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_21() { return &___U3CPathU3Ek__BackingField_21; }
	inline void set_U3CPathU3Ek__BackingField_21(String_t* value)
	{
		___U3CPathU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_21), (void*)value);
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

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::_converters
	ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * ____converters_2;
	// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo> System.Text.Json.JsonSerializerOptions::_classes
	ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * ____classes_6;
	// System.Text.Json.MemberAccessor System.Text.Json.JsonSerializerOptions::_memberAccessorStrategy
	MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * ____memberAccessorStrategy_7;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_dictionaryKeyPolicy
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ____dictionaryKeyPolicy_8;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_jsonPropertyNamingPolicy
	JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ____jsonPropertyNamingPolicy_9;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonSerializerOptions::_readCommentHandling
	uint8_t ____readCommentHandling_10;
	// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.JsonSerializerOptions::_referenceHandler
	ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * ____referenceHandler_11;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonSerializerOptions::_encoder
	JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ____encoder_12;
	// System.Text.Json.Serialization.JsonIgnoreCondition System.Text.Json.JsonSerializerOptions::_defaultIgnoreCondition
	int32_t ____defaultIgnoreCondition_13;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_defaultBufferSize
	int32_t ____defaultBufferSize_14;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_maxDepth
	int32_t ____maxDepth_15;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_allowTrailingCommas
	bool ____allowTrailingCommas_16;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_haveTypesBeenCreated
	bool ____haveTypesBeenCreated_17;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreNullValues
	bool ____ignoreNullValues_18;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadOnlyProperties
	bool ____ignoreReadOnlyProperties_19;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_propertyNameCaseInsensitive
	bool ____propertyNameCaseInsensitive_20;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_writeIndented
	bool ____writeIndented_21;
	// System.Int32 System.Text.Json.JsonSerializerOptions::<EffectiveMaxDepth>k__BackingField
	int32_t ___U3CEffectiveMaxDepthU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of__converters_2() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____converters_2)); }
	inline ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * get__converters_2() const { return ____converters_2; }
	inline ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 ** get_address_of__converters_2() { return &____converters_2; }
	inline void set__converters_2(ConcurrentDictionary_2_t9BC3243983CDFB26A7958BAF5B3CB93D5CF46926 * value)
	{
		____converters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ___U3CConvertersU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_3() const { return ___U3CConvertersU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_3() { return &___U3CConvertersU3Ek__BackingField_3; }
	inline void set_U3CConvertersU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of__classes_6() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____classes_6)); }
	inline ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * get__classes_6() const { return ____classes_6; }
	inline ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 ** get_address_of__classes_6() { return &____classes_6; }
	inline void set__classes_6(ConcurrentDictionary_2_tB1031155AFB8D06D77F8CEAE8FD46B0490AAE989 * value)
	{
		____classes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____classes_6), (void*)value);
	}

	inline static int32_t get_offset_of__memberAccessorStrategy_7() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____memberAccessorStrategy_7)); }
	inline MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * get__memberAccessorStrategy_7() const { return ____memberAccessorStrategy_7; }
	inline MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 ** get_address_of__memberAccessorStrategy_7() { return &____memberAccessorStrategy_7; }
	inline void set__memberAccessorStrategy_7(MemberAccessor_t0D7B1D32C7B17E76B599A6CEA542ACE317AC1E28 * value)
	{
		____memberAccessorStrategy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberAccessorStrategy_7), (void*)value);
	}

	inline static int32_t get_offset_of__dictionaryKeyPolicy_8() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____dictionaryKeyPolicy_8)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get__dictionaryKeyPolicy_8() const { return ____dictionaryKeyPolicy_8; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of__dictionaryKeyPolicy_8() { return &____dictionaryKeyPolicy_8; }
	inline void set__dictionaryKeyPolicy_8(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		____dictionaryKeyPolicy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionaryKeyPolicy_8), (void*)value);
	}

	inline static int32_t get_offset_of__jsonPropertyNamingPolicy_9() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____jsonPropertyNamingPolicy_9)); }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * get__jsonPropertyNamingPolicy_9() const { return ____jsonPropertyNamingPolicy_9; }
	inline JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 ** get_address_of__jsonPropertyNamingPolicy_9() { return &____jsonPropertyNamingPolicy_9; }
	inline void set__jsonPropertyNamingPolicy_9(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * value)
	{
		____jsonPropertyNamingPolicy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jsonPropertyNamingPolicy_9), (void*)value);
	}

	inline static int32_t get_offset_of__readCommentHandling_10() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____readCommentHandling_10)); }
	inline uint8_t get__readCommentHandling_10() const { return ____readCommentHandling_10; }
	inline uint8_t* get_address_of__readCommentHandling_10() { return &____readCommentHandling_10; }
	inline void set__readCommentHandling_10(uint8_t value)
	{
		____readCommentHandling_10 = value;
	}

	inline static int32_t get_offset_of__referenceHandler_11() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____referenceHandler_11)); }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * get__referenceHandler_11() const { return ____referenceHandler_11; }
	inline ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 ** get_address_of__referenceHandler_11() { return &____referenceHandler_11; }
	inline void set__referenceHandler_11(ReferenceHandler_t19A2F9AAF70B99B1AF33D6537DA0465EBA47C699 * value)
	{
		____referenceHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_12() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____encoder_12)); }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * get__encoder_12() const { return ____encoder_12; }
	inline JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 ** get_address_of__encoder_12() { return &____encoder_12; }
	inline void set__encoder_12(JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * value)
	{
		____encoder_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_12), (void*)value);
	}

	inline static int32_t get_offset_of__defaultIgnoreCondition_13() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____defaultIgnoreCondition_13)); }
	inline int32_t get__defaultIgnoreCondition_13() const { return ____defaultIgnoreCondition_13; }
	inline int32_t* get_address_of__defaultIgnoreCondition_13() { return &____defaultIgnoreCondition_13; }
	inline void set__defaultIgnoreCondition_13(int32_t value)
	{
		____defaultIgnoreCondition_13 = value;
	}

	inline static int32_t get_offset_of__defaultBufferSize_14() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____defaultBufferSize_14)); }
	inline int32_t get__defaultBufferSize_14() const { return ____defaultBufferSize_14; }
	inline int32_t* get_address_of__defaultBufferSize_14() { return &____defaultBufferSize_14; }
	inline void set__defaultBufferSize_14(int32_t value)
	{
		____defaultBufferSize_14 = value;
	}

	inline static int32_t get_offset_of__maxDepth_15() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____maxDepth_15)); }
	inline int32_t get__maxDepth_15() const { return ____maxDepth_15; }
	inline int32_t* get_address_of__maxDepth_15() { return &____maxDepth_15; }
	inline void set__maxDepth_15(int32_t value)
	{
		____maxDepth_15 = value;
	}

	inline static int32_t get_offset_of__allowTrailingCommas_16() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____allowTrailingCommas_16)); }
	inline bool get__allowTrailingCommas_16() const { return ____allowTrailingCommas_16; }
	inline bool* get_address_of__allowTrailingCommas_16() { return &____allowTrailingCommas_16; }
	inline void set__allowTrailingCommas_16(bool value)
	{
		____allowTrailingCommas_16 = value;
	}

	inline static int32_t get_offset_of__haveTypesBeenCreated_17() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____haveTypesBeenCreated_17)); }
	inline bool get__haveTypesBeenCreated_17() const { return ____haveTypesBeenCreated_17; }
	inline bool* get_address_of__haveTypesBeenCreated_17() { return &____haveTypesBeenCreated_17; }
	inline void set__haveTypesBeenCreated_17(bool value)
	{
		____haveTypesBeenCreated_17 = value;
	}

	inline static int32_t get_offset_of__ignoreNullValues_18() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____ignoreNullValues_18)); }
	inline bool get__ignoreNullValues_18() const { return ____ignoreNullValues_18; }
	inline bool* get_address_of__ignoreNullValues_18() { return &____ignoreNullValues_18; }
	inline void set__ignoreNullValues_18(bool value)
	{
		____ignoreNullValues_18 = value;
	}

	inline static int32_t get_offset_of__ignoreReadOnlyProperties_19() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____ignoreReadOnlyProperties_19)); }
	inline bool get__ignoreReadOnlyProperties_19() const { return ____ignoreReadOnlyProperties_19; }
	inline bool* get_address_of__ignoreReadOnlyProperties_19() { return &____ignoreReadOnlyProperties_19; }
	inline void set__ignoreReadOnlyProperties_19(bool value)
	{
		____ignoreReadOnlyProperties_19 = value;
	}

	inline static int32_t get_offset_of__propertyNameCaseInsensitive_20() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____propertyNameCaseInsensitive_20)); }
	inline bool get__propertyNameCaseInsensitive_20() const { return ____propertyNameCaseInsensitive_20; }
	inline bool* get_address_of__propertyNameCaseInsensitive_20() { return &____propertyNameCaseInsensitive_20; }
	inline void set__propertyNameCaseInsensitive_20(bool value)
	{
		____propertyNameCaseInsensitive_20 = value;
	}

	inline static int32_t get_offset_of__writeIndented_21() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ____writeIndented_21)); }
	inline bool get__writeIndented_21() const { return ____writeIndented_21; }
	inline bool* get_address_of__writeIndented_21() { return &____writeIndented_21; }
	inline void set__writeIndented_21(bool value)
	{
		____writeIndented_21 = value;
	}

	inline static int32_t get_offset_of_U3CEffectiveMaxDepthU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC, ___U3CEffectiveMaxDepthU3Ek__BackingField_22)); }
	inline int32_t get_U3CEffectiveMaxDepthU3Ek__BackingField_22() const { return ___U3CEffectiveMaxDepthU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CEffectiveMaxDepthU3Ek__BackingField_22() { return &___U3CEffectiveMaxDepthU3Ek__BackingField_22; }
	inline void set_U3CEffectiveMaxDepthU3Ek__BackingField_22(int32_t value)
	{
		___U3CEffectiveMaxDepthU3Ek__BackingField_22 = value;
	}
};

struct JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultSimpleConverters
	Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * ___s_defaultSimpleConverters_0;
	// System.Text.Json.Serialization.JsonConverter[] System.Text.Json.JsonSerializerOptions::s_defaultFactoryConverters
	JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* ___s_defaultFactoryConverters_1;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonSerializerOptions::s_defaultOptions
	JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___s_defaultOptions_5;

public:
	inline static int32_t get_offset_of_s_defaultSimpleConverters_0() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultSimpleConverters_0)); }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * get_s_defaultSimpleConverters_0() const { return ___s_defaultSimpleConverters_0; }
	inline Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 ** get_address_of_s_defaultSimpleConverters_0() { return &___s_defaultSimpleConverters_0; }
	inline void set_s_defaultSimpleConverters_0(Dictionary_2_tA24F6AD71BE8A6328F5431AC069B1163D3EA27B0 * value)
	{
		___s_defaultSimpleConverters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultSimpleConverters_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultFactoryConverters_1() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultFactoryConverters_1)); }
	inline JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* get_s_defaultFactoryConverters_1() const { return ___s_defaultFactoryConverters_1; }
	inline JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84** get_address_of_s_defaultFactoryConverters_1() { return &___s_defaultFactoryConverters_1; }
	inline void set_s_defaultFactoryConverters_1(JsonConverterU5BU5D_t0E4D751DE5B214502141BABC3493A390AF687E84* value)
	{
		___s_defaultFactoryConverters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultFactoryConverters_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultOptions_5() { return static_cast<int32_t>(offsetof(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_StaticFields, ___s_defaultOptions_5)); }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * get_s_defaultOptions_5() const { return ___s_defaultOptions_5; }
	inline JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC ** get_address_of_s_defaultOptions_5() { return &___s_defaultOptions_5; }
	inline void set_s_defaultOptions_5(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * value)
	{
		___s_defaultOptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultOptions_5), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Protocol.StreamInvocationMessage
struct StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8  : public HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6
{
public:

public:
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


// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.Text.Decoder Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ____decoder_4;
	// System.Buffers.ReadOnlySequence`1<System.Byte> Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_utf8Buffer
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____utf8Buffer_5;

public:
	inline static int32_t get_offset_of__decoder_4() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C, ____decoder_4)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get__decoder_4() const { return ____decoder_4; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of__decoder_4() { return &____decoder_4; }
	inline void set__decoder_4(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		____decoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__utf8Buffer_5() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C, ____utf8Buffer_5)); }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  get__utf8Buffer_5() const { return ____utf8Buffer_5; }
	inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * get_address_of__utf8Buffer_5() { return &____utf8Buffer_5; }
	inline void set__utf8Buffer_5(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  value)
	{
		____utf8Buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____utf8Buffer_5))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____utf8Buffer_5))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};

struct Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_cachedInstance
	Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * ____cachedInstance_6;

public:
	inline static int32_t get_offset_of__cachedInstance_6() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ThreadStaticFields, ____cachedInstance_6)); }
	inline Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * get__cachedInstance_6() const { return ____cachedInstance_6; }
	inline Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C ** get_address_of__cachedInstance_6() { return &____cachedInstance_6; }
	inline void set__cachedInstance_6(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * value)
	{
		____cachedInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_6), (void*)value);
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


// Microsoft.Extensions.Options.IOptions`1<!!0> Microsoft.Extensions.Options.Options::Create<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Options_Create_TisRuntimeObject_m36F4C230A8D6C0D72519134D6CF18D100ED3197F_gshared (RuntimeObject * ___options0, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<!0> System.ReadOnlyMemory`1<System.Byte>::op_Implicit(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0& System.Span`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Byte>::get_IsSingleSegment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::get_First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlyMemory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_gshared_inline (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC * __this, const RuntimeMethod* method);
// System.Int32 System.MemoryExtensions::IndexOf<System.Byte>(System.ReadOnlySpan`1<!!0>,!!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, uint8_t ___value1, const RuntimeMethod* method);
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___start0, const RuntimeMethod* method);
// System.Nullable`1<System.SequencePosition> System.Buffers.BuffersExtensions::PositionOf<System.Byte>(System.Buffers.ReadOnlySequence`1<!!0>&,!!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___source0, uint8_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.SequencePosition>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_gshared_inline (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.SequencePosition>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_gshared (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, const RuntimeMethod* method);
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int32,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int32_t ___start0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___end1, const RuntimeMethod* method);
// System.SequencePosition System.Buffers.ReadOnlySequence`1<System.Byte>::GetPosition(System.Int64,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___offset0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___origin1, const RuntimeMethod* method);
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.SequencePosition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___start0, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Byte>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method);
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_gshared (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method);
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
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlySpan_1_Slice_mEF42EB6B9FF108D4C4B0E06619D6B3C867C51513_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9F207A2967317FCB9C21FE47F07500B37E8D937A_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.SequencePosition System.Buffers.ReadOnlySequence`1<System.Byte>::GetPosition(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ReadOnlySequence_1_GetPosition_mF352E76B67410A053E6EAF292190D895692D469E_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___offset0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.SequencePosition>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E_gshared (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___value0, const RuntimeMethod* method);
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::BoundsCheck(System.SequencePosition&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySequence_1_BoundsCheck_mFA6A7A23052C01E59FC4A36D5EDAF79288DFF7A5_gshared (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___position0, const RuntimeMethod* method);
// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1<System.Byte>::SliceImpl(System.SequencePosition&,System.SequencePosition&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_SliceImpl_mDA38BC9B76AB3382F264F0D8E1A4F3416F821AF2_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___start0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___end1, const RuntimeMethod* method);
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_gshared_inline (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC6701E91E5C2EC0D752D8325613952C82A85B335_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B933196A24A0BEEB786907A780DAE2DC9194B87_gshared_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_gshared_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::.ctor(System.Object,System.Int32,System.Object,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequence_1__ctor_m6C861496F987F9BC185787512733CB6108AC8644_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, RuntimeObject * ___startSegment0, int32_t ___startIndexAndFlags1, RuntimeObject * ___endSegment2, int32_t ___endIndexAndFlags3, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocolOptions__ctor_m8747B342D4FE87414D4BA3C771D6AD054E95EE87 (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, const RuntimeMethod* method);
// Microsoft.Extensions.Options.IOptions`1<!!0> Microsoft.Extensions.Options.Options::Create<Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions>(!!0)
inline RuntimeObject* Options_Create_TisJsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_mEAE1FE47327830777C155C4A303CA54CFEE6617A (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * ___options0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 *, const RuntimeMethod*))Options_Create_TisRuntimeObject_m36F4C230A8D6C0D72519134D6CF18D100ED3197F_gshared)(___options0, method);
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::.ctor(Microsoft.Extensions.Options.IOptions`1<Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol__ctor_m0F2CFD596DDE945C7E2AB9741509A30B70DA8A64 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, RuntimeObject* ___options0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::get_PayloadSerializerOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * JsonHubProtocolOptions_get_PayloadSerializerOptions_m2346CDA5FB2167FD6E614529506F18A125A27874_inline (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonHubProtocol_get_Version_mC3A4B2F976D805ED21795DACE8F3E8C771010785_inline (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.Internal.TextMessageParser::TryParseMessage(System.Buffers.ReadOnlySequence`1<System.Byte>&,System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextMessageParser_TryParseMessage_mCE6776285E5C2475A606D3FEFEA91087EFAAF5BD_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___buffer0, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___payload1, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ParseMessage(System.Buffers.ReadOnlySequence`1<System.Byte>,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___input0, RuntimeObject* ___binder1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteMessageCore(Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteMessageCore_m7ABF67A4F3A53EAF80E235502C87FC8B7C5CF1B6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, RuntimeObject* ___stream1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.TextMessageFormatter::WriteRecordSeparator(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMessageFormatter_WriteRecordSeparator_mCCF17423FEF15F1B60D7A4B6549BD24AE08C04AC (RuntimeObject* ___output0, const RuntimeMethod* method);
// System.Byte[] Microsoft.AspNetCore.SignalR.Protocol.HubProtocolExtensions::GetMessageBytes(Microsoft.AspNetCore.SignalR.Protocol.IHubProtocol,Microsoft.AspNetCore.SignalR.Protocol.HubMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HubProtocolExtensions_GetMessageBytes_m56B93B9874AA32CFFD6738E4FC957AD527E35445 (RuntimeObject* ___hubProtocol0, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message1, const RuntimeMethod* method);
// System.ReadOnlyMemory`1<!0> System.ReadOnlyMemory`1<System.Byte>::op_Implicit(!0[])
inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D_gshared)(___array0, method);
}
// System.Void System.Text.Json.Utf8JsonReader::.ctor(System.Buffers.ReadOnlySequence`1<System.Byte>,System.Boolean,System.Text.Json.JsonReaderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonReader__ctor_mAB84457C5A2EC30628E35855B519E7283A876A41 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___jsonData0, bool ___isFinalBlock1, JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  ___state2, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::CheckRead(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureObjectStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureObjectStart_m95A3E8CC9F5CF7538A2F42B75246230F14D6F306 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::get_TokenType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonEncodedText::get_EncodedUtf8Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5 (JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.Json.Utf8JsonReader::ValueTextEquals(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___utf8Text0, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsInt32(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  SystemTextJsonExtensions_ReadAsInt32_mB6B18C86114D6558E4994DB590873D65AD913D85 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.IO.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692 (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsString(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_m87001E6A0C20052582CDFF8691731089944A8115 (uint8_t ___tokenType0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.Text.Json.Utf8JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.String System.Text.Json.Utf8JsonReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsBoolean(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_ReadAsBoolean_mB61D6842E4216484534F9D50C45149E1DBABBFA1 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonReader::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Object Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindType(System.Text.Json.Utf8JsonReader&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, Type_t * ___type1, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.StreamBindingFailureMessage::.ctor(System.String,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBindingFailureMessage__ctor_mAD3C9CA4B154375C214D7B539BBFAAB0B7C84D10 (StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D * __this, String_t* ___id0, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___bindingFailure1, const RuntimeMethod* method);
// System.Int32 System.Text.Json.Utf8JsonReader::get_CurrentDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Object[] Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindTypes(System.Text.Json.Utf8JsonReader&,System.Collections.Generic.IReadOnlyList`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, RuntimeObject* ___paramTypes1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ReadHeaders(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindInvocationMessage(System.String,System.String,System.Object[],System.Boolean,System.String[],Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, bool ___hasArguments3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds4, RuntimeObject* ___binder5, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.InvocationBindingFailureMessage::.ctor(System.String,System.String,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationBindingFailureMessage__ctor_m880C82007083595CF0A5ADFB5AF86529B3ADC3F4 (InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B * __this, String_t* ___invocationId0, String_t* ___target1, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___bindingFailure2, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindStreamInvocationMessage(System.String,System.String,System.Object[],System.Boolean,System.String[],Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, bool ___hasArguments3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds4, RuntimeObject* ___binder5, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindStreamItemMessage(System.String,System.Object,System.Boolean,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, RuntimeObject * ___item1, bool ___hasItem2, RuntimeObject* ___binder3, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCompletionMessage(System.String,System.String,System.Object,System.Boolean,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___error1, RuntimeObject * ___result2, bool ___hasResult3, RuntimeObject* ___binder4, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCancelInvocationMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindCancelInvocationMessage_m60DC05C7280A39A01844A0F41FCB3F9965241725 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.CloseMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCloseMessage(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * JsonHubProtocol_BindCloseMessage_m3B70AED3E6C4DB42DD27AD491FE58BDA48F08E5B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___error0, bool ___allowReconnect1, const RuntimeMethod* method);
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ApplyHeaders(Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_ApplyHeaders_mBDAFD99C42071555DA4C3770AC7D084F8635879E (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method);
// System.Void System.IO.InvalidDataException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mA234CAC0202189C1550D9F47EAD93DAF548D2DC4 (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Get(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * ReusableUtf8JsonWriter_Get_m29B303CA76FD12C30D54B6B048B4F76E7C1A59C3 (RuntimeObject* ___stream0, const RuntimeMethod* method);
// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::GetJsonWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_m679E4D6F4C53F82CDFEAF34FA857E4B114EFFFEC_inline (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartObject_mDBB166D7C6BB2AB073674FBCF130CFB2F7B9BE0D (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteMessageType(System.Text.Json.Utf8JsonWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer0, int32_t ___type1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteHeaders(System.Text.Json.Utf8JsonWriter,Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer0, HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * ___message1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.InvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteInvocationMessage_m60ECFA5FEF3C548DB75C006C39CFCF224CD0BD96 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.StreamInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamInvocationMessage_m010DCF39C5EF418D6DB291F927B9C4E210970D09 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamItemMessage(Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamItemMessage_m67CD1FA232276DB3C52B46A6F9152715EDA59AF6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCompletionMessage(Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCompletionMessage_mBE7A35228FD70DEB5BDA7F869C876E796A49F2C0 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCancelInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.CancelInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCancelInvocationMessage_m3859BB0C0569979D857DAA162F57DFEFABF0FCE1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCloseMessage(Microsoft.AspNetCore.SignalR.Protocol.CloseMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCloseMessage_m273B5C8A878649F2695B05FC0400EDACC6F4A722 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Flush_mFBF59A4DFBFA802B724D25BB5CE84E81957CD6CD (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Return(Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter_Return_m68C407D9D1BDE8E0502F1A6793AB62E7328E96C3 (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * ___writer0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HubInvocationMessage_get_Headers_m6389562F95BA5D2F4BC022A9EEF8295E1A79CDF1_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartObject(System.Text.Json.JsonEncodedText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartObject_m1D7B957582FD6C8E33B777C38CC747C061B72AD6 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_mAF95F29F34160582E07E47387CA5A16274D63622 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteInvocationId(Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.Text.Json.JsonEncodedText,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::get_HasResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompletionMessage_get_HasResult_mC1CA5286CBF9FE19168DC31D867FEB3CAE13AB51_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.Text.Json.JsonEncodedText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_m6E7E134242EEC5BED1938E8149AD455317E379AB (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, const RuntimeMethod* method);
// System.Object Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteNullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNullValue_m5C0E05457A39C3954BE256531BF58931E9872447 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializer::Serialize(System.Text.Json.Utf8JsonWriter,System.Object,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_m389A0F74EB7BCD9488D921DBD9B40ADA880D34EB (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer0, RuntimeObject * ___value1, Type_t * ___inputType2, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options3, const RuntimeMethod* method);
// System.Object Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage::get_Item()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * StreamItemMessage_get_Item_m94906A64B48E5881B82DDA196C1C6DE60713C461_inline (StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HubMethodInvocationMessage_get_Target_m05CD6D81C6471D40223F9B308812BF01354EFC7C_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method);
// System.Object[] Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::get_Arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* HubMethodInvocationMessage_get_Arguments_mEAA9989839A4E6D24EFC8D33C3C9EA1537991356_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteArguments(System.Object[],System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteArguments_m5232C891BBCFD8A1E578F3E5F1C94C40B6550EA1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.String[] Microsoft.AspNetCore.SignalR.Protocol.HubMethodInvocationMessage::get_StreamIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* HubMethodInvocationMessage_get_StreamIds_mF41F7209AD9C5938ACBF7C48DAAC0C06962DC498_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamIds(System.String[],System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamIds_mE7497E3D2936706EFEDBFEA0025B1D515164EFD5 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CloseMessage_get_Error_mFB4E2A8399C7E2BA66FEF1626F3B18D576DC09D5_inline (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::get_AllowReconnect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CloseMessage_get_AllowReconnect_m32147106579DF805FA7F1F4031DC9B1E6D90F2FC_inline (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteBoolean(System.Text.Json.JsonEncodedText,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBoolean_mFB48FB25300D9E28B7396177CCDC99506C509C13 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray(System.Text.Json.JsonEncodedText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_m06E95AE000F88F655D1E129B922ED8C1B2672FA1 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage::get_InvocationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HubInvocationMessage_get_InvocationId_m8B8220F599427486835AE29DF844AA6118DF5EDB_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.Text.Json.JsonEncodedText,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mE13A78D1BA06700966C33EB7D73AA06B814B4F3B (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  ___propertyName0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.CancelInvocationMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelInvocationMessage__ctor_m1EB64AE4C5829A201734CF6399D55C52ADA1BA5D (CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * __this, String_t* ___invocationId0, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage::.ctor(System.String,System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionMessage__ctor_m1CD5DB3DE1426B1C2664F858DD4FFF02C94A79D3 (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, String_t* ___invocationId0, String_t* ___error1, RuntimeObject * ___result2, bool ___hasResult3, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamItemMessage__ctor_m1147375672DFF6B1D85BA76D27BE516B4A3B3C73 (StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * __this, String_t* ___invocationId0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.StreamInvocationMessage::.ctor(System.String,System.String,System.Object[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInvocationMessage__ctor_mBCBE3CD70F70563977569037432E1CC19177CB85 (StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds3, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.InvocationMessage::.ctor(System.String,System.String,System.Object[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationMessage__ctor_m8498B76123910828039BEBE04B4E48529A1C839F (InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds3, const RuntimeMethod* method);
// System.Object System.Text.Json.JsonSerializer::Deserialize(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSerializer_Deserialize_m62B9137DE35497FC07913831DAE0C2C7A5147B66 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, Type_t * ___returnType1, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___options2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.CloseMessage::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseMessage__ctor_mB8B640659DB2979112580AB4C5CE95984281346B (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * __this, String_t* ___error0, bool ___allowReconnect1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage::set_Headers(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HubInvocationMessage_set_Headers_m57D5F6BAA0F0E0A6C34EF283E4D19393BAF58EBC_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions__ctor_mC915A11B1E53D91D241E02A3A59B1FFA86A7DD63 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_WriteIndented(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_WriteIndented_m6A8F869F0E7B5719594AE767F15907224EF0C82A (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_ReadCommentHandling(System.Text.Json.JsonCommentHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_ReadCommentHandling_mF556A7EB8A2DDD8B1070D300D4E2A50A8C9FB851 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_AllowTrailingCommas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_AllowTrailingCommas_mEB2B67F0FF9E9C2A555C5256E89C56872AA23BE3 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_DefaultIgnoreCondition(System.Text.Json.Serialization.JsonIgnoreCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_DefaultIgnoreCondition_m8B91521E9229AF67AE48373F317EB9A0282CBAC4 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_IgnoreReadOnlyProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_IgnoreReadOnlyProperties_m12055114737650DC99890419B94C826C51209C2D (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, bool ___value0, const RuntimeMethod* method);
// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::get_CamelCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * JsonNamingPolicy_get_CamelCase_mC4D37A8461CB8C0FBB67356CC7003344AD141A32_inline (const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_PropertyNamingPolicy(System.Text.Json.JsonNamingPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_PropertyNamingPolicy_mF68D664544AE6B2D13DBE6F60E69B3DA27E14240 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_PropertyNameCaseInsensitive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_PropertyNameCaseInsensitive_mDA99DD87D15CC6A8D74A9C5601F547BC318938E3 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_MaxDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_MaxDepth_mD2211399E461E93178AF84654303805D8B489BA2 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_DictionaryKeyPolicy(System.Text.Json.JsonNamingPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_DictionaryKeyPolicy_m3FFC6C9743F26D2DB7B3BB08C103A533EAD4A993 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_DefaultBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_DefaultBufferSize_m5DD90E7B356610954B6525851AA073120C4337C5 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_UnsafeRelaxedJsonEscaping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * JavaScriptEncoder_get_UnsafeRelaxedJsonEscaping_m9C60452931FBFF571399F66669483EF27264E477_inline (const RuntimeMethod* method);
// System.Void System.Text.Json.JsonSerializerOptions::set_Encoder(System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_set_Encoder_m61FB9693F28EE7110E2F6C26DA5C813304BF4A24 (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * __this, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___value0, const RuntimeMethod* method);
// System.Text.Json.JsonEncodedText System.Text.Json.JsonEncodedText::Encode(System.String,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A (String_t* ___value0, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___encoder1, const RuntimeMethod* method);
// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::CreateDefaultSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * JsonHubProtocol_CreateDefaultSerializerSettings_m53FCC81D8B93B664513B421AEC2B44DDD47259C7 (const RuntimeMethod* method);
// System.Void System.Text.Json.JsonWriterOptions::set_SkipValidation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterOptions_set_SkipValidation_m8FDD432338EEF7EA694D21D979A3FA74A211BF23 (JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.JsonWriterOptions::set_Encoder(System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m67FB213E0E43596B6BBF2419485839AC73F84495_inline (JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867 * __this, JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>,System.Text.Json.JsonWriterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter__ctor_m900ACC11CED7521E3A9B76D14A1A0C6038A41806 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, RuntimeObject* ___bufferWriter0, JsonWriterOptions_t4CD317BC7290010BE4C9BE5BC9480CF2C5E6B867  ___options1, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter__ctor_m383DA8D98506D9AE5DF9B682BB59DBA039B900A3 (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * __this, RuntimeObject* ___stream0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Reset(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Reset_mFE02B669A469CBFB8C96FF37008B73F2EED401F9 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method);
// System.Void System.Text.Json.Utf8JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Reset_mB4FE2ED062F5B16BC80A81C4E2DBDF10DC23A2F1 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * __this, const RuntimeMethod* method);
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_mCAB2C5639ADDC333DA27C7FAABB2D3EE8085508E (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method);
// System.Int32 System.Text.Json.Utf8JsonReader::GetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonReader_GetInt32_m6E496D1C463F4C8601AB1D853109E9CDED769FC5 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0& System.Span`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_inline (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *, int32_t, const RuntimeMethod*))Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Byte>::get_IsSingleSegment()
inline bool ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, const RuntimeMethod*))ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_gshared_inline)(__this, method);
}
// System.ReadOnlyMemory`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::get_First()
inline ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, const RuntimeMethod*))ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_gshared)(__this, method);
}
// System.ReadOnlySpan`1<!0> System.ReadOnlyMemory`1<System.Byte>::get_Span()
inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_inline (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  (*) (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_gshared_inline)(__this, method);
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Byte>(System.ReadOnlySpan`1<!!0>,!!0)
inline int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , uint8_t, const RuntimeMethod*))MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_gshared_inline)(___span0, ___value1, method);
}
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, int32_t, int32_t, const RuntimeMethod*))ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_gshared)(__this, ___start0, ___length1, method);
}
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int64)
inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, int64_t, const RuntimeMethod*))ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_gshared)(__this, ___start0, method);
}
// System.Boolean Microsoft.AspNetCore.Internal.TextMessageParser::TryParseMessageMultiSegment(System.Buffers.ReadOnlySequence`1<System.Byte>&,System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextMessageParser_TryParseMessageMultiSegment_m34E08A05FB4C3CA54410838F2185C269AA627345 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___buffer0, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___payload1, const RuntimeMethod* method);
// System.Nullable`1<System.SequencePosition> System.Buffers.BuffersExtensions::PositionOf<System.Byte>(System.Buffers.ReadOnlySequence`1<!!0>&,!!0)
inline Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___source0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, uint8_t, const RuntimeMethod*))BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_gshared_inline)(___source0, ___value1, method);
}
// System.Boolean System.Nullable`1<System.SequencePosition>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_inline (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.SequencePosition>::get_Value()
inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, const RuntimeMethod* method)
{
	return ((  SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  (*) (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *, const RuntimeMethod*))Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_gshared)(__this, method);
}
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.Int32,System.SequencePosition)
inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int32_t ___start0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___end1, const RuntimeMethod* method)
{
	return ((  ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, int32_t, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 , const RuntimeMethod*))ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A_gshared)(__this, ___start0, ___end1, method);
}
// System.SequencePosition System.Buffers.ReadOnlySequence`1<System.Byte>::GetPosition(System.Int64,System.SequencePosition)
inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___offset0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___origin1, const RuntimeMethod* method)
{
	return ((  SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, int64_t, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 , const RuntimeMethod*))ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B_gshared)(__this, ___offset0, ___origin1, method);
}
// System.Buffers.ReadOnlySequence`1<!0> System.Buffers.ReadOnlySequence`1<System.Byte>::Slice(System.SequencePosition)
inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 , const RuntimeMethod*))ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_gshared_inline)(__this, ___start0, method);
}
// System.Void System.IO.TextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader__ctor_m6DFFA45D57F3E5A8FA3995BB40A2BC765AB2795A (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextReader__ctor_mA8CEF1ADFBA47C927A0F37D25D97323691C9AC91 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::SetBuffer(System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextReader_SetBuffer_mE8A05C6A5DCED07A6852F71F1FAF0891E0BD1CA4 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___utf8Buffer0, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Byte>::get_IsEmpty()
inline bool ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, const RuntimeMethod*))ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632_gshared)(__this, method);
}
// !!0& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<!!0>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_gshared)(___span0, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline)(__this, method);
}
// System.Void System.IO.TextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__ctor_m30FDF64ADFE0BD73DE38723C396C01A268282C60 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method);
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::SetWriter(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m3F9233AAC794BF41BFE0AE3B3254A177EB947BDE_inline (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteInternal_mC5EC152C42A25D53E566AB5E9F81B3CDBEF27AE5 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___buffer0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<!0> System.ReadOnlySpan`1<System.Char>::op_Implicit(!0[])
inline ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mF71DB81E8438D299AB96F61244FE2553378AE7A3_gshared)(___array0, method);
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::EnsureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_EnsureBuffer_mDF3EBF52E8B413747875CB4C558A346231CA54F5 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method);
// System.Span`1<!0> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, const RuntimeMethod* method)
{
	return ((  Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, const RuntimeMethod*))Memory_1_get_Span_m241051471D03660DA0FD0C3650ED9CBAB81ACC6D_gshared_inline)(__this, method);
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteMultiByteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteMultiByteChar_m78EED3E827E8B3EE187EF018D0C6FF0F232BD770 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Span`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::GetBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mCEC67A7AD7A51B84E13E4C6FA18FFC2AA17DAEAB_inline (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method);
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
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4B1505E62CFA19EE4C92F330E4204B597FC68600 (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlySpan_1_Slice_mEF42EB6B9FF108D4C4B0E06619D6B3C867C51513_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEF42EB6B9FF108D4C4B0E06619D6B3C867C51513_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m9F207A2967317FCB9C21FE47F07500B37E8D937A_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m9F207A2967317FCB9C21FE47F07500B37E8D937A_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mC74AF0182E1B08A75CED8A2CFA78BB9B517E8925 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0D0468F90348BC99D510D873B5480CED1A2940E6 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method);
// System.SequencePosition System.Buffers.ReadOnlySequence`1<System.Byte>::GetPosition(System.Int64)
inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ReadOnlySequence_1_GetPosition_mF352E76B67410A053E6EAF292190D895692D469E (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, int64_t ___offset0, const RuntimeMethod* method)
{
	return ((  SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, int64_t, const RuntimeMethod*))ReadOnlySequence_1_GetPosition_mF352E76B67410A053E6EAF292190D895692D469E_gshared)(__this, ___offset0, method);
}
// System.Void System.Nullable`1<System.SequencePosition>::.ctor(!0)
inline void Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 , const RuntimeMethod*))Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E_gshared)(__this, ___value0, method);
}
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::BoundsCheck(System.SequencePosition&)
inline void ReadOnlySequence_1_BoundsCheck_mFA6A7A23052C01E59FC4A36D5EDAF79288DFF7A5 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___position0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *, const RuntimeMethod*))ReadOnlySequence_1_BoundsCheck_mFA6A7A23052C01E59FC4A36D5EDAF79288DFF7A5_gshared)(__this, ___position0, method);
}
// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1<System.Byte>::SliceImpl(System.SequencePosition&,System.SequencePosition&)
inline ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_SliceImpl_mDA38BC9B76AB3382F264F0D8E1A4F3416F821AF2_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___start0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___end1, const RuntimeMethod* method)
{
	return ((  ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *, const RuntimeMethod*))ReadOnlySequence_1_SliceImpl_mDA38BC9B76AB3382F264F0D8E1A4F3416F821AF2_gshared_inline)(__this, ___start0, ___end1, method);
}
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_inline (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB8BEA5B5A5B51FD48532DB9EB962FB56FBDDF241 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m55B9EF1331398B945672DADE36A33C5DD3B717A3_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
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
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m036820F3189C0FA81D83CA10627B743A17412449 (const RuntimeMethod* method);
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_inline (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m4D1BE82F6155DA9E3BBB1A19B40E530893F8B95F_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method);
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::.ctor(System.Object,System.Int32,System.Object,System.Int32)
inline void ReadOnlySequence_1__ctor_m6C861496F987F9BC185787512733CB6108AC8644_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, RuntimeObject * ___startSegment0, int32_t ___startIndexAndFlags1, RuntimeObject * ___endSegment2, int32_t ___endIndexAndFlags3, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, RuntimeObject *, int32_t, RuntimeObject *, int32_t, const RuntimeMethod*))ReadOnlySequence_1__ctor_m6C861496F987F9BC185787512733CB6108AC8644_gshared_inline)(__this, ___startSegment0, ___startIndexAndFlags1, ___endSegment2, ___endIndexAndFlags3, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mFA1235BC2636AAEC86FC518402DFB5F0757C4616 (const RuntimeMethod* method);
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_mADBBB1B327A02C5A125FAF01BF0CAB1B662AC7F3 (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m30E00046E6D3B07BEDBE9482D2AF605C0E979BC7 (EmbeddedAttribute_tD026E670F587EC9A579AF43B6B8CC6D12F7068BE * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m4C6FEAEB911E118A6D397C652BDA54B9474DFF67 (IsReadOnlyAttribute_tFB9E0E44A1C96E94A99F2FE6430FC80A6E2D31D6 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol__ctor_mC4FF91511FF251232D71A8DCC2A028C855D83F86 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Options_Create_TisJsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_mEAE1FE47327830777C155C4A303CA54CFEE6617A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * L_0 = (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 *)il2cpp_codegen_object_new(JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_il2cpp_TypeInfo_var);
		JsonHubProtocolOptions__ctor_m8747B342D4FE87414D4BA3C771D6AD054E95EE87(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Options_tC5B42E35B5CB48E30D10174BDA1C35D190511FE3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Options_Create_TisJsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_mEAE1FE47327830777C155C4A303CA54CFEE6617A(L_0, /*hidden argument*/Options_Create_TisJsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55_mEAE1FE47327830777C155C4A303CA54CFEE6617A_RuntimeMethod_var);
		JsonHubProtocol__ctor_m0F2CFD596DDE945C7E2AB9741509A30B70DA8A64(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::.ctor(Microsoft.Extensions.Options.IOptions`1<Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol__ctor_m0F2CFD596DDE945C7E2AB9741509A30B70DA8A64 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, RuntimeObject* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptions_1_t86891F9C27F7E9771127269DF91241EF63D84856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___options0;
		NullCheck(L_0);
		JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * L_1;
		L_1 = InterfaceFuncInvoker0< JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * >::Invoke(0 /* !0 Microsoft.Extensions.Options.IOptions`1<Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions>::get_Value() */, IOptions_1_t86891F9C27F7E9771127269DF91241EF63D84856_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_2;
		L_2 = JsonHubProtocolOptions_get_PayloadSerializerOptions_m2346CDA5FB2167FD6E614529506F18A125A27874_inline(L_1, /*hidden argument*/NULL);
		__this->set__payloadSerializerOptions_22(L_2);
		return;
	}
}
// System.String Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonHubProtocol_get_Name_mB32DFE646E4B170E199EAF5A19DF196A2B545E3B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		String_t* L_0 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ProtocolName_20();
		return L_0;
	}
}
// System.Int32 Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonHubProtocol_get_Version_mC3A4B2F976D805ED21795DACE8F3E8C771010785 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ProtocolVersion_21();
		return L_0;
	}
}
// Microsoft.AspNetCore.Connections.TransferFormat Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::get_TransferFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonHubProtocol_get_TransferFormat_m2818FBEB7453546B28BF63F3F4BECAEBD5F4D6CF (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::IsVersionSupported(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonHubProtocol_IsVersionSupported_m6B36A1FC1CEB044618CC146541C933BE1F91132E (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, int32_t ___version0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___version0;
		int32_t L_1;
		L_1 = JsonHubProtocol_get_Version_mC3A4B2F976D805ED21795DACE8F3E8C771010785_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Boolean Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::TryParseMessage(System.Buffers.ReadOnlySequence`1<System.Byte>&,Microsoft.AspNetCore.SignalR.IInvocationBinder,Microsoft.AspNetCore.SignalR.Protocol.HubMessage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonHubProtocol_TryParseMessage_m330865013D40EAA369F3A615A61D0E1D749DA76A (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___input0, RuntimeObject* ___binder1, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB ** ___message2, const RuntimeMethod* method)
{
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___input0;
		bool L_1;
		L_1 = TextMessageParser_TryParseMessage_mCE6776285E5C2475A606D3FEFEA91087EFAAF5BD_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB ** L_2 = ___message2;
		*((RuntimeObject **)L_2) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}

IL_000f:
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB ** L_3 = ___message2;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_4 = V_0;
		RuntimeObject* L_5 = ___binder1;
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_6;
		L_6 = JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D(__this, L_4, L_5, /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_6);
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB ** L_7 = ___message2;
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_8 = *((HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB **)L_7);
		return (bool)((!(((RuntimeObject*)(HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteMessage(Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteMessage_m09028E53536FAB510A98E95ABA0EF2CE299D2926 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, RuntimeObject* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_0 = ___message0;
		RuntimeObject* L_1 = ___output1;
		JsonHubProtocol_WriteMessageCore_m7ABF67A4F3A53EAF80E235502C87FC8B7C5CF1B6(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___output1;
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		TextMessageFormatter_WriteRecordSeparator_mCCF17423FEF15F1B60D7A4B6549BD24AE08C04AC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.ReadOnlyMemory`1<System.Byte> Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::GetMessageBytes(Microsoft.AspNetCore.SignalR.Protocol.HubMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  JsonHubProtocol_GetMessageBytes_mD03637EA16C51841295BECBB2D3AAB7F065F0404 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_0 = ___message0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = HubProtocolExtensions_GetMessageBytes_m56B93B9874AA32CFFD6738E4FC957AD527E35445(__this, L_0, /*hidden argument*/NULL);
		ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_2;
		L_2 = ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D(L_1, /*hidden argument*/ReadOnlyMemory_1_op_Implicit_m9FAF7536CF46CAA5EC715F2DCF0F58BA3914C44D_RuntimeMethod_var);
		return L_2;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ParseMessage(System.Buffers.ReadOnlySequence`1<System.Byte>,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ___input0, RuntimeObject* ___binder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E988FD059BFAF7496F983AF2B41FBC372D1A1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral602A150409DA10AD220A2047FFC10A1CCD72F938);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	RuntimeObject * V_7 = NULL;
	bool V_8 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_9 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_10 = NULL;
	bool V_11 = false;
	Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  V_16;
	memset((&V_16), 0, sizeof(V_16));
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * V_17 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  V_21;
	memset((&V_21), 0, sizeof(V_21));
	HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * V_22 = NULL;
	JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  V_23;
	memset((&V_23), 0, sizeof(V_23));
	uint8_t V_24 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_25 = NULL;
	Type_t * V_26 = NULL;
	String_t* V_27 = NULL;
	Type_t * V_28 = NULL;
	Exception_t * V_29 = NULL;
	HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * V_30 = NULL;
	int32_t V_31 = 0;
	RuntimeObject* V_32 = NULL;
	int32_t V_33 = 0;
	RuntimeObject* V_34 = NULL;
	RuntimeObject* V_35 = NULL;
	Type_t * V_36 = NULL;
	JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 * V_37 = NULL;
	Type_t * V_38 = NULL;
	JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 * V_39 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 14> __leave_targets;
	HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * G_B60_0 = NULL;
	HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * G_B67_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			V_1 = (String_t*)NULL;
			V_2 = (String_t*)NULL;
			V_3 = (String_t*)NULL;
			V_4 = (bool)0;
			V_5 = NULL;
			V_6 = (bool)0;
			V_7 = NULL;
			V_8 = (bool)0;
			V_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
			V_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
			V_11 = (bool)0;
			il2cpp_codegen_initobj((&V_12), sizeof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 ));
			V_13 = (bool)0;
			il2cpp_codegen_initobj((&V_14), sizeof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 ));
			V_15 = (bool)0;
			il2cpp_codegen_initobj((&V_16), sizeof(Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 ));
			V_17 = (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)NULL;
			V_18 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
			V_19 = (bool)0;
			V_20 = (bool)0;
			ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_0 = ___input0;
			il2cpp_codegen_initobj((&V_23), sizeof(JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788 ));
			JsonReaderState_tAE4DE870C08B4EE8F2B001AA87B52F47EEA42788  L_1 = V_23;
			Utf8JsonReader__ctor_mAB84457C5A2EC30628E35855B519E7283A876A41((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_0, (bool)1, L_1, /*hidden argument*/NULL);
			bool L_2;
			L_2 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			SystemTextJsonExtensions_EnsureObjectStart_m95A3E8CC9F5CF7538A2F42B75246230F14D6F306((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
		}

IL_0072:
		{
			uint8_t L_3;
			L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			V_24 = L_3;
			uint8_t L_4 = V_24;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_039a;
			}
		}

IL_0083:
		{
			uint8_t L_5 = V_24;
			if ((!(((uint32_t)L_5) == ((uint32_t)5))))
			{
				goto IL_039d;
			}
		}

IL_008b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_6;
			L_6 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_TypePropertyNameBytes_9()), /*hidden argument*/NULL);
			bool L_7;
			L_7 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_00d2;
			}
		}

IL_009e:
		{
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_8;
			L_8 = SystemTextJsonExtensions_ReadAsInt32_mB6B18C86114D6558E4994DB590873D65AD913D85((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
			V_0 = L_8;
			bool L_9;
			L_9 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_039d;
			}
		}

IL_00b7:
		{
			uint8_t L_10 = 8;
			RuntimeObject * L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_10);
			String_t* L_12;
			L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_11, /*hidden argument*/NULL);
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_13 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_13, L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var)));
		}

IL_00d2:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_14;
			L_14 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_InvocationIdPropertyNameBytes_5()), /*hidden argument*/NULL);
			bool L_15;
			L_15 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00f7;
			}
		}

IL_00e5:
		{
			String_t* L_16;
			L_16 = SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), _stringLiteral0E988FD059BFAF7496F983AF2B41FBC372D1A1DA, /*hidden argument*/NULL);
			V_1 = L_16;
			goto IL_039d;
		}

IL_00f7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_17;
			L_17 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_StreamIdsPropertyNameBytes_7()), /*hidden argument*/NULL);
			bool L_18;
			L_18 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0176;
			}
		}

IL_010a:
		{
			bool L_19;
			L_19 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			uint8_t L_20;
			L_20 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			if ((((int32_t)L_20) == ((int32_t)3)))
			{
				goto IL_0137;
			}
		}

IL_011c:
		{
			String_t* L_21;
			L_21 = SystemTextJsonExtensions_GetTokenString_m87001E6A0C20052582CDFF8691731089944A8115(3, /*hidden argument*/NULL);
			String_t* L_22;
			L_22 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB895CF111576DE2F09AEAA9AC332736F30CF8CD3)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)), /*hidden argument*/NULL);
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_23 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_23, L_22, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var)));
		}

IL_0137:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_24 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_24, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_25 = L_24;
			bool L_25;
			L_25 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			goto IL_015e;
		}

IL_0148:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = V_25;
			String_t* L_27;
			L_27 = Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			NullCheck(L_26);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_26, L_27, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			bool L_28;
			L_28 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
		}

IL_015e:
		{
			uint8_t L_29;
			L_29 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_29) == ((uint32_t)4))))
			{
				goto IL_0148;
			}
		}

IL_0168:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_30 = V_25;
			NullCheck(L_30);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31;
			L_31 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_30, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			V_10 = L_31;
			goto IL_039d;
		}

IL_0176:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_32;
			L_32 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_TargetPropertyNameBytes_15()), /*hidden argument*/NULL);
			bool L_33;
			L_33 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_32, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_019b;
			}
		}

IL_0189:
		{
			String_t* L_34;
			L_34 = SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, /*hidden argument*/NULL);
			V_2 = L_34;
			goto IL_039d;
		}

IL_019b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_35;
			L_35 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_ErrorPropertyNameBytes_11()), /*hidden argument*/NULL);
			bool L_36;
			L_36 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_01c0;
			}
		}

IL_01ae:
		{
			String_t* L_37;
			L_37 = SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, /*hidden argument*/NULL);
			V_3 = L_37;
			goto IL_039d;
		}

IL_01c0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_38;
			L_38 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_AllowReconnectPropertyNameBytes_13()), /*hidden argument*/NULL);
			bool L_39;
			L_39 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_38, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_01e6;
			}
		}

IL_01d3:
		{
			bool L_40;
			L_40 = SystemTextJsonExtensions_ReadAsBoolean_mB61D6842E4216484534F9D50C45149E1DBABBFA1((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), _stringLiteral602A150409DA10AD220A2047FFC10A1CCD72F938, /*hidden argument*/NULL);
			V_20 = L_40;
			goto IL_039d;
		}

IL_01e6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_41;
			L_41 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_ResultPropertyNameBytes_1()), /*hidden argument*/NULL);
			bool L_42;
			L_42 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_0239;
			}
		}

IL_01f9:
		{
			V_6 = (bool)1;
			bool L_43;
			L_43 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			String_t* L_44 = V_1;
			bool L_45;
			L_45 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_021f;
			}
		}

IL_020c:
		{
			V_15 = (bool)1;
			Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  L_46 = V_21;
			V_16 = L_46;
			Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			goto IL_039d;
		}

IL_021f:
		{
			RuntimeObject* L_47 = ___binder1;
			String_t* L_48 = V_1;
			NullCheck(L_47);
			Type_t * L_49;
			L_49 = InterfaceFuncInvoker1< Type_t *, String_t* >::Invoke(0 /* System.Type Microsoft.AspNetCore.SignalR.IInvocationBinder::GetReturnType(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_47, L_48);
			V_26 = L_49;
			Type_t * L_50 = V_26;
			RuntimeObject * L_51;
			L_51 = JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_50, /*hidden argument*/NULL);
			V_7 = L_51;
			goto IL_039d;
		}

IL_0239:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_52;
			L_52 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_ItemPropertyNameBytes_3()), /*hidden argument*/NULL);
			bool L_53;
			L_53 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_52, /*hidden argument*/NULL);
			if (!L_53)
			{
				goto IL_02ad;
			}
		}

IL_024c:
		{
			bool L_54;
			L_54 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			V_4 = (bool)1;
			V_27 = (String_t*)NULL;
			String_t* L_55 = V_1;
			bool L_56;
			L_56 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_55, /*hidden argument*/NULL);
			if (L_56)
			{
				goto IL_0267;
			}
		}

IL_0262:
		{
			String_t* L_57 = V_1;
			V_27 = L_57;
			goto IL_027a;
		}

IL_0267:
		{
			V_13 = (bool)1;
			Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  L_58 = V_21;
			V_14 = L_58;
			Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			goto IL_039d;
		}

IL_027a:
		{
		}

IL_027b:
		try
		{ // begin try (depth: 2)
			RuntimeObject* L_59 = ___binder1;
			String_t* L_60 = V_27;
			NullCheck(L_59);
			Type_t * L_61;
			L_61 = InterfaceFuncInvoker1< Type_t *, String_t* >::Invoke(2 /* System.Type Microsoft.AspNetCore.SignalR.IInvocationBinder::GetStreamItemType(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_59, L_60);
			V_28 = L_61;
			Type_t * L_62 = V_28;
			RuntimeObject * L_63;
			L_63 = JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_62, /*hidden argument*/NULL);
			V_5 = L_63;
			goto IL_039d;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0296;
			}
			throw e;
		}

CATCH_0296:
		{ // begin catch(System.Exception)
			V_29 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			String_t* L_64 = V_27;
			Exception_t * L_65 = V_29;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_66;
			L_66 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_65, /*hidden argument*/NULL);
			StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D * L_67 = (StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D_il2cpp_TypeInfo_var)));
			StreamBindingFailureMessage__ctor_mAD3C9CA4B154375C214D7B539BBFAAB0B7C84D10(L_67, L_64, L_66, /*hidden argument*/NULL);
			V_30 = L_67;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0534;
		} // end catch (depth: 2)

IL_02ad:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_68;
			L_68 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_ArgumentsPropertyNameBytes_17()), /*hidden argument*/NULL);
			bool L_69;
			L_69 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_68, /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_0362;
			}
		}

IL_02c3:
		{
			bool L_70;
			L_70 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			int32_t L_71;
			L_71 = Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			V_31 = L_71;
			uint8_t L_72;
			L_72 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			if ((((int32_t)L_72) == ((int32_t)3)))
			{
				goto IL_02f9;
			}
		}

IL_02de:
		{
			String_t* L_73;
			L_73 = SystemTextJsonExtensions_GetTokenString_m87001E6A0C20052582CDFF8691731089944A8115(3, /*hidden argument*/NULL);
			String_t* L_74;
			L_74 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB8F76A26928547B210362C7935DB9241906665F9)), L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)), /*hidden argument*/NULL);
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_75 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_75, L_74, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var)));
		}

IL_02f9:
		{
			V_8 = (bool)1;
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_76, /*hidden argument*/NULL);
			if (!L_77)
			{
				goto IL_0317;
			}
		}

IL_0304:
		{
			V_11 = (bool)1;
			Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6  L_78 = V_21;
			V_12 = L_78;
			Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			goto IL_039d;
		}

IL_0317:
		{
		}

IL_0318:
		try
		{ // begin try (depth: 2)
			RuntimeObject* L_79 = ___binder1;
			String_t* L_80 = V_2;
			NullCheck(L_79);
			RuntimeObject* L_81;
			L_81 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* System.Collections.Generic.IReadOnlyList`1<System.Type> Microsoft.AspNetCore.SignalR.IInvocationBinder::GetParameterTypes(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_79, L_80);
			V_32 = L_81;
			RuntimeObject* L_82 = V_32;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83;
			L_83 = JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_82, /*hidden argument*/NULL);
			V_9 = L_83;
			goto IL_039d;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_032f;
			}
			throw e;
		}

CATCH_032f:
		{ // begin catch(System.Exception)
			{
				ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_84;
				L_84 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
				V_17 = L_84;
				goto IL_0340;
			}

IL_0338:
			{
				bool L_85;
				L_85 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			}

IL_0340:
			{
				int32_t L_86;
				L_86 = Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
				int32_t L_87 = V_31;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0355;
				}
			}

IL_034b:
			{
				uint8_t L_88;
				L_88 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
				if ((((int32_t)L_88) == ((int32_t)3)))
				{
					goto IL_0338;
				}
			}

IL_0355:
			{
				int32_t L_89;
				L_89 = Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
				int32_t L_90 = V_31;
				if ((((int32_t)L_89) > ((int32_t)L_90)))
				{
					goto IL_0338;
				}
			}

IL_0360:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_039d;
			}
		} // end catch (depth: 2)

IL_0362:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_91;
			L_91 = JsonEncodedText_get_EncodedUtf8Bytes_m1E78EAC5DFB5E19BDE761016B57E058B69DF17D5((JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867 *)(((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_address_of_HeadersPropertyNameBytes_19()), /*hidden argument*/NULL);
			bool L_92;
			L_92 = Utf8JsonReader_ValueTextEquals_m0248110A05EEEEF861FF76E059649A134662F227((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), L_91, /*hidden argument*/NULL);
			if (!L_92)
			{
				goto IL_0389;
			}
		}

IL_0375:
		{
			bool L_93;
			L_93 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_94;
			L_94 = JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			V_18 = L_94;
			goto IL_039d;
		}

IL_0389:
		{
			bool L_95;
			L_95 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			goto IL_039d;
		}

IL_039a:
		{
			V_19 = (bool)1;
		}

IL_039d:
		{
			bool L_96 = V_19;
			if (L_96)
			{
				goto IL_03ad;
			}
		}

IL_03a1:
		{
			bool L_97;
			L_97 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_21), /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0072;
			}
		}

IL_03ad:
		{
			bool L_98;
			L_98 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (!L_98)
			{
				goto IL_0507;
			}
		}

IL_03b9:
		{
			int32_t L_99;
			L_99 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			V_33 = L_99;
			int32_t L_100 = V_33;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)1)))
			{
				case 0:
				{
					goto IL_03ec;
				}
				case 1:
				{
					goto IL_047e;
				}
				case 2:
				{
					goto IL_04bc;
				}
				case 3:
				{
					goto IL_0435;
				}
				case 4:
				{
					goto IL_04e6;
				}
				case 5:
				{
					goto IL_04f1;
				}
				case 6:
				{
					goto IL_04fa;
				}
			}
		}

IL_03e7:
		{
			goto IL_0512;
		}

IL_03ec:
		{
			bool L_101 = V_11;
			if (!L_101)
			{
				goto IL_0410;
			}
		}

IL_03f0:
		try
		{ // begin try (depth: 2)
			RuntimeObject* L_102 = ___binder1;
			String_t* L_103 = V_2;
			NullCheck(L_102);
			RuntimeObject* L_104;
			L_104 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* System.Collections.Generic.IReadOnlyList`1<System.Type> Microsoft.AspNetCore.SignalR.IInvocationBinder::GetParameterTypes(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_102, L_103);
			V_34 = L_104;
			RuntimeObject* L_105 = V_34;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_106;
			L_106 = JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_12), L_105, /*hidden argument*/NULL);
			V_9 = L_106;
			goto IL_0410;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0407;
			}
			throw e;
		}

CATCH_0407:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_107;
			L_107 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			V_17 = L_107;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0410;
		} // end catch (depth: 2)

IL_0410:
		{
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_108 = V_17;
			if (L_108)
			{
				goto IL_0425;
			}
		}

IL_0414:
		{
			String_t* L_109 = V_1;
			String_t* L_110 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_111 = V_9;
			bool L_112 = V_8;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = V_10;
			RuntimeObject* L_114 = ___binder1;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_115;
			L_115 = JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D(__this, L_109, L_110, L_111, L_112, L_113, L_114, /*hidden argument*/NULL);
			G_B60_0 = L_115;
			goto IL_042e;
		}

IL_0425:
		{
			String_t* L_116 = V_1;
			String_t* L_117 = V_2;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_118 = V_17;
			InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B * L_119 = (InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B *)il2cpp_codegen_object_new(InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B_il2cpp_TypeInfo_var);
			InvocationBindingFailureMessage__ctor_m880C82007083595CF0A5ADFB5AF86529B3ADC3F4(L_119, L_116, L_117, L_118, /*hidden argument*/NULL);
			G_B60_0 = ((HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB *)(L_119));
		}

IL_042e:
		{
			V_22 = G_B60_0;
			goto IL_0517;
		}

IL_0435:
		{
			bool L_120 = V_11;
			if (!L_120)
			{
				goto IL_0459;
			}
		}

IL_0439:
		try
		{ // begin try (depth: 2)
			RuntimeObject* L_121 = ___binder1;
			String_t* L_122 = V_2;
			NullCheck(L_121);
			RuntimeObject* L_123;
			L_123 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* System.Collections.Generic.IReadOnlyList`1<System.Type> Microsoft.AspNetCore.SignalR.IInvocationBinder::GetParameterTypes(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_121, L_122);
			V_35 = L_123;
			RuntimeObject* L_124 = V_35;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_125;
			L_125 = JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_12), L_124, /*hidden argument*/NULL);
			V_9 = L_125;
			goto IL_0459;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0450;
			}
			throw e;
		}

CATCH_0450:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_126;
			L_126 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			V_17 = L_126;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0459;
		} // end catch (depth: 2)

IL_0459:
		{
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_127 = V_17;
			if (L_127)
			{
				goto IL_046e;
			}
		}

IL_045d:
		{
			String_t* L_128 = V_1;
			String_t* L_129 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_130 = V_9;
			bool L_131 = V_8;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = V_10;
			RuntimeObject* L_133 = ___binder1;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_134;
			L_134 = JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B(__this, L_128, L_129, L_130, L_131, L_132, L_133, /*hidden argument*/NULL);
			G_B67_0 = L_134;
			goto IL_0477;
		}

IL_046e:
		{
			String_t* L_135 = V_1;
			String_t* L_136 = V_2;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_137 = V_17;
			InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B * L_138 = (InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B *)il2cpp_codegen_object_new(InvocationBindingFailureMessage_tCD1BC09B0A4D68C47FA6861FBC9A56B8C4BFEA6B_il2cpp_TypeInfo_var);
			InvocationBindingFailureMessage__ctor_m880C82007083595CF0A5ADFB5AF86529B3ADC3F4(L_138, L_135, L_136, L_137, /*hidden argument*/NULL);
			G_B67_0 = ((HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB *)(L_138));
		}

IL_0477:
		{
			V_22 = G_B67_0;
			goto IL_0517;
		}

IL_047e:
		{
			bool L_139 = V_13;
			if (!L_139)
			{
				goto IL_04ac;
			}
		}

IL_0482:
		try
		{ // begin try (depth: 2)
			RuntimeObject* L_140 = ___binder1;
			String_t* L_141 = V_1;
			NullCheck(L_140);
			Type_t * L_142;
			L_142 = InterfaceFuncInvoker1< Type_t *, String_t* >::Invoke(2 /* System.Type Microsoft.AspNetCore.SignalR.IInvocationBinder::GetStreamItemType(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_140, L_141);
			V_36 = L_142;
			Type_t * L_143 = V_36;
			RuntimeObject * L_144;
			L_144 = JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_14), L_143, /*hidden argument*/NULL);
			V_5 = L_144;
			goto IL_04ac;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0499;
			}
			throw e;
		}

CATCH_0499:
		{ // begin catch(System.Text.Json.JsonException)
			V_37 = ((JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 *)IL2CPP_GET_ACTIVE_EXCEPTION(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 *));
			String_t* L_145 = V_1;
			JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 * L_146 = V_37;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_147;
			L_147 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_146, /*hidden argument*/NULL);
			StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D * L_148 = (StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBindingFailureMessage_t96D02700CDCFA9CCC7A550AFF6165A0F2C4FA01D_il2cpp_TypeInfo_var)));
			StreamBindingFailureMessage__ctor_mAD3C9CA4B154375C214D7B539BBFAAB0B7C84D10(L_148, L_145, L_147, /*hidden argument*/NULL);
			V_22 = L_148;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0517;
		} // end catch (depth: 2)

IL_04ac:
		{
			String_t* L_149 = V_1;
			RuntimeObject * L_150 = V_5;
			bool L_151 = V_4;
			RuntimeObject* L_152 = ___binder1;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_153;
			L_153 = JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B(__this, L_149, L_150, L_151, L_152, /*hidden argument*/NULL);
			V_22 = L_153;
			goto IL_0517;
		}

IL_04bc:
		{
			bool L_154 = V_15;
			if (!L_154)
			{
				goto IL_04d5;
			}
		}

IL_04c0:
		{
			RuntimeObject* L_155 = ___binder1;
			String_t* L_156 = V_1;
			NullCheck(L_155);
			Type_t * L_157;
			L_157 = InterfaceFuncInvoker1< Type_t *, String_t* >::Invoke(0 /* System.Type Microsoft.AspNetCore.SignalR.IInvocationBinder::GetReturnType(System.String) */, IInvocationBinder_t236756999187668E5727CDDD51CBBD9654DE9803_il2cpp_TypeInfo_var, L_155, L_156);
			V_38 = L_157;
			Type_t * L_158 = V_38;
			RuntimeObject * L_159;
			L_159 = JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)(&V_16), L_158, /*hidden argument*/NULL);
			V_7 = L_159;
		}

IL_04d5:
		{
			String_t* L_160 = V_1;
			String_t* L_161 = V_3;
			RuntimeObject * L_162 = V_7;
			bool L_163 = V_6;
			RuntimeObject* L_164 = ___binder1;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_165;
			L_165 = JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F(__this, L_160, L_161, L_162, L_163, L_164, /*hidden argument*/NULL);
			V_22 = L_165;
			goto IL_0517;
		}

IL_04e6:
		{
			String_t* L_166 = V_1;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_167;
			L_167 = JsonHubProtocol_BindCancelInvocationMessage_m60DC05C7280A39A01844A0F41FCB3F9965241725(__this, L_166, /*hidden argument*/NULL);
			V_22 = L_167;
			goto IL_0517;
		}

IL_04f1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
			PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 * L_168 = ((PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_StaticFields*)il2cpp_codegen_static_fields_for(PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var))->get_Instance_0();
			V_30 = L_168;
			goto IL_0534;
		}

IL_04fa:
		{
			String_t* L_169 = V_3;
			bool L_170 = V_20;
			CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_171;
			L_171 = JsonHubProtocol_BindCloseMessage_m3B70AED3E6C4DB42DD27AD491FE58BDA48F08E5B(__this, L_169, L_170, /*hidden argument*/NULL);
			V_30 = L_171;
			goto IL_0534;
		}

IL_0507:
		{
			InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_172 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
			InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_172, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral04D8D8B1A7424790D1B3CDF609D54086C63B0EF8)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_172, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var)));
		}

IL_0512:
		{
			V_30 = (HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB *)NULL;
			goto IL_0534;
		}

IL_0517:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_173 = V_22;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_174 = V_18;
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_175;
			L_175 = JsonHubProtocol_ApplyHeaders_mBDAFD99C42071555DA4C3770AC7D084F8635879E(__this, L_173, L_174, /*hidden argument*/NULL);
			V_30 = L_175;
			goto IL_0534;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0525;
		}
		throw e;
	}

CATCH_0525:
	{ // begin catch(System.Text.Json.JsonException)
		V_39 = ((JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 *)IL2CPP_GET_ACTIVE_EXCEPTION(JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 *));
		JsonException_t5F1B2FCDBBEE23F7CEAA26F4452CC0ECC74613C8 * L_176 = V_39;
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_177 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mA234CAC0202189C1550D9F47EAD93DAF548D2DC4(L_177, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94141E1FC491E736FD7C62AAF6375244F4F37615)), L_176, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_177, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ParseMessage_mA4541B88267AB12B618347CED2E860B78E2CE66D_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0534:
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_178 = V_30;
		return L_178;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ReadHeaders(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	String_t* V_1 = NULL;
	uint8_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var);
		V_0 = L_1;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		uint8_t L_3;
		L_3 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint8_t L_4 = 1;
		RuntimeObject * L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD15FFE30E6FA15AF21E4E03CED96EC50515A3D66)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral368FD5FDD9D32A20DF4066D2D3E2DFB1AFED1638)), L_5, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_7 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1_RuntimeMethod_var)));
	}

IL_002f:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_8 = ___reader0;
		uint8_t L_9;
		L_9 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		uint8_t L_10 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0091;
			}
			case 1:
			{
				goto IL_0093;
			}
			case 2:
			{
				goto IL_0093;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_0093;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0054:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_11 = ___reader0;
		String_t* L_12;
		L_12 = Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_13 = ___reader0;
		bool L_14;
		L_14 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_13, /*hidden argument*/NULL);
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_15 = ___reader0;
		uint8_t L_16;
		L_16 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)7)))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_17 = V_1;
		uint8_t L_18 = 7;
		RuntimeObject * L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTokenType_t9210B7B6CDD0F0450BAC21C70FB4757BA3789C3F_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB8DD7FE08DC43CA9A31D74FC078106B978561D85)), L_17, L_19, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_21 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1_RuntimeMethod_var)));
	}

IL_0082:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_0;
		String_t* L_23 = V_1;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_24 = ___reader0;
		String_t* L_25;
		L_25 = Utf8JsonReader_GetString_m6D6C8ABB02E6FCA17050DD6EEF2AFF4E47995384((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_22, L_23, L_25, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		goto IL_0093;
	}

IL_0091:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_26 = V_0;
		return L_26;
	}

IL_0093:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_27 = ___reader0;
		bool L_28;
		L_28 = Utf8JsonReader_Read_m38D6F3111E4CBC54A70EBA64C8F0FA5058DCA558((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_002f;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_29 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D47119D40E1D81001C848D8562C8CED3A74F7A5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_ReadHeaders_mF0149CE962D899497928DE224F05824357BB6AF1_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteMessageCore(Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteMessageCore_m7ABF67A4F3A53EAF80E235502C87FC8B7C5CF1B6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, RuntimeObject* ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * V_0 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * V_1 = NULL;
	InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * V_2 = NULL;
	StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * V_3 = NULL;
	StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * V_4 = NULL;
	CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * V_5 = NULL;
	CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * V_6 = NULL;
	CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___stream1;
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_1;
		L_1 = ReusableUtf8JsonWriter_Get_m29B303CA76FD12C30D54B6B048B4F76E7C1A59C3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_2 = V_0;
			NullCheck(L_2);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_3;
			L_3 = ReusableUtf8JsonWriter_GetJsonWriter_m679E4D6F4C53F82CDFEAF34FA857E4B114EFFFEC_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_4 = V_1;
			NullCheck(L_4);
			Utf8JsonWriter_WriteStartObject_mDBB166D7C6BB2AB073674FBCF130CFB2F7B9BE0D(L_4, /*hidden argument*/NULL);
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_5 = ___message0;
			V_2 = ((InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 *)IsInstClass((RuntimeObject*)L_5, InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291_il2cpp_TypeInfo_var));
			InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_6 = V_2;
			if (L_6)
			{
				goto IL_0071;
			}
		}

IL_001e:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_7 = ___message0;
			V_3 = ((StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 *)IsInstClass((RuntimeObject*)L_7, StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8_il2cpp_TypeInfo_var));
			StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_8 = V_3;
			if (L_8)
			{
				goto IL_008d;
			}
		}

IL_0028:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_9 = ___message0;
			V_4 = ((StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 *)IsInstClass((RuntimeObject*)L_9, StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0_il2cpp_TypeInfo_var));
			StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_10 = V_4;
			if (L_10)
			{
				goto IL_00a9;
			}
		}

IL_0034:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_11 = ___message0;
			V_5 = ((CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 *)IsInstClass((RuntimeObject*)L_11, CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var));
			CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_12 = V_5;
			if (L_12)
			{
				goto IL_00c4;
			}
		}

IL_0043:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_13 = ___message0;
			V_6 = ((CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA *)IsInstClass((RuntimeObject*)L_13, CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA_il2cpp_TypeInfo_var));
			CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * L_14 = V_6;
			if (L_14)
			{
				goto IL_00df;
			}
		}

IL_0052:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_15 = ___message0;
			if (((PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3 *)IsInstClass((RuntimeObject*)L_15, PingMessage_tDB74E78FC9A2EE8EEBAFAE85DBD1221A99BC73B3_il2cpp_TypeInfo_var)))
			{
				goto IL_00fa;
			}
		}

IL_005d:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_16 = ___message0;
			V_7 = ((CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 *)IsInstClass((RuntimeObject*)L_16, CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var));
			CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_17 = V_7;
			if (L_17)
			{
				goto IL_0103;
			}
		}

IL_006c:
		{
			goto IL_0115;
		}

IL_0071:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_18, 1, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_19 = V_1;
			InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_20 = V_2;
			JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD(__this, L_19, L_20, /*hidden argument*/NULL);
			InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_21 = V_2;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_22 = V_1;
			JsonHubProtocol_WriteInvocationMessage_m60ECFA5FEF3C548DB75C006C39CFCF224CD0BD96(__this, L_21, L_22, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_008d:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_23 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_23, 4, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_24 = V_1;
			StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_25 = V_3;
			JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD(__this, L_24, L_25, /*hidden argument*/NULL);
			StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_26 = V_3;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_27 = V_1;
			JsonHubProtocol_WriteStreamInvocationMessage_m010DCF39C5EF418D6DB291F927B9C4E210970D09(__this, L_26, L_27, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_00a9:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_28 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_28, 2, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_29 = V_1;
			StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_30 = V_4;
			JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD(__this, L_29, L_30, /*hidden argument*/NULL);
			StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_31 = V_4;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_32 = V_1;
			JsonHubProtocol_WriteStreamItemMessage_m67CD1FA232276DB3C52B46A6F9152715EDA59AF6(__this, L_31, L_32, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_00c4:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_33 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_33, 3, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_34 = V_1;
			CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_35 = V_5;
			JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD(__this, L_34, L_35, /*hidden argument*/NULL);
			CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_36 = V_5;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_37 = V_1;
			JsonHubProtocol_WriteCompletionMessage_mBE7A35228FD70DEB5BDA7F869C876E796A49F2C0(__this, L_36, L_37, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_00df:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_38 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_38, 5, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_39 = V_1;
			CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * L_40 = V_6;
			JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD(__this, L_39, L_40, /*hidden argument*/NULL);
			CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * L_41 = V_6;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_42 = V_1;
			JsonHubProtocol_WriteCancelInvocationMessage_m3859BB0C0569979D857DAA162F57DFEFABF0FCE1(__this, L_41, L_42, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_00fa:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_43 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_43, 6, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_0103:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_44 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
			JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14(L_44, 7, /*hidden argument*/NULL);
			CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_45 = V_7;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_46 = V_1;
			JsonHubProtocol_WriteCloseMessage_m273B5C8A878649F2695B05FC0400EDACC6F4A722(__this, L_45, L_46, /*hidden argument*/NULL);
			goto IL_0130;
		}

IL_0115:
		{
			HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_47 = ___message0;
			NullCheck(L_47);
			Type_t * L_48;
			L_48 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			String_t* L_49;
			L_49 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_48);
			String_t* L_50;
			L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6E06709487965DAE05B1526BFA7C070617FF576)), L_49, /*hidden argument*/NULL);
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_51 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_51, L_50, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_WriteMessageCore_m7ABF67A4F3A53EAF80E235502C87FC8B7C5CF1B6_RuntimeMethod_var)));
		}

IL_0130:
		{
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_52 = V_1;
			NullCheck(L_52);
			Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53(L_52, /*hidden argument*/NULL);
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_53 = V_1;
			NullCheck(L_53);
			Utf8JsonWriter_Flush_mFBF59A4DFBFA802B724D25BB5CE84E81957CD6CD(L_53, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x145, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_54 = V_0;
		ReusableUtf8JsonWriter_Return_m68C407D9D1BDE8E0502F1A6793AB62E7328E96C3(L_54, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x145, IL_0145)
	}

IL_0145:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteHeaders(System.Text.Json.Utf8JsonWriter,Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteHeaders_mE487747EF4C9D00C99ACF3FACF52072A47F140FD (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer0, HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2FDD75B2F3EBB2E68D0FFD87B7425DD1F9D5861D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_0 = ___message1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HubInvocationMessage_get_Headers_m6389562F95BA5D2F4BC022A9EEF8295E1A79CDF1_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_2 = ___message1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HubInvocationMessage_get_Headers_m6389562F95BA5D2F4BC022A9EEF8295E1A79CDF1_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t2FDD75B2F3EBB2E68D0FFD87B7425DD1F9D5861D_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_6 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_HeadersPropertyNameBytes_19();
		NullCheck(L_5);
		Utf8JsonWriter_WriteStartObject_m1D7B957582FD6C8E33B777C38CC747C061B72AD6(L_5, L_6, /*hidden argument*/NULL);
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_7 = ___message1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = HubInvocationMessage_get_Headers_m6389562F95BA5D2F4BC022A9EEF8295E1A79CDF1_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_002f:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_11;
			L_11 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_10);
			V_1 = L_11;
			Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_12 = ___writer0;
			String_t* L_13;
			L_13 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_14;
			L_14 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_12);
			Utf8JsonWriter_WriteString_mAF95F29F34160582E07E47387CA5A16274D63622(L_12, L_13, L_14, /*hidden argument*/NULL);
		}

IL_004a:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_002f;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			RuntimeObject* L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_19 = ___writer0;
		NullCheck(L_19);
		Utf8JsonWriter_WriteEndObject_m6D09D1F7CC74F50A5EC1E4E9B550804A01A70F53(L_19, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCompletionMessage(Microsoft.AspNetCore.SignalR.Protocol.CompletionMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCompletionMessage_mBE7A35228FD70DEB5BDA7F869C876E796A49F2C0 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B7_0 = NULL;
	RuntimeObject * G_B7_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B7_2 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	RuntimeObject * G_B6_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B6_2 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject * G_B8_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B8_2 = NULL;
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_0 = ___message0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C(L_0, L_1, /*hidden argument*/NULL);
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_6 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ErrorPropertyNameBytes_11();
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_7 = ___message0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_5, L_6, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_9 = ___message0;
		NullCheck(L_9);
		bool L_10;
		L_10 = CompletionMessage_get_HasResult_mC1CA5286CBF9FE19168DC31D867FEB3CAE13AB51_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_11 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_12 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ResultPropertyNameBytes_1();
		NullCheck(L_11);
		Utf8JsonWriter_WritePropertyName_m6E7E134242EEC5BED1938E8149AD455317E379AB(L_11, L_12, /*hidden argument*/NULL);
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_13 = ___message0;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0048;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_15 = ___writer1;
		NullCheck(L_15);
		Utf8JsonWriter_WriteNullValue_m5C0E05457A39C3954BE256531BF58931E9872447(L_15, /*hidden argument*/NULL);
		return;
	}

IL_0048:
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_16 = ___writer1;
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_17 = ___message0;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline(L_17, /*hidden argument*/NULL);
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_19 = ___message0;
		NullCheck(L_19);
		RuntimeObject * L_20;
		L_20 = CompletionMessage_get_Result_mDE8737F8AEE3B0489803CD2CB2B6C55B6815D79E_inline(L_19, /*hidden argument*/NULL);
		RuntimeObject * L_21 = L_20;
		G_B6_0 = L_21;
		G_B6_1 = L_18;
		G_B6_2 = L_16;
		if (L_21)
		{
			G_B7_0 = L_21;
			G_B7_1 = L_18;
			G_B7_2 = L_16;
			goto IL_005c;
		}
	}
	{
		G_B8_0 = ((Type_t *)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck(G_B7_0);
		Type_t * L_22;
		L_22 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_22;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0061:
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_23 = __this->get__payloadSerializerOptions_22();
		IL2CPP_RUNTIME_CLASS_INIT(JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		JsonSerializer_Serialize_m389A0F74EB7BCD9488D921DBD9B40ADA880D34EB(G_B8_2, G_B8_1, G_B8_0, L_23, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCancelInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.CancelInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCancelInvocationMessage_m3859BB0C0569979D857DAA162F57DFEFABF0FCE1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * L_0 = ___message0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamItemMessage(Microsoft.AspNetCore.SignalR.Protocol.StreamItemMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamItemMessage_m67CD1FA232276DB3C52B46A6F9152715EDA59AF6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B4_0 = NULL;
	RuntimeObject * G_B4_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B4_2 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	RuntimeObject * G_B3_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B3_2 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject * G_B5_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B5_2 = NULL;
	{
		StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_0 = ___message0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C(L_0, L_1, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = ___writer1;
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ItemPropertyNameBytes_3();
		NullCheck(L_2);
		Utf8JsonWriter_WritePropertyName_m6E7E134242EEC5BED1938E8149AD455317E379AB(L_2, L_3, /*hidden argument*/NULL);
		StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_4 = ___message0;
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = StreamItemMessage_get_Item_m94906A64B48E5881B82DDA196C1C6DE60713C461_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_6 = ___writer1;
		NullCheck(L_6);
		Utf8JsonWriter_WriteNullValue_m5C0E05457A39C3954BE256531BF58931E9872447(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_7 = ___writer1;
		StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_8 = ___message0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = StreamItemMessage_get_Item_m94906A64B48E5881B82DDA196C1C6DE60713C461_inline(L_8, /*hidden argument*/NULL);
		StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_10 = ___message0;
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = StreamItemMessage_get_Item_m94906A64B48E5881B82DDA196C1C6DE60713C461_inline(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		G_B3_2 = L_7;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			G_B4_2 = L_7;
			goto IL_0035;
		}
	}
	{
		G_B5_0 = ((Type_t *)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B4_0);
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = L_13;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_003a:
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_14 = __this->get__payloadSerializerOptions_22();
		IL2CPP_RUNTIME_CLASS_INIT(JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		JsonSerializer_Serialize_m389A0F74EB7BCD9488D921DBD9B40ADA880D34EB(G_B5_2, G_B5_1, G_B5_0, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.InvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteInvocationMessage_m60ECFA5FEF3C548DB75C006C39CFCF224CD0BD96 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_0 = ___message0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C(L_0, L_1, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = ___writer1;
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_TargetPropertyNameBytes_15();
		InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_4 = ___message0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = HubMethodInvocationMessage_get_Target_m05CD6D81C6471D40223F9B308812BF01354EFC7C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_2, L_3, L_5, /*hidden argument*/NULL);
		InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_6 = ___message0;
		NullCheck(L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = HubMethodInvocationMessage_get_Arguments_mEAA9989839A4E6D24EFC8D33C3C9EA1537991356_inline(L_6, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = ___writer1;
		JsonHubProtocol_WriteArguments_m5232C891BBCFD8A1E578F3E5F1C94C40B6550EA1(__this, L_7, L_8, /*hidden argument*/NULL);
		InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_9 = ___message0;
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10;
		L_10 = HubMethodInvocationMessage_get_StreamIds_mF41F7209AD9C5938ACBF7C48DAAC0C06962DC498_inline(L_9, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_11 = ___writer1;
		JsonHubProtocol_WriteStreamIds_mE7497E3D2936706EFEDBFEA0025B1D515164EFD5(__this, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamInvocationMessage(Microsoft.AspNetCore.SignalR.Protocol.StreamInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamInvocationMessage_m010DCF39C5EF418D6DB291F927B9C4E210970D09 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_0 = ___message0;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C(L_0, L_1, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = ___writer1;
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_TargetPropertyNameBytes_15();
		StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_4 = ___message0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = HubMethodInvocationMessage_get_Target_m05CD6D81C6471D40223F9B308812BF01354EFC7C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_2, L_3, L_5, /*hidden argument*/NULL);
		StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_6 = ___message0;
		NullCheck(L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = HubMethodInvocationMessage_get_Arguments_mEAA9989839A4E6D24EFC8D33C3C9EA1537991356_inline(L_6, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = ___writer1;
		JsonHubProtocol_WriteArguments_m5232C891BBCFD8A1E578F3E5F1C94C40B6550EA1(__this, L_7, L_8, /*hidden argument*/NULL);
		StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_9 = ___message0;
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10;
		L_10 = HubMethodInvocationMessage_get_StreamIds_mF41F7209AD9C5938ACBF7C48DAAC0C06962DC498_inline(L_9, /*hidden argument*/NULL);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_11 = ___writer1;
		JsonHubProtocol_WriteStreamIds_mE7497E3D2936706EFEDBFEA0025B1D515164EFD5(__this, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteCloseMessage(Microsoft.AspNetCore.SignalR.Protocol.CloseMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteCloseMessage_m273B5C8A878649F2695B05FC0400EDACC6F4A722 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = CloseMessage_get_Error_mFB4E2A8399C7E2BA66FEF1626F3B18D576DC09D5_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ErrorPropertyNameBytes_11();
		CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_4 = ___message0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = CloseMessage_get_Error_mFB4E2A8399C7E2BA66FEF1626F3B18D576DC09D5_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_2, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_6 = ___message0;
		NullCheck(L_6);
		bool L_7;
		L_7 = CloseMessage_get_AllowReconnect_m32147106579DF805FA7F1F4031DC9B1E6D90F2FC_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_9 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_AllowReconnectPropertyNameBytes_13();
		NullCheck(L_8);
		Utf8JsonWriter_WriteBoolean_mFB48FB25300D9E28B7396177CCDC99506C509C13(L_8, L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteArguments(System.Object[],System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteArguments_m5232C891BBCFD8A1E578F3E5F1C94C40B6550EA1 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B5_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B4_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject * G_B6_1 = NULL;
	Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * G_B6_2 = NULL;
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_0 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_1 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ArgumentsPropertyNameBytes_17();
		NullCheck(L_0);
		Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B(L_0, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___arguments0;
		V_0 = L_2;
		V_1 = 0;
		goto IL_003d;
	}

IL_0011:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		RuntimeObject * L_7 = V_2;
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = ___writer1;
		NullCheck(L_8);
		Utf8JsonWriter_WriteNullValue_m5C0E05457A39C3954BE256531BF58931E9872447(L_8, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0020:
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_9 = ___writer1;
		RuntimeObject * L_10 = V_2;
		RuntimeObject * L_11 = V_2;
		G_B4_0 = L_10;
		G_B4_1 = L_9;
		if (L_11)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_9;
			goto IL_0028;
		}
	}
	{
		G_B6_0 = ((Type_t *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_002e;
	}

IL_0028:
	{
		RuntimeObject * L_12 = V_2;
		NullCheck(L_12);
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_002e:
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_14 = __this->get__payloadSerializerOptions_22();
		IL2CPP_RUNTIME_CLASS_INIT(JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		JsonSerializer_Serialize_m389A0F74EB7BCD9488D921DBD9B40ADA880D34EB(G_B6_2, G_B6_1, G_B6_0, L_14, /*hidden argument*/NULL);
	}

IL_0039:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_18 = ___writer1;
		NullCheck(L_18);
		Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414(L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteStreamIds(System.String[],System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteStreamIds_mE7497E3D2936706EFEDBFEA0025B1D515164EFD5 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___streamIds0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_2 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_StreamIdsPropertyNameBytes_7();
		NullCheck(L_1);
		Utf8JsonWriter_WriteStartArray_mC0DB872376E88E3BEC0C0D5D5C865FB88ABA9A6B(L_1, L_2, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___streamIds0;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0024;
	}

IL_0015:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_8 = ___writer1;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		Utf8JsonWriter_WriteStringValue_m06E95AE000F88F655D1E129B922ED8C1B2672FA1(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_11 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_13 = ___writer1;
		NullCheck(L_13);
		Utf8JsonWriter_WriteEndArray_m000968EFB2911599DA8AAC68B81F8CFA70090414(L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteInvocationId(Microsoft.AspNetCore.SignalR.Protocol.HubInvocationMessage,System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteInvocationId_m7B0524F3FAE43E7BFC43D81CB5D59D3E22A1E62C (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * ___message0, Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = HubInvocationMessage_get_InvocationId_m8B8220F599427486835AE29DF844AA6118DF5EDB_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_3 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_4 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_InvocationIdPropertyNameBytes_5();
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_5 = ___message0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = HubInvocationMessage_get_InvocationId_m8B8220F599427486835AE29DF844AA6118DF5EDB_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Utf8JsonWriter_WriteString_m560A07A85358A0EE7FBF65EE06A8E655E6141074(L_3, L_4, L_6, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::WriteMessageType(System.Text.Json.Utf8JsonWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol_WriteMessageType_m67E8B63C306B4F7B26A87977C6B1947F764A9E14 (Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ___writer0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_0 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_1 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_TypePropertyNameBytes_9();
		int32_t L_2 = ___type1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumber_mE13A78D1BA06700966C33EB7D73AA06B814B4F3B(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCancelInvocationMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindCancelInvocationMessage_m60DC05C7280A39A01844A0F41FCB3F9965241725 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___invocationId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795031906F453C5391378462575BB2D25F0C6CE9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindCancelInvocationMessage_m60DC05C7280A39A01844A0F41FCB3F9965241725_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_3 = ___invocationId0;
		CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA * L_4 = (CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA *)il2cpp_codegen_object_new(CancelInvocationMessage_t76CAB26FF1BD0751871D59D6DEBCBC891500ADEA_il2cpp_TypeInfo_var);
		CancelInvocationMessage__ctor_m1EB64AE4C5829A201734CF6399D55C52ADA1BA5D(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCompletionMessage(System.String,System.String,System.Object,System.Boolean,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___error1, RuntimeObject * ___result2, bool ___hasResult3, RuntimeObject* ___binder4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___invocationId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795031906F453C5391378462575BB2D25F0C6CE9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_3 = ___error1;
		bool L_4 = ___hasResult3;
		if (!((int32_t)((int32_t)((!(((RuntimeObject*)(String_t*)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_5 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057F1E43FBABAC23586AA55F0EF538573003911F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindCompletionMessage_mCA3CC673ECB325967876E66D75BE2A21E8B7291F_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6 = ___hasResult3;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_7 = ___invocationId0;
		String_t* L_8 = ___error1;
		RuntimeObject * L_9 = ___result2;
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_10 = (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 *)il2cpp_codegen_object_new(CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var);
		CompletionMessage__ctor_m1CD5DB3DE1426B1C2664F858DD4FFF02C94A79D3(L_10, L_7, L_8, L_9, (bool)1, /*hidden argument*/NULL);
		return L_10;
	}

IL_0035:
	{
		String_t* L_11 = ___invocationId0;
		String_t* L_12 = ___error1;
		CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * L_13 = (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 *)il2cpp_codegen_object_new(CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71_il2cpp_TypeInfo_var);
		CompletionMessage__ctor_m1CD5DB3DE1426B1C2664F858DD4FFF02C94A79D3(L_13, L_11, L_12, NULL, (bool)0, /*hidden argument*/NULL);
		return L_13;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindStreamItemMessage(System.String,System.Object,System.Boolean,Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, RuntimeObject * ___item1, bool ___hasItem2, RuntimeObject* ___binder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___invocationId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795031906F453C5391378462575BB2D25F0C6CE9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_3 = ___hasItem2;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_4 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D0B18AF8FE0C26462400684485ADF84CD3AC751)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindStreamItemMessage_mC47E59DA20268AFB2F3596B158F4F4BAE8007C4B_RuntimeMethod_var)));
	}

IL_0021:
	{
		String_t* L_5 = ___invocationId0;
		RuntimeObject * L_6 = ___item1;
		StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * L_7 = (StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 *)il2cpp_codegen_object_new(StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0_il2cpp_TypeInfo_var);
		StreamItemMessage__ctor_m1147375672DFF6B1D85BA76D27BE516B4A3B3C73(L_7, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindStreamInvocationMessage(System.String,System.String,System.Object[],System.Boolean,System.String[],Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, bool ___hasArguments3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds4, RuntimeObject* ___binder5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___invocationId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795031906F453C5391378462575BB2D25F0C6CE9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_3 = ___hasArguments3;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_4 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1699559B547AE0F2170A87C5D92B80483AEC1405)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B_RuntimeMethod_var)));
	}

IL_0022:
	{
		String_t* L_5 = ___target1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_7 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral954BA8E79817CA0C4985F9080D23259FB6812B2B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindStreamInvocationMessage_m23867F6EB4D4FA8D194176E267A080E9418D6B4B_RuntimeMethod_var)));
	}

IL_0035:
	{
		String_t* L_8 = ___invocationId0;
		String_t* L_9 = ___target1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = ___arguments2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___streamIds4;
		StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 * L_12 = (StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8 *)il2cpp_codegen_object_new(StreamInvocationMessage_t8705DCB5CDD6A18805861A30CD5B26CF096FA4A8_il2cpp_TypeInfo_var);
		StreamInvocationMessage__ctor_mBCBE3CD70F70563977569037432E1CC19177CB85(L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindInvocationMessage(System.String,System.String,System.Object[],System.Boolean,System.String[],Microsoft.AspNetCore.SignalR.IInvocationBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___invocationId0, String_t* ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arguments2, bool ___hasArguments3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___streamIds4, RuntimeObject* ___binder5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___target1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_2 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral954BA8E79817CA0C4985F9080D23259FB6812B2B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_3 = ___hasArguments3;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_4 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1699559B547AE0F2170A87C5D92B80483AEC1405)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindInvocationMessage_m6A4B1B9946AABCEB3B80CEA4E889D3140918A38D_RuntimeMethod_var)));
	}

IL_0022:
	{
		String_t* L_5 = ___invocationId0;
		String_t* L_6 = ___target1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___arguments2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___streamIds4;
		InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 * L_9 = (InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291 *)il2cpp_codegen_object_new(InvocationMessage_t40F7969D2BF69D24E8E489B7D42DBDD3F00B9291_il2cpp_TypeInfo_var);
		InvocationMessage__ctor_m8498B76123910828039BEBE04B4E48529A1C839F(L_9, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Object Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindType(System.Text.Json.Utf8JsonReader&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		Type_t * L_1 = ___type1;
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_2 = __this->get__payloadSerializerOptions_22();
		IL2CPP_RUNTIME_CLASS_INIT(JsonSerializer_tAB201668CE5A3C6041AA85E990708FA1E45C3CC4_il2cpp_TypeInfo_var);
		RuntimeObject * L_3;
		L_3 = JsonSerializer_Deserialize_m62B9137DE35497FC07913831DAE0C2C7A5147B66((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object[] Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindTypes(System.Text.Json.Utf8JsonReader&,System.Collections.Generic.IReadOnlyList`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2 (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, RuntimeObject* ___paramTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t8100E72F776CC98A4E12AEF97BB8E10DFDCCE66D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tA4D3241643ABADD44CA14878713D04E6EFDE2F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_0 = NULL;
	{
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___paramTypes1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Type>::get_Count() */, IReadOnlyCollection_1_t8100E72F776CC98A4E12AEF97BB8E10DFDCCE66D_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_2 = ___reader0;
		int32_t L_3;
		L_3 = Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_4 = ___reader0;
		bool L_5;
		L_5 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_4, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_001b:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_0;
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_9 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_0 = L_10;
	}

IL_0029:
	{
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		int32_t L_12 = V_1;
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_13 = ___reader0;
		RuntimeObject* L_14 = ___paramTypes1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Type_t * L_16;
		L_16 = InterfaceFuncInvoker1< Type_t *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<System.Type>::get_Item(System.Int32) */, IReadOnlyList_1_tA4D3241643ABADD44CA14878713D04E6EFDE2F1D_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject * L_17;
		L_17 = JsonHubProtocol_BindType_m00B922E1B2DE86A8B3C298289A77968A4D799BA6(__this, (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_17);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject *)L_17);
		goto IL_0052;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_18 = V_4;
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_19 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mA234CAC0202189C1550D9F47EAD93DAF548D2DC4(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AE71A711DA768E489EB73A42460BA5FEE5F0430)), L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_004c:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_20 = ___reader0;
		Utf8JsonReader_Skip_m5C3C8B96E470380A219B59B1AC876A79F9CED33E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_20, /*hidden argument*/NULL);
	}

IL_0052:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_21 = ___reader0;
		bool L_22;
		L_22 = SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_005d:
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_24 = ___reader0;
		uint8_t L_25;
		L_25 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) == ((int32_t)4)))
		{
			goto IL_006f;
		}
	}
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_26 = ___reader0;
		int32_t L_27;
		L_27 = Utf8JsonReader_get_CurrentDepth_mE4B12F6C246461A00F215D3654547B4EBFFC0EE4((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) > ((int32_t)L_28)))
		{
			goto IL_001b;
		}
	}

IL_006f:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_32);
		int32_t L_34 = V_2;
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_35);
		String_t* L_37;
		L_37 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral676FAE1D3F9F23568212E17D5529DA3EAA85F75C)), L_33, L_36, /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_38 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonHubProtocol_BindTypes_m8EDBFB0E300AFD7C873ECBDCE1CBD0FAA71151F2_RuntimeMethod_var)));
	}

IL_008f:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_39;
		G_B14_0 = L_40;
		if (L_40)
		{
			G_B15_0 = L_40;
			goto IL_0099;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41;
		L_41 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		G_B15_0 = L_41;
	}

IL_0099:
	{
		return G_B15_0;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.CloseMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::BindCloseMessage(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * JsonHubProtocol_BindCloseMessage_m3B70AED3E6C4DB42DD27AD491FE58BDA48F08E5B (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, String_t* ___error0, bool ___allowReconnect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___error0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = ___allowReconnect1;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var);
		CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_2 = ((CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_StaticFields*)il2cpp_codegen_static_fields_for(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var))->get_Empty_0();
		return L_2;
	}

IL_000c:
	{
		String_t* L_3 = ___error0;
		bool L_4 = ___allowReconnect1;
		CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * L_5 = (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 *)il2cpp_codegen_object_new(CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376_il2cpp_TypeInfo_var);
		CloseMessage__ctor_mB8B640659DB2979112580AB4C5CE95984281346B(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Microsoft.AspNetCore.SignalR.Protocol.HubMessage Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::ApplyHeaders(Microsoft.AspNetCore.SignalR.Protocol.HubMessage,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * JsonHubProtocol_ApplyHeaders_mBDAFD99C42071555DA4C3770AC7D084F8635879E (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * ___message0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * V_0 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___headers1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_1 = ___message0;
		V_0 = ((HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 *)IsInstClass((RuntimeObject*)L_1, HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2_il2cpp_TypeInfo_var));
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * L_3 = V_0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = ___headers1;
		NullCheck(L_3);
		HubInvocationMessage_set_Headers_m57D5F6BAA0F0E0A6C34EF283E4D19393BAF58EBC_inline(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		HubMessage_t61F595EE977C005F1414997CC1FA0F8C6847EBAB * L_5 = ___message0;
		return L_5;
	}
}
// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::CreateDefaultSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * JsonHubProtocol_CreateDefaultSerializerSettings_m53FCC81D8B93B664513B421AEC2B44DDD47259C7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = (JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC *)il2cpp_codegen_object_new(JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC_il2cpp_TypeInfo_var);
		JsonSerializerOptions__ctor_mC915A11B1E53D91D241E02A3A59B1FFA86A7DD63(L_0, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerOptions_set_WriteIndented_m6A8F869F0E7B5719594AE767F15907224EF0C82A(L_1, (bool)0, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerOptions_set_ReadCommentHandling_mF556A7EB8A2DDD8B1070D300D4E2A50A8C9FB851(L_2, 0, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_3 = L_2;
		NullCheck(L_3);
		JsonSerializerOptions_set_AllowTrailingCommas_mEB2B67F0FF9E9C2A555C5256E89C56872AA23BE3(L_3, (bool)0, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_4 = L_3;
		NullCheck(L_4);
		JsonSerializerOptions_set_DefaultIgnoreCondition_m8B91521E9229AF67AE48373F317EB9A0282CBAC4(L_4, 2, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_5 = L_4;
		NullCheck(L_5);
		JsonSerializerOptions_set_IgnoreReadOnlyProperties_m12055114737650DC99890419B94C826C51209C2D(L_5, (bool)0, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var);
		JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * L_7;
		L_7 = JsonNamingPolicy_get_CamelCase_mC4D37A8461CB8C0FBB67356CC7003344AD141A32_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		JsonSerializerOptions_set_PropertyNamingPolicy_mF68D664544AE6B2D13DBE6F60E69B3DA27E14240(L_6, L_7, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_8 = L_6;
		NullCheck(L_8);
		JsonSerializerOptions_set_PropertyNameCaseInsensitive_mDA99DD87D15CC6A8D74A9C5601F547BC318938E3(L_8, (bool)1, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_9 = L_8;
		NullCheck(L_9);
		JsonSerializerOptions_set_MaxDepth_mD2211399E461E93178AF84654303805D8B489BA2(L_9, ((int32_t)64), /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_10 = L_9;
		NullCheck(L_10);
		JsonSerializerOptions_set_DictionaryKeyPolicy_m3FFC6C9743F26D2DB7B3BB08C103A533EAD4A993(L_10, (JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 *)NULL, /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_11 = L_10;
		NullCheck(L_11);
		JsonSerializerOptions_set_DefaultBufferSize_m5DD90E7B356610954B6525851AA073120C4337C5(L_11, ((int32_t)16384), /*hidden argument*/NULL);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_12 = L_11;
		JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 * L_13;
		L_13 = JavaScriptEncoder_get_UnsafeRelaxedJsonEscaping_m9C60452931FBFF571399F66669483EF27264E477_inline(/*hidden argument*/NULL);
		NullCheck(L_12);
		JsonSerializerOptions_set_Encoder_m61FB9693F28EE7110E2F6C26DA5C813304BF4A24(L_12, L_13, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Protocol.JsonHubProtocol::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocol__cctor_m6B90C8B4863785C76819BFCD6E2A7211A0D42C64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E988FD059BFAF7496F983AF2B41FBC372D1A1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral368FD5FDD9D32A20DF4066D2D3E2DFB1AFED1638);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral602A150409DA10AD220A2047FFC10A1CCD72F938);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805F84311EA7092E3277934B5D78AD5558C35C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_0;
		L_0 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ResultPropertyNameBytes_1(L_0);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_1;
		L_1 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ItemPropertyNameBytes_3(L_1);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_2;
		L_2 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral0E988FD059BFAF7496F983AF2B41FBC372D1A1DA, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_InvocationIdPropertyNameBytes_5(L_2);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_3;
		L_3 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral805F84311EA7092E3277934B5D78AD5558C35C4A, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_StreamIdsPropertyNameBytes_7(L_3);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_4;
		L_4 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_TypePropertyNameBytes_9(L_4);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_5;
		L_5 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ErrorPropertyNameBytes_11(L_5);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_6;
		L_6 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral602A150409DA10AD220A2047FFC10A1CCD72F938, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_AllowReconnectPropertyNameBytes_13(L_6);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_7;
		L_7 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_TargetPropertyNameBytes_15(L_7);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_8;
		L_8 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ArgumentsPropertyNameBytes_17(L_8);
		JsonEncodedText_t57D6F2084A7F8DD2FB2880226C49669AFE745867  L_9;
		L_9 = JsonEncodedText_Encode_m5931172AB79C62B4DBB497B685FD30B10087D24A(_stringLiteral368FD5FDD9D32A20DF4066D2D3E2DFB1AFED1638, (JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6 *)NULL, /*hidden argument*/NULL);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_HeadersPropertyNameBytes_19(L_9);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ProtocolName_20(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84);
		((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->set_ProtocolVersion_21(1);
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
// System.Text.Json.JsonSerializerOptions Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::get_PayloadSerializerOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * JsonHubProtocolOptions_get_PayloadSerializerOptions_m2346CDA5FB2167FD6E614529506F18A125A27874 (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, const RuntimeMethod* method)
{
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = __this->get_U3CPayloadSerializerOptionsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::set_PayloadSerializerOptions(System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocolOptions_set_PayloadSerializerOptions_m24BC085D755A71D9692FD7FFBC28A58EC24AB90D (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * ___value0, const RuntimeMethod* method)
{
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = ___value0;
		__this->set_U3CPayloadSerializerOptionsU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.JsonHubProtocolOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHubProtocolOptions__ctor_m8747B342D4FE87414D4BA3C771D6AD054E95EE87 (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0;
		L_0 = JsonHubProtocol_CreateDefaultSerializerSettings_m53FCC81D8B93B664513B421AEC2B44DDD47259C7(/*hidden argument*/NULL);
		__this->set_U3CPayloadSerializerOptionsU3Ek__BackingField_0(L_0);
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
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::.ctor(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter__ctor_m383DA8D98506D9AE5DF9B682BB59DBA039B900A3 (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * __this, RuntimeObject* ___stream0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * ReusableUtf8JsonWriter_Get_m29B303CA76FD12C30D54B6B048B4F76E7C1A59C3 (RuntimeObject* ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * V_0 = NULL;
	{
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_0 = ((ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var))->get__cachedInstance_0();
		V_0 = L_0;
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_2 = ___stream0;
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_3 = (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 *)il2cpp_codegen_object_new(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var);
		ReusableUtf8JsonWriter__ctor_m383DA8D98506D9AE5DF9B682BB59DBA039B900A3(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		((ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var))->set__cachedInstance_0((ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 *)NULL);
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_4 = V_0;
		NullCheck(L_4);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_5 = L_4->get__writer_1();
		RuntimeObject* L_6 = ___stream0;
		NullCheck(L_5);
		Utf8JsonWriter_Reset_mFE02B669A469CBFB8C96FF37008B73F2EED401F9(L_5, L_6, /*hidden argument*/NULL);
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_7 = V_0;
		return L_7;
	}
}
// System.Void Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::Return(Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableUtf8JsonWriter_Return_m68C407D9D1BDE8E0502F1A6793AB62E7328E96C3 (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_0 = ___writer0;
		((ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681_il2cpp_TypeInfo_var))->set__cachedInstance_0(L_0);
		ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * L_1 = ___writer0;
		NullCheck(L_1);
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_2 = L_1->get__writer_1();
		NullCheck(L_2);
		Utf8JsonWriter_Reset_mB4FE2ED062F5B16BC80A81C4E2DBDF10DC23A2F1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.Json.Utf8JsonWriter Microsoft.AspNetCore.Internal.ReusableUtf8JsonWriter::GetJsonWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_m679E4D6F4C53F82CDFEAF34FA857E4B114EFFFEC (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_CheckRead_m0CF8DAC1AC26EBCC0C16977BE35BC7559123BEC2_RuntimeMethod_var)));
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::EnsureObjectStart(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureObjectStart_m95A3E8CC9F5CF7538A2F42B75246230F14D6F306 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
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
		L_3 = SystemTextJsonExtensions_GetTokenString_mCAB2C5639ADDC333DA27C7FAABB2D3EE8085508E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4089C4157C8E819F2FA7F020E98EE41253103DDE)), /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_5 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_EnsureObjectStart_m95A3E8CC9F5CF7538A2F42B75246230F14D6F306_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_mCAB2C5639ADDC333DA27C7FAABB2D3EE8085508E (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
{
	{
		Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * L_0 = ___reader0;
		uint8_t L_1;
		L_1 = Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = SystemTextJsonExtensions_GetTokenString_m87001E6A0C20052582CDFF8691731089944A8115(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::GetTokenString(System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_GetTokenString_m87001E6A0C20052582CDFF8691731089944A8115 (uint8_t ___tokenType0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonExtensions_EnsureArrayStart_mA788D5776172D161A8FC068669ED4B11A5E66F13 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, const RuntimeMethod* method)
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
		L_3 = SystemTextJsonExtensions_GetTokenString_mCAB2C5639ADDC333DA27C7FAABB2D3EE8085508E((Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 *)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E87B0AEE905388792DF7A50A99D9E43CDA5F434)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64C99273009008F2814C530DB6265687D3B61A73)), /*hidden argument*/NULL);
		InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 * L_5 = (InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t6BC2CAD98D687ECA85C86041B1CE6223129208F2_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m07190C196512BD59C7B4C28A9BB4960C5AB4D692(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_EnsureArrayStart_mA788D5776172D161A8FC068669ED4B11A5E66F13_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsBoolean(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTextJsonExtensions_ReadAsBoolean_mB61D6842E4216484534F9D50C45149E1DBABBFA1 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsBoolean_mB61D6842E4216484534F9D50C45149E1DBABBFA1_RuntimeMethod_var)));
	}

IL_0036:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.String Microsoft.AspNetCore.Internal.SystemTextJsonExtensions::ReadAsString(System.Text.Json.Utf8JsonReader&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsString_mB52A71871747F529865C7FA7F192F67E631BB467_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  SystemTextJsonExtensions_ReadAsInt32_mB6B18C86114D6558E4994DB590873D65AD913D85 (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * ___reader0, String_t* ___propertyName1, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemTextJsonExtensions_ReadAsInt32_mB6B18C86114D6558E4994DB590873D65AD913D85_RuntimeMethod_var)));
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
// System.Void Microsoft.AspNetCore.Internal.TextMessageFormatter::WriteRecordSeparator(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMessageFormatter_WriteRecordSeparator_mCCF17423FEF15F1B60D7A4B6549BD24AE08C04AC (RuntimeObject* ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___output0;
		NullCheck(L_0);
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_1;
		L_1 = InterfaceFuncInvoker1< Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , int32_t >::Invoke(2 /* System.Span`1<!0> System.Buffers.IBufferWriter`1<System.Byte>::GetSpan(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_0, 1);
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), 0, /*hidden argument*/Span_1_get_Item_mAD44625B520CBF9D92C9A89F66FC3CEEAD791E73_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var))->get_RecordSeparator_0();
		*((int8_t*)L_2) = (int8_t)L_3;
		RuntimeObject* L_4 = ___output0;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var, L_4, 1);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.TextMessageFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMessageFormatter__cctor_mF3C711C1289D636950EF1C413661D24AAF210A7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var))->set_RecordSeparator_0((uint8_t)((int32_t)30));
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
// System.Boolean Microsoft.AspNetCore.Internal.TextMessageParser::TryParseMessage(System.Buffers.ReadOnlySequence`1<System.Byte>&,System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextMessageParser_TryParseMessage_mCE6776285E5C2475A606D3FEFEA91087EFAAF5BD (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___buffer0, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___buffer0;
		bool L_1;
		L_1 = ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, /*hidden argument*/ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_2 = ___buffer0;
		ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_3;
		L_3 = ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_2, /*hidden argument*/ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		V_1 = L_3;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_inline((ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *)(&V_1), /*hidden argument*/ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var))->get_RecordSeparator_0();
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_inline(L_4, L_5, /*hidden argument*/MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_RuntimeMethod_var);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_8 = ___payload1;
		il2cpp_codegen_initobj(L_8, sizeof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 ));
		return (bool)0;
	}

IL_002e:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_9 = ___payload1;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_10 = ___buffer0;
		int32_t L_11 = V_0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_12;
		L_12 = ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_10, 0, L_11, /*hidden argument*/ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_13 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_14 = ___buffer0;
		int32_t L_15 = V_0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_16;
		L_16 = ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_14, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)))), /*hidden argument*/ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_004e:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_17 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_18 = ___payload1;
		bool L_19;
		L_19 = TextMessageParser_TryParseMessageMultiSegment_m34E08A05FB4C3CA54410838F2185C269AA627345((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_17, (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean Microsoft.AspNetCore.Internal.TextMessageParser::TryParseMessageMultiSegment(System.Buffers.ReadOnlySequence`1<System.Byte>&,System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextMessageParser_TryParseMessageMultiSegment_m34E08A05FB4C3CA54410838F2185C269AA627345 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___buffer0, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___buffer0;
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var))->get_RecordSeparator_0();
		Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  L_2;
		L_2 = BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, L_1, /*hidden argument*/BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_inline((Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_4 = ___payload1;
		il2cpp_codegen_initobj(L_4, sizeof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 ));
		return (bool)0;
	}

IL_001e:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_5 = ___payload1;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_6 = ___buffer0;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_7;
		L_7 = Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB((Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_RuntimeMethod_var);
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_8;
		L_8 = ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_6, 0, L_7, /*hidden argument*/ReadOnlySequence_1_Slice_mFCB1101EEF1ECD06F219D9036067FDEB289C740A_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_5)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_5)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_9 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_10 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_11 = ___buffer0;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_12;
		L_12 = Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB((Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9C94F876F36346BAFF1D1F7FF9AF439DC273DBB_RuntimeMethod_var);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_13;
		L_13 = ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_11, ((int64_t)((int64_t)1)), L_12, /*hidden argument*/ReadOnlySequence_1_GetPosition_m14D9E64D781A71A72EDE0FC496338646E3AB874B_RuntimeMethod_var);
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_14;
		L_14 = ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_10, L_13, /*hidden argument*/ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		return (bool)1;
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
// System.Void Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextReader__ctor_mA8CEF1ADFBA47C927A0F37D25D97323691C9AC91 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		TextReader__ctor_m6DFFA45D57F3E5A8FA3995BB40A2BC765AB2795A(__this, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_1;
		L_1 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_0);
		__this->set__decoder_4(L_1);
		return;
	}
}
// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::Get(System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * Utf8BufferTextReader_Get_m76CF331F07416AB30A6506389208CCBD5232D547 (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___utf8Buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * V_0 = NULL;
	{
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_0 = ((Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var))->get__cachedInstance_6();
		V_0 = L_0;
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_2 = (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C *)il2cpp_codegen_object_new(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var);
		Utf8BufferTextReader__ctor_mA8CEF1ADFBA47C927A0F37D25D97323691C9AC91(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000f:
	{
		((Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var))->set__cachedInstance_6((Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C *)NULL);
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_3 = V_0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_4 = ___utf8Buffer0;
		NullCheck(L_3);
		Utf8BufferTextReader_SetBuffer_mE8A05C6A5DCED07A6852F71F1FAF0891E0BD1CA4(L_3, (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_4, /*hidden argument*/NULL);
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::Return(Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextReader_Return_m7115E1BA48C4462AE1F80458F75080C4DAB38100 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * L_0 = ___reader0;
		((Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_il2cpp_TypeInfo_var))->set__cachedInstance_6(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::SetBuffer(System.Buffers.ReadOnlySequence`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextReader_SetBuffer_mE8A05C6A5DCED07A6852F71F1FAF0891E0BD1CA4 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * __this, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___utf8Buffer0, const RuntimeMethod* method)
{
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___utf8Buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_1 = (*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0);
		__this->set__utf8Buffer_5(L_1);
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_2 = __this->get__decoder_4();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Text.Decoder::Reset() */, L_2);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8BufferTextReader_Read_m8A75C8B9CA54D624D61D604F1CD58DF0E6865CB6 (Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Il2CppChar* V_4 = NULL;
	Il2CppChar* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = __this->get_address_of__utf8Buffer_5();
		bool L_1;
		L_1 = ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, /*hidden argument*/ReadOnlySequence_1_get_IsEmpty_mB499020B2833D0056AC93B4D3BC46A2763601632_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_2 = __this->get_address_of__utf8Buffer_5();
		ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_3;
		L_3 = ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_2, /*hidden argument*/ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		V_3 = L_3;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_inline((ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *)(&V_3), /*hidden argument*/ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		V_0 = L_4;
		V_1 = 0;
		V_2 = 0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___buffer0;
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		V_5 = (Il2CppChar*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		Il2CppChar* L_7 = V_5;
		V_4 = (Il2CppChar*)((uintptr_t)L_7);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_8 = V_0;
		uint8_t* L_9;
		L_9 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D(L_8, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67BFE9652B9B48C2B05A78E7DD82C804AE76387D_RuntimeMethod_var);
		V_7 = (uint8_t*)L_9;
		uint8_t* L_10 = V_7;
		V_6 = (uint8_t*)((uintptr_t)L_10);
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_11 = __this->get__decoder_4();
		uint8_t* L_12 = V_6;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&V_0), /*hidden argument*/ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_RuntimeMethod_var);
		Il2CppChar* L_14 = V_4;
		int32_t L_15 = ___count2;
		NullCheck(L_11);
		VirtActionInvoker8< uint8_t*, int32_t, Il2CppChar*, int32_t, bool, int32_t*, int32_t*, bool* >::Invoke(12 /* System.Void System.Text.Decoder::Convert(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&) */, L_11, (uint8_t*)(uint8_t*)L_12, L_13, (Il2CppChar*)(Il2CppChar*)L_14, L_15, (bool)0, (int32_t*)(&V_1), (int32_t*)(&V_2), (bool*)(&V_8));
		V_7 = (uint8_t*)((uintptr_t)0);
		V_5 = (Il2CppChar*)((uintptr_t)0);
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_16 = __this->get_address_of__utf8Buffer_5();
		int32_t L_17 = V_1;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_18;
		L_18 = ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_16, ((int64_t)((int64_t)L_17)), /*hidden argument*/ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		__this->set__utf8Buffer_5(L_18);
		int32_t L_19 = V_2;
		return L_19;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Utf8BufferTextWriter_get_Encoding_mF050D6F1CBADC3B6D3B594AEDA6597BFABC65605 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->get__utf8NoBom_11();
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__ctor_m30FDF64ADFE0BD73DE38723C396C01A268282C60 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->get__utf8NoBom_11();
		NullCheck(L_0);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_1;
		L_1 = VirtFuncInvoker0< Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * >::Invoke(39 /* System.Text.Encoder System.Text.Encoding::GetEncoder() */, L_0);
		__this->set__encoder_14(L_1);
		return;
	}
}
// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Get(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * Utf8BufferTextWriter_Get_m5CB856E5E50F6BC5501B329D9377F45BE280094E (RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_0 = ((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->get__cachedInstance_13();
		V_0 = L_0;
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_2 = (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 *)il2cpp_codegen_object_new(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		Utf8BufferTextWriter__ctor_m30FDF64ADFE0BD73DE38723C396C01A268282C60(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->set__cachedInstance_13((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 *)NULL);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_3 = V_0;
		RuntimeObject* L_4 = ___bufferWriter0;
		NullCheck(L_3);
		Utf8BufferTextWriter_SetWriter_m3F9233AAC794BF41BFE0AE3B3254A177EB947BDE_inline(L_3, L_4, /*hidden argument*/NULL);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Return(Microsoft.AspNetCore.Internal.Utf8BufferTextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Return_m267B5E7E4B6AF3E34D175C97800E443E51AC47FB (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_0 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->set__cachedInstance_13(L_0);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_1 = ___writer0;
		NullCheck(L_1);
		Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * L_2 = L_1->get__encoder_14();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Text.Encoder::Reset() */, L_2);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_3 = ___writer0;
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  L_4;
		L_4 = Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342(/*hidden argument*/Memory_1_get_Empty_m80B8C400C777A27CB49EFD6161F338858B76F342_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set__memory_16(L_4);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_5 = ___writer0;
		NullCheck(L_5);
		L_5->set__memoryUsed_17(0);
		Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * L_6 = ___writer0;
		NullCheck(L_6);
		L_6->set__bufferWriter_15((RuntimeObject*)NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::SetWriter(System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m3F9233AAC794BF41BFE0AE3B3254A177EB947BDE (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferWriter0;
		__this->set__bufferWriter_15(L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_mCB4EAF2B418F6B3351C8499597CAC987B67C8CD8 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_WriteInternal_mC5EC152C42A25D53E566AB5E9F81B3CDBEF27AE5(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_m95E9ED9474583A55520FB2272692F14F8D8C28DA (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_WriteInternal_mC5EC152C42A25D53E566AB5E9F81B3CDBEF27AE5(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_mDC269712B20B8301E9ED5AB59369D4F2E2559613 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_EnsureBuffer_mDF3EBF52E8B413747875CB4C558A346231CA54F5(__this, /*hidden argument*/NULL);
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
		Utf8BufferTextWriter_WriteMultiByteChar_m78EED3E827E8B3EE187EF018D0C6FF0F232BD770(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::WriteMultiByteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteMultiByteChar_m78EED3E827E8B3EE187EF018D0C6FF0F232BD770 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
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
		L_0 = Utf8BufferTextWriter_GetBuffer_mCEC67A7AD7A51B84E13E4C6FA18FFC2AA17DAEAB_inline(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Write_mDEB2EC1A9A17C58D77903C4CC3A8E977D904A8DD (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, String_t* ___value0, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_WriteInternal_mC5EC152C42A25D53E566AB5E9F81B3CDBEF27AE5(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Span`1<System.Byte> Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mCEC67A7AD7A51B84E13E4C6FA18FFC2AA17DAEAB (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_EnsureBuffer_mDF3EBF52E8B413747875CB4C558A346231CA54F5(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_EnsureBuffer_mDF3EBF52E8B413747875CB4C558A346231CA54F5 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * L_0 = __this->get_address_of__memory_16();
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7((Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 *)L_0, /*hidden argument*/Memory_1_get_Length_mA8DAA7EDC543DBA8BD035375963BC678BEF041D7_RuntimeMethod_var);
		int32_t L_2 = __this->get__memoryUsed_17();
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->get_MaximumBytesPerUtf8Char_12();
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
		IL2CPP_RUNTIME_CLASS_INIT(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->get_MaximumBytesPerUtf8Char_12();
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_WriteInternal_mC5EC152C42A25D53E566AB5E9F81B3CDBEF27AE5 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, ReadOnlySpan_1_t0CD79E2D3D08348571F249B7F47C1DC0E40468AC  ___buffer0, const RuntimeMethod* method)
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
		L_0 = Utf8BufferTextWriter_GetBuffer_mCEC67A7AD7A51B84E13E4C6FA18FFC2AA17DAEAB_inline(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Flush_mE4847A7382462680FC373DD830B06E6DE49F3DE3 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_Dispose_mBD5317CFA28A53A139214DCAEF4406A3B5C0E843 (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, bool ___disposing0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8BufferTextWriter__cctor_m18A9A522E2A5C03C5DEB5F934609EE7656D1C3BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA83C010AF67DEDDC3E671DFDAF49634DFB2A2C90(L_0, (bool)0, /*hidden argument*/NULL);
		((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->set__utf8NoBom_11(L_0);
		((Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_StaticFields*)il2cpp_codegen_static_fields_for(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_il2cpp_TypeInfo_var))->set_MaximumBytesPerUtf8Char_12(4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * JsonHubProtocolOptions_get_PayloadSerializerOptions_m2346CDA5FB2167FD6E614529506F18A125A27874_inline (JsonHubProtocolOptions_t7BC46DEBF03CEBB41810B849FD09E893985F3F55 * __this, const RuntimeMethod* method)
{
	{
		JsonSerializerOptions_t0B8EB2DA1FA99F51B524FD1174A14A2AB4DD8CAC * L_0 = __this->get_U3CPayloadSerializerOptionsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonHubProtocol_get_Version_mC3A4B2F976D805ED21795DACE8F3E8C771010785_inline (JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_StaticFields*)il2cpp_codegen_static_fields_for(JsonHubProtocol_tE059FECA993E10C0E8F7C00852BA20F71A137524_il2cpp_TypeInfo_var))->get_ProtocolVersion_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextMessageParser_TryParseMessage_mCE6776285E5C2475A606D3FEFEA91087EFAAF5BD_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___buffer0, ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___buffer0;
		bool L_1;
		L_1 = ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, /*hidden argument*/ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_2 = ___buffer0;
		ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_3;
		L_3 = ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_2, /*hidden argument*/ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2_RuntimeMethod_var);
		V_1 = L_3;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_inline((ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *)(&V_1), /*hidden argument*/ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageFormatter_tD09F6956A1DFE48C509451FE34C3E8A8782CCFDC_il2cpp_TypeInfo_var))->get_RecordSeparator_0();
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_inline(L_4, L_5, /*hidden argument*/MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_RuntimeMethod_var);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_8 = ___payload1;
		il2cpp_codegen_initobj(L_8, sizeof(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 ));
		return (bool)0;
	}

IL_002e:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_9 = ___payload1;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_10 = ___buffer0;
		int32_t L_11 = V_0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_12;
		L_12 = ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_10, 0, L_11, /*hidden argument*/ReadOnlySequence_1_Slice_m7B0EA85B385B1471C2BB16A80F38F7E61F408D33_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_9)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_13 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_14 = ___buffer0;
		int32_t L_15 = V_0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_16;
		L_16 = ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_14, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)))), /*hidden argument*/ReadOnlySequence_1_Slice_mB32F63ABA8CA076FAB0B304AD7C77E1CE6A66D0A_RuntimeMethod_var);
		*(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13)->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13)->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_004e:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_17 = ___buffer0;
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_18 = ___payload1;
		bool L_19;
		L_19 = TextMessageParser_TryParseMessageMultiSegment_m34E08A05FB4C3CA54410838F2185C269AA627345((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_17, (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mA5361310AD875B7E148D7E75324CF031323CDCD3_inline (Utf8JsonReader_t88C4E000697EE4206B9892DE19130DC46AFD56E6 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__tokenType_9();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * ReusableUtf8JsonWriter_GetJsonWriter_m679E4D6F4C53F82CDFEAF34FA857E4B114EFFFEC_inline (ReusableUtf8JsonWriter_t52B218848A0D035D7CA2B1BF18B4A066B6ED2681 * __this, const RuntimeMethod* method)
{
	{
		Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236 * L_0 = __this->get__writer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HubInvocationMessage_get_Headers_m6389562F95BA5D2F4BC022A9EEF8295E1A79CDF1_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CHeadersU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CompletionMessage_get_Error_mBB3ACC87D22B4A07C2C3DEF6268D9616CDB45F5A_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CompletionMessage_get_HasResult_mC1CA5286CBF9FE19168DC31D867FEB3CAE13AB51_inline (CompletionMessage_tE62EA2E16789E91053D0515E07B740584B65DC71 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasResultU3Ek__BackingField_4();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * StreamItemMessage_get_Item_m94906A64B48E5881B82DDA196C1C6DE60713C461_inline (StreamItemMessage_tE4B6F11355D4AB614C2359005AC839B1CE1A47B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CItemU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HubMethodInvocationMessage_get_Target_m05CD6D81C6471D40223F9B308812BF01354EFC7C_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTargetU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* HubMethodInvocationMessage_get_Arguments_mEAA9989839A4E6D24EFC8D33C3C9EA1537991356_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get_U3CArgumentsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* HubMethodInvocationMessage_get_StreamIds_mF41F7209AD9C5938ACBF7C48DAAC0C06962DC498_inline (HubMethodInvocationMessage_t271FE3FC62A3434778843BB1C38B352928C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CStreamIdsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CloseMessage_get_Error_mFB4E2A8399C7E2BA66FEF1626F3B18D576DC09D5_inline (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CloseMessage_get_AllowReconnect_m32147106579DF805FA7F1F4031DC9B1E6D90F2FC_inline (CloseMessage_tD6C9EFF707A15F8267C37AD935B1E458424C2376 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowReconnectU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HubInvocationMessage_get_InvocationId_m8B8220F599427486835AE29DF844AA6118DF5EDB_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CInvocationIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HubInvocationMessage_set_Headers_m57D5F6BAA0F0E0A6C34EF283E4D19393BAF58EBC_inline (HubInvocationMessage_t8169AEE24B97778B5F484C34D4229AE734EE30C2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CHeadersU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * JsonNamingPolicy_get_CamelCase_mC4D37A8461CB8C0FBB67356CC7003344AD141A32_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var);
		JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6 * L_0 = ((JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tA3426AC87B947EF08CE6C818DDC47B9E20134DE6_il2cpp_TypeInfo_var))->get_U3CCamelCaseU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8BufferTextWriter_SetWriter_m3F9233AAC794BF41BFE0AE3B3254A177EB947BDE_inline (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, RuntimeObject* ___bufferWriter0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferWriter0;
		__this->set__bufferWriter_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  Utf8BufferTextWriter_GetBuffer_mCEC67A7AD7A51B84E13E4C6FA18FFC2AA17DAEAB_inline (Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69 * __this, const RuntimeMethod* method)
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
		Utf8BufferTextWriter_EnsureBuffer_mDF3EBF52E8B413747875CB4C558A346231CA54F5(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, const RuntimeMethod* method)
{
	{
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_0 = (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)__this->get_address_of__sequenceStart_0();
		RuntimeObject * L_1;
		L_1 = SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_0, /*hidden argument*/NULL);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_2 = (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)__this->get_address_of__sequenceEnd_1();
		RuntimeObject * L_3;
		L_3 = SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_2, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_gshared_inline (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC * __this, const RuntimeMethod* method)
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
	ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = (int32_t)__this->get__index_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__object_0();
		NullCheck((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10))));
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_2;
		L_2 = VirtFuncInvoker0< Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  >::Invoke(9 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, (MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)((MemoryManager_1_t36A98C71862541387FCB5E213CA9CEFDF6963AEA *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10))));
		V_0 = (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_2;
		int32_t L_3 = (int32_t)__this->get__index_1();
		int32_t L_4 = (int32_t)__this->get__length_2();
		Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A  L_5;
		L_5 = Span_1_Slice_m0D899DCF8FC359A3DAFDA825673BCF49451AEBA3_inline((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A *)(&V_0), (int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)2147483647LL))), (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_6;
		L_6 = ((  ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  (*) (Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((Span_1_tBEA9494BF1D6178D77B0C1BEA8EAB8BCA7C6B07A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_8, (Type_t *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject * L_12 = (RuntimeObject *)__this->get__object_0();
		String_t* L_13 = (String_t*)((String_t*)IsInst((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		V_1 = (String_t*)L_13;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_15;
		L_15 = ((  Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		intptr_t L_16 = ((MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var))->get_StringAdjustment_0();
		String_t* L_17 = V_1;
		NullCheck((String_t*)L_17);
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_17, /*hidden argument*/NULL);
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_inline((&L_19), (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)L_15, (intptr_t)L_16, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_2 = (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_19;
		int32_t L_20 = (int32_t)__this->get__index_1();
		int32_t L_21 = (int32_t)__this->get__length_2();
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_22;
		L_22 = ReadOnlySpan_1_Slice_mEF42EB6B9FF108D4C4B0E06619D6B3C867C51513_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&V_2), (int32_t)L_20, (int32_t)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_22;
	}

IL_008e:
	{
		RuntimeObject * L_23 = (RuntimeObject *)__this->get__object_0();
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject * L_24 = (RuntimeObject *)__this->get__object_0();
		int32_t L_25 = (int32_t)__this->get__index_1();
		int32_t L_26 = (int32_t)__this->get__length_2();
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m9F207A2967317FCB9C21FE47F07500B37E8D937A_inline((&L_27), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18))), (int32_t)L_25, (int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)2147483647LL))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 ));
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_28 = V_2;
		return (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21E1810FFE1D230248639FF6C1FB48D6A204ECA5_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ___span0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_5 = ___span0;
		uint8_t* L_6;
		L_6 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		uint8_t* L_8;
		L_8 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((uint8_t*)(uint8_t*)(&___value1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mC74AF0182E1B08A75CED8A2CFA78BB9B517E8925((uint8_t*)(uint8_t*)L_7, (uint8_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return (int32_t)L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13;
		L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_12, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_13, (Type_t *)L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_17 = ___span0;
		uint8_t* L_18;
		L_18 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		Il2CppChar* L_20;
		L_20 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)(&___value1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m0D0468F90348BC99D510D873B5480CED1A2940E6((Il2CppChar*)(Il2CppChar*)L_19, (Il2CppChar)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return (int32_t)L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_24 = ___span0;
		uint8_t* L_25;
		L_25 = ((  uint8_t* (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		uint8_t L_26 = ___value1;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_inline((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_28;
		L_28 = ((  int32_t (*) (uint8_t*, uint8_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((uint8_t*)(uint8_t*)L_25, (uint8_t)L_26, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (int32_t)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  BuffersExtensions_PositionOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D3555F6CAF68662CE50B75832A96EA9FEF37AB5_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * ___source0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_0 = ___source0;
		bool L_1;
		L_1 = ReadOnlySequence_1_get_IsSingleSegment_m4E474E29B58E8144BC77320E709F2B77C3080C53_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_2 = ___source0;
		ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC  L_3;
		L_3 = ReadOnlySequence_1_get_First_m7CF8BBA224CFE0A8D7AF10FC3AE2BE07F0BE9AF2((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC )L_3;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_4;
		L_4 = ReadOnlyMemory_1_get_Span_m34F1611A17A2243F7F2898CE012DCA90C345C631_inline((ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *)(ReadOnlyMemory_1_tCC314BAFB289385F2BD496FCDB61679EA8D5DDAC *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		uint8_t L_5 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tC084AE0D87124CDEA1197D5C45DBE020D265C2AD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = ((  int32_t (*) (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 , uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_4, (uint8_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_0 = (int32_t)L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_8 = ___source0;
		int32_t L_9 = V_0;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_10;
		L_10 = ReadOnlySequence_1_GetPosition_mF352E76B67410A053E6EAF292190D895692D469E((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_8, (int64_t)((int64_t)((int64_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E((&L_11), (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 )L_10, /*hidden argument*/Nullable_1__ctor_m4C30B447F39269EE16A6290648C2CF6352287D6E_RuntimeMethod_var);
		return (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 )L_11;
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 ));
		Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  L_12 = V_2;
		return (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 )L_12;
	}

IL_0039:
	{
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * L_13 = ___source0;
		uint8_t L_14 = ___value1;
		Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  L_15;
		L_15 = ((  Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  (*) (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)L_13, (uint8_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 )L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3A73CBD2DFF84D5A416CEC0F57FD1F9F1A4C3F67_gshared_inline (Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_Slice_mF76CFCC113179A7412E7D4334D52CCD0427F6A31_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___start0, const RuntimeMethod* method)
{
	{
		ReadOnlySequence_1_BoundsCheck_mFA6A7A23052C01E59FC4A36D5EDAF79288DFF7A5((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)__this, (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(&___start0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_0 = (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)__this->get_address_of__sequenceEnd_1();
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_1;
		L_1 = ReadOnlySequence_1_SliceImpl_mDA38BC9B76AB3382F264F0D8E1A4F3416F821AF2_inline((ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)(ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 *)__this, (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(&___start0), (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m2E2DB63737B41CA698D2CE2AC99894B6287BC011_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  ReadOnlySpan_1_Slice_mEF42EB6B9FF108D4C4B0E06619D6B3C867C51513_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
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
		L_7 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((intptr_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = (intptr_t)L_7;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_8 = (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)__this->get__pinnable_0();
		intptr_t L_9 = V_0;
		int32_t L_10 = ___length1;
		ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m053807FC8EB7FEFC0401BA0310209BA0BA500ABD_inline((&L_11), (Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 *)L_8, (intptr_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 )L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9F207A2967317FCB9C21FE47F07500B37E8D937A_gshared_inline (ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tABED881578D8C9FDA62EC8ABBEF6ED3DE2E77113 ));
		return;
	}

IL_0017:
	{
		int32_t L_3 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)L_7))))))
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mEB7901859E1481CF7452D7E4E222A084895E90A5((int32_t)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		int32_t L_8 = ___length2;
		__this->set__length_2(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___array0;
		Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * L_10;
		L_10 = ((  Pinnable_1_tFCE48AB2FE117E9874677DB25CAC24100AAE3B25 * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((RuntimeObject *)(RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		__this->set__pinnable_0(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		intptr_t L_11 = ((PerTypeValues_1_tBFC7CA691B0E0E128A170C4DC9793988BFBFD171_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->get_ArrayAdjustment_2();
		int32_t L_12 = ___start1;
		intptr_t L_13;
		L_13 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((intptr_t)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		__this->set__byteOffset_1((intptr_t)L_13);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ReadOnlySequence_1_SliceImpl_mDA38BC9B76AB3382F264F0D8E1A4F3416F821AF2_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___start0, SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * ___end1, const RuntimeMethod* method)
{
	{
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_0 = ___start0;
		RuntimeObject * L_1;
		L_1 = SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_0, /*hidden argument*/NULL);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_2 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		int32_t L_3;
		L_3 = ((  int32_t (*) (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_4 = (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)__this->get_address_of__sequenceStart_0();
		int32_t L_5;
		L_5 = SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_4, /*hidden argument*/NULL);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_6 = ___end1;
		RuntimeObject * L_7;
		L_7 = SequencePosition_GetObject_m497FD81F05330E3CC31E4282A64F09BF27DDCC54_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_6, /*hidden argument*/NULL);
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_8 = ___end1;
		int32_t L_9;
		L_9 = ((  int32_t (*) (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * L_10 = (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)__this->get_address_of__sequenceEnd_1();
		int32_t L_11;
		L_11 = SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline((SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 *)L_10, /*hidden argument*/NULL);
		ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ReadOnlySequence_1__ctor_m6C861496F987F9BC185787512733CB6108AC8644_inline((&L_12), (RuntimeObject *)L_1, (int32_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648LL))))), (RuntimeObject *)L_7, (int32_t)((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)-2147483648LL))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		return (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 )L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mF16ECDCEEB17C03312B538B096D48A457F41D975_inline (SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequence_1__ctor_m6C861496F987F9BC185787512733CB6108AC8644_gshared_inline (ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908 * __this, RuntimeObject * ___startSegment0, int32_t ___startIndexAndFlags1, RuntimeObject * ___endSegment2, int32_t ___endIndexAndFlags3, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___startSegment0;
		int32_t L_1 = ___startIndexAndFlags1;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_2;
		memset((&L_2), 0, sizeof(L_2));
		SequencePosition__ctor_mADBBB1B327A02C5A125FAF01BF0CAB1B662AC7F3((&L_2), (RuntimeObject *)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set__sequenceStart_0(L_2);
		RuntimeObject * L_3 = ___endSegment2;
		int32_t L_4 = ___endIndexAndFlags3;
		SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  L_5;
		memset((&L_5), 0, sizeof(L_5));
		SequencePosition__ctor_mADBBB1B327A02C5A125FAF01BF0CAB1B662AC7F3((&L_5), (RuntimeObject *)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		__this->set__sequenceEnd_1(L_5);
		return;
	}
}
