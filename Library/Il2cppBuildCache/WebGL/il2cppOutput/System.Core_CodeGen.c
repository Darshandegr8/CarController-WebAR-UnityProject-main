#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void System.Action`9::.ctor(System.Object,System.IntPtr)
// 0x00000002 System.Void System.Action`9::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9)
// 0x00000003 System.IAsyncResult System.Action`9::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,System.AsyncCallback,System.Object)
// 0x00000004 System.Void System.Action`9::EndInvoke(System.IAsyncResult)
// 0x00000005 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000006 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000007 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000008 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000010 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000011 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000013 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000014 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000017 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000019 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000020 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000027 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000028 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000029 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000002A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000002B System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000002C System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000002D System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000002E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000002F System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000030 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000031 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000032 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000033 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000034 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000035 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000036 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000037 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000038 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000039 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000003A System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000003B System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000003C System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000003D System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000003E System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000003F System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000040 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000041 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000042 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000043 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[68] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
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
};
static const int32_t s_InvokerIndices[68] = 
{
	-1,
	-1,
	-1,
	-1,
	1880,
	1959,
	1959,
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
};
static const Il2CppTokenRangePair s_rgctxIndices[14] = 
{
	{ 0x02000005, { 28, 4 } },
	{ 0x02000006, { 32, 9 } },
	{ 0x02000007, { 41, 7 } },
	{ 0x02000008, { 48, 10 } },
	{ 0x02000009, { 58, 1 } },
	{ 0x0200000A, { 59, 21 } },
	{ 0x0200000C, { 80, 2 } },
	{ 0x06000008, { 0, 10 } },
	{ 0x06000009, { 10, 5 } },
	{ 0x0600000A, { 15, 4 } },
	{ 0x0600000B, { 19, 3 } },
	{ 0x0600000C, { 22, 1 } },
	{ 0x0600000D, { 23, 3 } },
	{ 0x0600000E, { 26, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[82] = 
{
	{ (Il2CppRGCTXDataType)2, 999 },
	{ (Il2CppRGCTXDataType)3, 2948 },
	{ (Il2CppRGCTXDataType)2, 1666 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)3, 5165 },
	{ (Il2CppRGCTXDataType)2, 1046 },
	{ (Il2CppRGCTXDataType)2, 1397 },
	{ (Il2CppRGCTXDataType)3, 5178 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)3, 5171 },
	{ (Il2CppRGCTXDataType)2, 386 },
	{ (Il2CppRGCTXDataType)3, 14 },
	{ (Il2CppRGCTXDataType)3, 15 },
	{ (Il2CppRGCTXDataType)2, 670 },
	{ (Il2CppRGCTXDataType)3, 2186 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)2, 713 },
	{ (Il2CppRGCTXDataType)2, 780 },
	{ (Il2CppRGCTXDataType)2, 817 },
	{ (Il2CppRGCTXDataType)2, 781 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)3, 2187 },
	{ (Il2CppRGCTXDataType)2, 776 },
	{ (Il2CppRGCTXDataType)2, 777 },
	{ (Il2CppRGCTXDataType)2, 816 },
	{ (Il2CppRGCTXDataType)3, 2185 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)2, 779 },
	{ (Il2CppRGCTXDataType)3, 2949 },
	{ (Il2CppRGCTXDataType)3, 2951 },
	{ (Il2CppRGCTXDataType)2, 271 },
	{ (Il2CppRGCTXDataType)3, 2950 },
	{ (Il2CppRGCTXDataType)3, 2959 },
	{ (Il2CppRGCTXDataType)2, 1002 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)3, 5172 },
	{ (Il2CppRGCTXDataType)3, 2960 },
	{ (Il2CppRGCTXDataType)2, 797 },
	{ (Il2CppRGCTXDataType)2, 833 },
	{ (Il2CppRGCTXDataType)3, 2191 },
	{ (Il2CppRGCTXDataType)3, 6135 },
	{ (Il2CppRGCTXDataType)3, 2952 },
	{ (Il2CppRGCTXDataType)2, 1001 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)3, 5166 },
	{ (Il2CppRGCTXDataType)3, 2190 },
	{ (Il2CppRGCTXDataType)3, 2953 },
	{ (Il2CppRGCTXDataType)3, 6134 },
	{ (Il2CppRGCTXDataType)3, 2966 },
	{ (Il2CppRGCTXDataType)2, 1003 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 5179 },
	{ (Il2CppRGCTXDataType)3, 3229 },
	{ (Il2CppRGCTXDataType)3, 1553 },
	{ (Il2CppRGCTXDataType)3, 2192 },
	{ (Il2CppRGCTXDataType)3, 1552 },
	{ (Il2CppRGCTXDataType)3, 2967 },
	{ (Il2CppRGCTXDataType)3, 6136 },
	{ (Il2CppRGCTXDataType)3, 2189 },
	{ (Il2CppRGCTXDataType)3, 1911 },
	{ (Il2CppRGCTXDataType)2, 605 },
	{ (Il2CppRGCTXDataType)3, 2341 },
	{ (Il2CppRGCTXDataType)3, 2342 },
	{ (Il2CppRGCTXDataType)3, 2347 },
	{ (Il2CppRGCTXDataType)2, 862 },
	{ (Il2CppRGCTXDataType)3, 2344 },
	{ (Il2CppRGCTXDataType)3, 6337 },
	{ (Il2CppRGCTXDataType)2, 586 },
	{ (Il2CppRGCTXDataType)3, 1548 },
	{ (Il2CppRGCTXDataType)1, 766 },
	{ (Il2CppRGCTXDataType)2, 1685 },
	{ (Il2CppRGCTXDataType)3, 2343 },
	{ (Il2CppRGCTXDataType)1, 1685 },
	{ (Il2CppRGCTXDataType)1, 862 },
	{ (Il2CppRGCTXDataType)2, 1721 },
	{ (Il2CppRGCTXDataType)2, 1685 },
	{ (Il2CppRGCTXDataType)3, 2348 },
	{ (Il2CppRGCTXDataType)3, 2346 },
	{ (Il2CppRGCTXDataType)3, 2345 },
	{ (Il2CppRGCTXDataType)2, 190 },
	{ (Il2CppRGCTXDataType)3, 1554 },
	{ (Il2CppRGCTXDataType)2, 277 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	68,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	14,
	s_rgctxIndices,
	82,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
