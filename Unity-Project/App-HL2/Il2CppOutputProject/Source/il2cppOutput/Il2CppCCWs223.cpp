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


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t07AF6095EE389AE4CCFE139D70694D09ECE852A3;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_tE529CDCBBC7B22F73D4E99C3EC004C96C4803734;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_t837B26F524AC7A3588EE99533F6319FA0C481FB6;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


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


// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
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
	inline static int32_t get_offset_of__encoder_14() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28, ____encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_14() const { return ____encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_14() { return &____encoder_14; }
	inline void set__encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of__bufferWriter_15() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28, ____bufferWriter_15)); }
	inline RuntimeObject* get__bufferWriter_15() const { return ____bufferWriter_15; }
	inline RuntimeObject** get_address_of__bufferWriter_15() { return &____bufferWriter_15; }
	inline void set__bufferWriter_15(RuntimeObject* value)
	{
		____bufferWriter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferWriter_15), (void*)value);
	}

	inline static int32_t get_offset_of__memory_16() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28, ____memory_16)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_16() const { return ____memory_16; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_16() { return &____memory_16; }
	inline void set__memory_16(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_16))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__memoryUsed_17() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28, ____memoryUsed_17)); }
	inline int32_t get__memoryUsed_17() const { return ____memoryUsed_17; }
	inline int32_t* get_address_of__memoryUsed_17() { return &____memoryUsed_17; }
	inline void set__memoryUsed_17(int32_t value)
	{
		____memoryUsed_17 = value;
	}
};

struct Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_StaticFields
{
public:
	// System.Text.UTF8Encoding Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_utf8NoBom
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ____utf8NoBom_11;
	// System.Int32 Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::MaximumBytesPerUtf8Char
	int32_t ___MaximumBytesPerUtf8Char_12;

public:
	inline static int32_t get_offset_of__utf8NoBom_11() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_StaticFields, ____utf8NoBom_11)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get__utf8NoBom_11() const { return ____utf8NoBom_11; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of__utf8NoBom_11() { return &____utf8NoBom_11; }
	inline void set__utf8NoBom_11(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		____utf8NoBom_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8NoBom_11), (void*)value);
	}

	inline static int32_t get_offset_of_MaximumBytesPerUtf8Char_12() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_StaticFields, ___MaximumBytesPerUtf8Char_12)); }
	inline int32_t get_MaximumBytesPerUtf8Char_12() const { return ___MaximumBytesPerUtf8Char_12; }
	inline int32_t* get_address_of_MaximumBytesPerUtf8Char_12() { return &___MaximumBytesPerUtf8Char_12; }
	inline void set_MaximumBytesPerUtf8Char_12(int32_t value)
	{
		___MaximumBytesPerUtf8Char_12 = value;
	}
};

struct Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_cachedInstance
	Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28 * ____cachedInstance_13;

public:
	inline static int32_t get_offset_of__cachedInstance_13() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ThreadStaticFields, ____cachedInstance_13)); }
	inline Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28 * get__cachedInstance_13() const { return ____cachedInstance_13; }
	inline Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28 ** get_address_of__cachedInstance_13() { return &____cachedInstance_13; }
	inline void set__cachedInstance_13(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28 * value)
	{
		____cachedInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_13), (void*)value);
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


// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
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
	inline static int32_t get_offset_of__encoder_14() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242, ____encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_14() const { return ____encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_14() { return &____encoder_14; }
	inline void set__encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of__bufferWriter_15() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242, ____bufferWriter_15)); }
	inline RuntimeObject* get__bufferWriter_15() const { return ____bufferWriter_15; }
	inline RuntimeObject** get_address_of__bufferWriter_15() { return &____bufferWriter_15; }
	inline void set__bufferWriter_15(RuntimeObject* value)
	{
		____bufferWriter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bufferWriter_15), (void*)value);
	}

	inline static int32_t get_offset_of__memory_16() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242, ____memory_16)); }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  get__memory_16() const { return ____memory_16; }
	inline Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1 * get_address_of__memory_16() { return &____memory_16; }
	inline void set__memory_16(Memory_1_t90F56BFA15005E9D1FEDB99DF469AF3BF6BA60C1  value)
	{
		____memory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____memory_16))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__memoryUsed_17() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242, ____memoryUsed_17)); }
	inline int32_t get__memoryUsed_17() const { return ____memoryUsed_17; }
	inline int32_t* get_address_of__memoryUsed_17() { return &____memoryUsed_17; }
	inline void set__memoryUsed_17(int32_t value)
	{
		____memoryUsed_17 = value;
	}
};

