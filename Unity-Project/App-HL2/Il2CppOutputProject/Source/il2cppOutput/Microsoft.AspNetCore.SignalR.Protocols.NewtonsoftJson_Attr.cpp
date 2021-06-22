#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyMetadataAttribute
struct AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53;
// System.Resources.NeutralResourcesLanguageAttribute
struct NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;
// System.ThreadStaticAttribute
struct ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyMetadataAttribute
struct AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyMetadataAttribute::m_key
	String_t* ___m_key_0;
	// System.String System.Reflection.AssemblyMetadataAttribute::m_value
	String_t* ___m_value_1;

public:
	inline static int32_t get_offset_of_m_key_0() { return static_cast<int32_t>(offsetof(AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F, ___m_key_0)); }
	inline String_t* get_m_key_0() const { return ___m_key_0; }
	inline String_t** get_address_of_m_key_0() { return &___m_key_0; }
	inline void set_m_key_0(String_t* value)
	{
		___m_key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_key_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_1), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
	}
};


// System.ThreadStaticAttribute
struct ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Resources.NeutralResourcesLanguageAttribute
struct NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::_culture
	String_t* ____culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::_fallbackLoc
	int32_t ____fallbackLoc_1;

public:
	inline static int32_t get_offset_of__culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2, ____culture_0)); }
	inline String_t* get__culture_0() const { return ____culture_0; }
	inline String_t** get_address_of__culture_0() { return &____culture_0; }
	inline void set__culture_0(String_t* value)
	{
		____culture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_0), (void*)value);
	}

	inline static int32_t get_offset_of__fallbackLoc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2, ____fallbackLoc_1)); }
	inline int32_t get__fallbackLoc_1() const { return ____fallbackLoc_1; }
	inline int32_t* get_address_of__fallbackLoc_1() { return &____fallbackLoc_1; }
	inline void set__fallbackLoc_1(int32_t value)
	{
		____fallbackLoc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyMetadataAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529 (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeutralResourcesLanguageAttribute__ctor_mF2BB52FC7FE116CCA2AEDD08A2DA1DF7055B56AF (NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2 * __this, String_t* ___cultureName0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m430D19114B2F57EFC262D4683F4FE723015618B7 (EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ThreadStaticAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStaticAttribute__ctor_m2F60E2FA27DEC1E9FE581440EF3445F3B5E7F16A (ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mB80A569AC13BE0C316FFD2299FDFE2B3C9CDE5ED (IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53 * __this, const RuntimeMethod* method);
static void Microsoft_AspNetCore_SignalR_Protocols_NewtonsoftJson_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * tmp = (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F *)cache->attributes[1];
		AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6D\x6D\x69\x74\x48\x61\x73\x68"), il2cpp_codegen_string_new_wrapper("\x64\x61\x36\x65\x33\x34\x62\x33\x65\x31\x37\x62\x61\x63\x38\x66\x64\x31\x66\x37\x38\x63\x37\x65\x37\x36\x64\x37\x65\x64\x36\x31\x39\x32\x35\x31\x34\x36\x35\x31"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[2];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x69\x63\x72\x6F\x73\x6F\x66\x74\x20\x43\x6F\x72\x70\x6F\x72\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * tmp = (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F *)cache->attributes[3];
		AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x72\x76\x69\x63\x65\x61\x62\x6C\x65"), il2cpp_codegen_string_new_wrapper("\x54\x72\x75\x65"), NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[4];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[5];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[6];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[7];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[8];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x6C\x65\x61\x73\x65"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[9];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x69\x63\x72\x6F\x73\x6F\x66\x74\x2E\x41\x73\x70\x4E\x65\x74\x43\x6F\x72\x65\x2E\x53\x69\x67\x6E\x61\x6C\x52\x2E\x50\x72\x6F\x74\x6F\x63\x6F\x6C\x73\x2E\x4E\x65\x77\x74\x6F\x6E\x73\x6F\x66\x74\x4A\x73\x6F\x6E"), NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[10];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x69\x63\x72\x6F\x73\x6F\x66\x74\x20\x41\x53\x50\x2E\x4E\x45\x54\x20\x43\x6F\x72\x65"), NULL);
	}
	{
		NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2 * tmp = (NeutralResourcesLanguageAttribute_t14C9436446C8E9EB3C2244D386AF1C84ADC80FB2 *)cache->attributes[11];
		NeutralResourcesLanguageAttribute__ctor_mF2BB52FC7FE116CCA2AEDD08A2DA1DF7055B56AF(tmp, il2cpp_codegen_string_new_wrapper("\x65\x6E\x2D\x55\x53"), NULL);
	}
	{
		AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * tmp = (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F *)cache->attributes[12];
		AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x70\x6F\x73\x69\x74\x6F\x72\x79\x55\x72\x6C"), il2cpp_codegen_string_new_wrapper("\x68\x74\x74\x70\x73\x3A\x2F\x2F\x67\x69\x74\x68\x75\x62\x2E\x63\x6F\x6D\x2F\x64\x6F\x74\x6E\x65\x74\x2F\x61\x73\x70\x6E\x65\x74\x63\x6F\x72\x65"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[13];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x73\x20\x74\x68\x65\x20\x53\x69\x67\x6E\x61\x6C\x52\x20\x48\x75\x62\x20\x50\x72\x6F\x74\x6F\x63\x6F\x6C\x20\x75\x73\x69\x6E\x67\x20\x4E\x65\x77\x74\x6F\x6E\x73\x6F\x66\x74\x2E\x4A\x73\x6F\x6E\x2E"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[14];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\xC2\xA9\x20\x4D\x69\x63\x72\x6F\x73\x6F\x66\x74\x20\x43\x6F\x72\x70\x6F\x72\x61\x74\x69\x6F\x6E\x2E\x20\x41\x6C\x6C\x20\x72\x69\x67\x68\x74\x73\x20\x72\x65\x73\x65\x72\x76\x65\x64\x2E"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[15];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x35\x2E\x30\x2E\x30\x2D\x70\x72\x65\x76\x69\x65\x77\x2E\x36\x2E\x32\x30\x33\x31\x32\x2E\x31\x35"), NULL);
	}
	{
		AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F * tmp = (AssemblyMetadataAttribute_tC11B256960EB0C004D873A8822B5F84C5590455F *)cache->attributes[16];
		AssemblyMetadataAttribute__ctor_m5A4B63DCD1CCB566C877C0CFCD9FE0BBDD249529(tmp, il2cpp_codegen_string_new_wrapper("\x53\x6F\x75\x72\x63\x65\x43\x6F\x6D\x6D\x69\x74\x55\x72\x6C"), il2cpp_codegen_string_new_wrapper("\x68\x74\x74\x70\x73\x3A\x2F\x2F\x67\x69\x74\x68\x75\x62\x2E\x63\x6F\x6D\x2F\x64\x6F\x74\x6E\x65\x74\x2F\x61\x73\x70\x6E\x65\x74\x63\x6F\x72\x65\x2F\x74\x72\x65\x65\x2F\x64\x61\x36\x65\x33\x34\x62\x33\x65\x31\x37\x62\x61\x63\x38\x66\x64\x31\x66\x37\x38\x63\x37\x65\x37\x36\x64\x37\x65\x64\x36\x31\x39\x32\x35\x31\x34\x36\x35\x31"), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[17];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x35\x2E\x30\x2E\x32\x30\x2E\x33\x31\x32\x31\x35"), NULL);
	}
}
static void EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9 * tmp = (EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9 *)cache->attributes[0];
		EmbeddedAttribute__ctor_m430D19114B2F57EFC262D4683F4FE723015618B7(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9 * tmp = (EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9 *)cache->attributes[1];
		EmbeddedAttribute__ctor_m430D19114B2F57EFC262D4683F4FE723015618B7(tmp, NULL);
	}
}
static void NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator_NewtonsoftJsonProtocolDependencyInjectionExtensions_AddNewtonsoftJsonProtocol_m56B1D127AFBE40E07799CEB0FC79AC824C3C209E(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator_NewtonsoftJsonProtocolDependencyInjectionExtensions_AddNewtonsoftJsonProtocol_mA3DACC6CE042EFC079D5E32284619D7AB947C7A5(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__0_1_tD63F4633C02190C6B71AE04DFB9DD02F621C89C4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_CustomAttributesCacheGenerator__cachedInstance(CustomAttributesCache* cache)
{
	{
		ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14 * tmp = (ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14 *)cache->attributes[0];
		ThreadStaticAttribute__ctor_m2F60E2FA27DEC1E9FE581440EF3445F3B5E7F16A(tmp, NULL);
	}
}
static void NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_U3CPayloadSerializerSettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocolOptions_get_PayloadSerializerSettings_mAC8CDD2D7B2373355256C025F8E87C0A5ACB48A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocolOptions_set_PayloadSerializerSettings_mE93F0905357A2AD787F4C492E473DE87E212348B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator__cachedInstance(CustomAttributesCache* cache)
{
	{
		ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14 * tmp = (ThreadStaticAttribute_tD3A8F4870EC5B163383AB888C364217A38134F14 *)cache->attributes[0];
		ThreadStaticAttribute__ctor_m2F60E2FA27DEC1E9FE581440EF3445F3B5E7F16A(tmp, NULL);
	}
}
static void Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator_Utf8BufferTextReader_Get_m04D934970C12A38DDD8D95F89FECE102D0584793____utf8Buffer0(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53 * tmp = (IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_mB80A569AC13BE0C316FFD2299FDFE2B3C9CDE5ED(tmp, NULL);
	}
}
static void Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator_Utf8BufferTextReader_SetBuffer_m3CF3B9FD854B8AF293ACBDC71CC4FE36F31C1787____utf8Buffer0(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53 * tmp = (IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_mB80A569AC13BE0C316FFD2299FDFE2B3C9CDE5ED(tmp, NULL);
	}
}
static void NewtonsoftJsonHubProtocol_t2424822FED01EA4E5554B45E1C4BAA7EE3F6B553_CustomAttributesCacheGenerator_U3CPayloadSerializerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NewtonsoftJsonHubProtocol_t2424822FED01EA4E5554B45E1C4BAA7EE3F6B553_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocol_get_PayloadSerializer_mAB5B29C6737E49311730CDBAE40390FF62340709(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t2D1239D2BB4EBE654B7A6B72459B1ED55F0E331B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Microsoft_AspNetCore_SignalR_Protocols_NewtonsoftJson_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Microsoft_AspNetCore_SignalR_Protocols_NewtonsoftJson_AttributeGenerators[17] = 
{
	EmbeddedAttribute_tBE9646C53C23DEB0224729FB85067AFE2DEC8CD9_CustomAttributesCacheGenerator,
	IsReadOnlyAttribute_tA2E465CE907E2D01ADFABFE597FFA05567882E53_CustomAttributesCacheGenerator,
	NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator,
	U3CU3Ec__0_1_tD63F4633C02190C6B71AE04DFB9DD02F621C89C4_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t2D1239D2BB4EBE654B7A6B72459B1ED55F0E331B_CustomAttributesCacheGenerator,
	Utf8BufferTextWriter_tA8F0B6A5D18EAAC3F9F7644E4E241EADA1203242_CustomAttributesCacheGenerator__cachedInstance,
	NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_U3CPayloadSerializerSettingsU3Ek__BackingField,
	Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator__cachedInstance,
	NewtonsoftJsonHubProtocol_t2424822FED01EA4E5554B45E1C4BAA7EE3F6B553_CustomAttributesCacheGenerator_U3CPayloadSerializerU3Ek__BackingField,
	NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator_NewtonsoftJsonProtocolDependencyInjectionExtensions_AddNewtonsoftJsonProtocol_m56B1D127AFBE40E07799CEB0FC79AC824C3C209E,
	NewtonsoftJsonProtocolDependencyInjectionExtensions_t3A6489272FA71F84D90A4529F648C2298C52BA14_CustomAttributesCacheGenerator_NewtonsoftJsonProtocolDependencyInjectionExtensions_AddNewtonsoftJsonProtocol_mA3DACC6CE042EFC079D5E32284619D7AB947C7A5,
	NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocolOptions_get_PayloadSerializerSettings_mAC8CDD2D7B2373355256C025F8E87C0A5ACB48A4,
	NewtonsoftJsonHubProtocolOptions_tB97CD8FFEDC16321D4DECC57C4BEDF74C81B0164_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocolOptions_set_PayloadSerializerSettings_mE93F0905357A2AD787F4C492E473DE87E212348B,
	NewtonsoftJsonHubProtocol_t2424822FED01EA4E5554B45E1C4BAA7EE3F6B553_CustomAttributesCacheGenerator_NewtonsoftJsonHubProtocol_get_PayloadSerializer_mAB5B29C6737E49311730CDBAE40390FF62340709,
	Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator_Utf8BufferTextReader_Get_m04D934970C12A38DDD8D95F89FECE102D0584793____utf8Buffer0,
	Utf8BufferTextReader_t76E7C46AA655C4696D636251E14442601B03497C_CustomAttributesCacheGenerator_Utf8BufferTextReader_SetBuffer_m3CF3B9FD854B8AF293ACBDC71CC4FE36F31C1787____utf8Buffer0,
	Microsoft_AspNetCore_SignalR_Protocols_NewtonsoftJson_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
