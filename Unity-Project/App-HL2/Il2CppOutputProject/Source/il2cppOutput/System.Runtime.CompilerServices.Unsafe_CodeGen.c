#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Void*)
// 0x00000003 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::Write(System.Void*,T)
// 0x00000005 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Void*,T)
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::Copy(System.Void*,T&)
// 0x00000008 System.Void System.Runtime.CompilerServices.Unsafe::Copy(T&,System.Void*)
// 0x00000009 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x0000000A System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x0000000B System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlock_mD3B0E24DAF65F9968B75614B4C9B0F974F76961A (void);
// 0x0000000C System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m187BCE6151243C8E650106A2C955D26A251AC18A (void);
// 0x0000000D System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715 (void);
// 0x0000000E System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m295B2DA91B1E4240ACF1C07116CC19D311854D3C (void);
// 0x0000000F System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_m18FC84A587659D38C0223B1520CCF5806EC8B063 (void);
// 0x00000010 System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_mBFFB52D5C7E8F1A0645EE294169164380F7AB248 (void);
// 0x00000011 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m56F89C6D5CFF803CE936EA77A2447A12161F578B (void);
// 0x00000012 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m20080226AE469468692CA9DDA0F4BD91440DB07F (void);
// 0x00000013 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000014 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000015 T& System.Runtime.CompilerServices.Unsafe::AsRef(T&)
// 0x00000016 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000017 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000018 System.Void* System.Runtime.CompilerServices.Unsafe::Add(System.Void*,System.Int32)
// 0x00000019 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000001A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000001B T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.Int32)
// 0x0000001C System.Void* System.Runtime.CompilerServices.Unsafe::Subtract(System.Void*,System.Int32)
// 0x0000001D T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.IntPtr)
// 0x0000001E T& System.Runtime.CompilerServices.Unsafe::SubtractByteOffset(T&,System.IntPtr)
// 0x0000001F System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x00000020 System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000021 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressGreaterThan(T&,T&)
// 0x00000022 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan(T&,T&)
// 0x00000023 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m7AC90161CCFFFDB7D6D2F0D966E48DD4152C336F (void);
// 0x00000024 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_m50D6D16108F43A95F4A61D5A1F7E027DC0584875 (void);
static Il2CppMethodPointer s_methodPointers[36] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_mD3B0E24DAF65F9968B75614B4C9B0F974F76961A,
	Unsafe_CopyBlock_m187BCE6151243C8E650106A2C955D26A251AC18A,
	Unsafe_CopyBlockUnaligned_m141F5A0F860ABADB3F02BC5F5C518E7B1655D715,
	Unsafe_CopyBlockUnaligned_m295B2DA91B1E4240ACF1C07116CC19D311854D3C,
	Unsafe_InitBlock_m18FC84A587659D38C0223B1520CCF5806EC8B063,
	Unsafe_InitBlock_mBFFB52D5C7E8F1A0645EE294169164380F7AB248,
	Unsafe_InitBlockUnaligned_m56F89C6D5CFF803CE936EA77A2447A12161F578B,
	Unsafe_InitBlockUnaligned_m20080226AE469468692CA9DDA0F4BD91440DB07F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m7AC90161CCFFFDB7D6D2F0D966E48DD4152C336F,
	IsReadOnlyAttribute__ctor_m50D6D16108F43A95F4A61D5A1F7E027DC0584875,
};
static const int32_t s_InvokerIndices[36] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	11364,
	11364,
	11364,
	11364,
	11391,
	11391,
	11391,
	11391,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	9469,
	9469,
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0600000A, { 0, 1 } },
	{ 0x06000017, { 1, 1 } },
	{ 0x06000018, { 2, 1 } },
	{ 0x06000019, { 3, 1 } },
	{ 0x0600001B, { 4, 1 } },
	{ 0x0600001C, { 5, 1 } },
	{ 0x0600001D, { 6, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[7] = 
{
	{ (Il2CppRGCTXDataType)2, 1121 },
	{ (Il2CppRGCTXDataType)2, 1135 },
	{ (Il2CppRGCTXDataType)2, 1128 },
	{ (Il2CppRGCTXDataType)2, 1136 },
	{ (Il2CppRGCTXDataType)2, 1140 },
	{ (Il2CppRGCTXDataType)2, 1130 },
	{ (Il2CppRGCTXDataType)2, 1141 },
};
extern const CustomAttributesCacheGenerator g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	36,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	7,
	s_rgctxIndices,
	7,
	s_rgctxValues,
	NULL,
	g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