struct Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_StaticFields
{
public:
	// System.Text.UTF8Encoding Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_utf8NoBom
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ____utf8NoBom_11;
	// System.Int32 Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::MaximumBytesPerUtf8Char
	int32_t ___MaximumBytesPerUtf8Char_12;

public:
	inline static int32_t get_offset_of__utf8NoBom_11() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_StaticFields, ____utf8NoBom_11)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get__utf8NoBom_11() const { return ____utf8NoBom_11; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of__utf8NoBom_11() { return &____utf8NoBom_11; }
	inline void set__utf8NoBom_11(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		____utf8NoBom_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8NoBom_11), (void*)value);
	}

	inline static int32_t get_offset_of_MaximumBytesPerUtf8Char_12() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_StaticFields, ___MaximumBytesPerUtf8Char_12)); }
	inline int32_t get_MaximumBytesPerUtf8Char_12() const { return ___MaximumBytesPerUtf8Char_12; }
	inline int32_t* get_address_of_MaximumBytesPerUtf8Char_12() { return &___MaximumBytesPerUtf8Char_12; }
	inline void set_MaximumBytesPerUtf8Char_12(int32_t value)
	{
		___MaximumBytesPerUtf8Char_12 = value;
	}
};

struct Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.Utf8BufferTextWriter Microsoft.AspNetCore.Internal.Utf8BufferTextWriter::_cachedInstance
	Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242 * ____cachedInstance_13;

public:
	inline static int32_t get_offset_of__cachedInstance_13() { return static_cast<int32_t>(offsetof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ThreadStaticFields, ____cachedInstance_13)); }
	inline Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242 * get__cachedInstance_13() const { return ____cachedInstance_13; }
	inline Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242 ** get_address_of__cachedInstance_13() { return &____cachedInstance_13; }
	inline void set__cachedInstance_13(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242 * value)
	{
		____cachedInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_13), (void*)value);
	}
};


// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.Text.Decoder Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ____decoder_4;
	// System.Buffers.ReadOnlySequence`1<System.Byte> Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_utf8Buffer
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____utf8Buffer_5;

public:
	inline static int32_t get_offset_of__decoder_4() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C, ____decoder_4)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get__decoder_4() const { return ____decoder_4; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of__decoder_4() { return &____decoder_4; }
	inline void set__decoder_4(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		____decoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__utf8Buffer_5() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C, ____utf8Buffer_5)); }
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

struct Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_cachedInstance
	Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C * ____cachedInstance_6;

public:
	inline static int32_t get_offset_of__cachedInstance_6() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ThreadStaticFields, ____cachedInstance_6)); }
	inline Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C * get__cachedInstance_6() const { return ____cachedInstance_6; }
	inline Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C ** get_address_of__cachedInstance_6() { return &____cachedInstance_6; }
	inline void set__cachedInstance_6(Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C * value)
	{
		____cachedInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_6), (void*)value);
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


// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.Text.Decoder Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ____decoder_4;
	// System.Buffers.ReadOnlySequence`1<System.Byte> Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_utf8Buffer
	ReadOnlySequence_1_tE0F2EAB117864FD3D9F8C583223E60E14BC17908  ____utf8Buffer_5;

public:
	inline static int32_t get_offset_of__decoder_4() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C, ____decoder_4)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get__decoder_4() const { return ____decoder_4; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of__decoder_4() { return &____decoder_4; }
	inline void set__decoder_4(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		____decoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__utf8Buffer_5() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C, ____utf8Buffer_5)); }
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

struct Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader::_cachedInstance
	Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C * ____cachedInstance_6;

public:
	inline static int32_t get_offset_of__cachedInstance_6() { return static_cast<int32_t>(offsetof(Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ThreadStaticFields, ____cachedInstance_6)); }
	inline Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C * get__cachedInstance_6() const { return ____cachedInstance_6; }
	inline Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C ** get_address_of__cachedInstance_6() { return &____cachedInstance_6; }
	inline void set__cachedInstance_6(Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C * value)
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextReader_t8554400D9B600257CED5D4E6C4106047467C036C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextReader_tA16C0DE0C3E6A0AB2BA27D70570BAF7AA23E316C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.SignalR.Internal.Utf8BufferTextReader
struct Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextWriter_tB16B4BB7C209406297B8498CCED03FFD95DB4DFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextWriter_t0FE68C02C382C5E039D30FCFD7A34C638891ED28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextWriter_t81346B526C17345AA0E1B30A9935296BB3360F69_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.Utf8BufferTextWriter
struct Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Utf8JsonWriter_t314292A2319664F17B572000E234ED0D5242B236_ComCallableWrapper(obj));
}
