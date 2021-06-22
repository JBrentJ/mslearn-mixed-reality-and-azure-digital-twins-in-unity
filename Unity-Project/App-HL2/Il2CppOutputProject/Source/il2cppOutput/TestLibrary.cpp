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
// System.String
struct String_t;
// TestLibrary.User
struct User_tCE8330BD763C2377B0D61452099D03C066C95E88;
// TestLibrary.UserNoEnum
struct UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7049A03590A5723DB1F20D1DCEC94DEC9BA64D2F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// TestLibrary.UserNoEnum
struct UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5  : public RuntimeObject
{
public:
	// System.String TestLibrary.UserNoEnum::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 TestLibrary.UserNoEnum::<Age>k__BackingField
	int32_t ___U3CAgeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAgeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5, ___U3CAgeU3Ek__BackingField_1)); }
	inline int32_t get_U3CAgeU3Ek__BackingField_1() const { return ___U3CAgeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CAgeU3Ek__BackingField_1() { return &___U3CAgeU3Ek__BackingField_1; }
	inline void set_U3CAgeU3Ek__BackingField_1(int32_t value)
	{
		___U3CAgeU3Ek__BackingField_1 = value;
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


// TestLibrary.UserEnum
struct UserEnum_tFBB88C80F1D903D5A4939206F2009549ABDA4B90 
{
public:
	// System.Int32 TestLibrary.UserEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserEnum_tFBB88C80F1D903D5A4939206F2009549ABDA4B90, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TestLibrary.User
struct User_tCE8330BD763C2377B0D61452099D03C066C95E88  : public RuntimeObject
{
public:
	// System.String TestLibrary.User::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 TestLibrary.User::<Age>k__BackingField
	int32_t ___U3CAgeU3Ek__BackingField_1;
	// TestLibrary.UserEnum TestLibrary.User::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(User_tCE8330BD763C2377B0D61452099D03C066C95E88, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAgeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(User_tCE8330BD763C2377B0D61452099D03C066C95E88, ___U3CAgeU3Ek__BackingField_1)); }
	inline int32_t get_U3CAgeU3Ek__BackingField_1() const { return ___U3CAgeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CAgeU3Ek__BackingField_1() { return &___U3CAgeU3Ek__BackingField_1; }
	inline void set_U3CAgeU3Ek__BackingField_1(int32_t value)
	{
		___U3CAgeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(User_tCE8330BD763C2377B0D61452099D03C066C95E88, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.String TestLibrary.User::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* User_get_Name_mA00F3D53E1809D006F08FE95E153D652A7EEB39F (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void TestLibrary.User::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_set_Name_m356DEF3DDEFEF510FE9721C851DB600AEC31FCC0 (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 TestLibrary.User::get_Age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t User_get_Age_mC945AE1262937A3F4B19DF2D325E15F9B8C84238 (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAgeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void TestLibrary.User::set_Age(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_set_Age_m4F54CC1E17A683AFF75B00BBFC05077EB5096D7D (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAgeU3Ek__BackingField_1(L_0);
		return;
	}
}
// TestLibrary.UserEnum TestLibrary.User::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t User_get_Status_m0BC6B7BCBA0F9ADF13E1D5A7768B22B4BE08AE4D (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void TestLibrary.User::set_Status(TestLibrary.UserEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_set_Status_m500432C3DBDDACE67094A21858A06F20A14FFC58 (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void TestLibrary.User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m0CE6B06042EFAA8AEEF5DD69FE97E7573974C6EB (User_tCE8330BD763C2377B0D61452099D03C066C95E88 * __this, const RuntimeMethod* method)
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
// System.String TestLibrary.UserNoEnum::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserNoEnum_get_Name_m7EC4C947D1EF328F042350A7E848DB049402D1A7 (UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void TestLibrary.UserNoEnum::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNoEnum_set_Name_m4F1C1AF02D2720AAC4BD10937953B22699AF76F3 (UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 TestLibrary.UserNoEnum::get_Age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserNoEnum_get_Age_mC8E916B1DE725E2710F1D66ED107B2B36A4F6E64 (UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAgeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void TestLibrary.UserNoEnum::set_Age(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNoEnum_set_Age_m1345EEBB277485FC14367B43552FD09D71BEA056 (UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAgeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void TestLibrary.UserNoEnum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNoEnum__ctor_m45B8334CAE52B654D782660B873C0DFF86879F37 (UserNoEnum_tBD88324E2D9B3A4B4CBF756A978E7BFF17B800C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
