#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<ScaleType,System.Object>
struct Dictionary_2_t2839873518;
// System.Collections.Generic.IEqualityComparer`1<ScaleType>
struct IEqualityComparer_1_t2450322975;
// System.Collections.Generic.IDictionary`2<ScaleType,System.Object>
struct IDictionary_2_t4015539305;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<ScaleType,System.Object>[]
struct KeyValuePair_2U5BU5D_t3978057073;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ScaleType,System.Object>>
struct IEnumerator_1_t3811511264;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<ScaleType,System.Object>
struct KeyCollection_t868181502;
// System.Collections.Generic.Dictionary`2/ValueCollection<ScaleType,System.Object>
struct ValueCollection_t467043316;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22328404816.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_ScaleType126056324.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2606901459.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1399025893_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1399025893(__this, method) ((  void (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2__ctor_m1399025893_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1346326236_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1346326236(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1346326236_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3097133523_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3097133523(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3097133523_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m461239990_gshared (Dictionary_2_t2839873518 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m461239990(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2839873518 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m461239990_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2500426762_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2500426762(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2500426762_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3920425126_gshared (Dictionary_2_t2839873518 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3920425126(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2839873518 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3920425126_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2762920323_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2762920323(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2762920323_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3573301864_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3573301864(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3573301864_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3933477609_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3933477609(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3933477609_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m386960550_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m386960550(__this, ___key0, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m386960550_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m456948103_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m456948103(__this, method) ((  bool (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m456948103_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3182061235_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3182061235(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3182061235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3703974667_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3703974667(__this, method) ((  bool (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3703974667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1840852540_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2_t2328404816  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1840852540(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2839873518 *, KeyValuePair_2_t2328404816 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1840852540_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3559442822_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2_t2328404816  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3559442822(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2839873518 *, KeyValuePair_2_t2328404816 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3559442822_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1880459040_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2U5BU5D_t3978057073* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1880459040(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2839873518 *, KeyValuePair_2U5BU5D_t3978057073*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1880459040_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m273127979_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2_t2328404816  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m273127979(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2839873518 *, KeyValuePair_2_t2328404816 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m273127979_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2474466303_gshared (Dictionary_2_t2839873518 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2474466303(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2474466303_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1511528122_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1511528122(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1511528122_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1160657847_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1160657847(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1160657847_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3390926674_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3390926674(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3390926674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4112388045_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4112388045(__this, method) ((  int32_t (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_get_Count_m4112388045_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2434608766_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2434608766(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m2434608766_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1775874533_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1775874533(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2839873518 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1775874533_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1885249629_gshared (Dictionary_2_t2839873518 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1885249629(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2839873518 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1885249629_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2934173946_gshared (Dictionary_2_t2839873518 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2934173946(__this, ___size0, method) ((  void (*) (Dictionary_2_t2839873518 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2934173946_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2768801654_gshared (Dictionary_2_t2839873518 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2768801654(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2768801654_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2328404816  Dictionary_2_make_pair_m914766018_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m914766018(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2328404816  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m914766018_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m697379060_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m697379060(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m697379060_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3855755188_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3855755188(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3855755188_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m489384857_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2U5BU5D_t3978057073* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m489384857(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2839873518 *, KeyValuePair_2U5BU5D_t3978057073*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m489384857_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m477926387_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m477926387(__this, method) ((  void (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_Resize_m477926387_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3744724336_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3744724336(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2839873518 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3744724336_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m3100126480_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3100126480(__this, method) ((  void (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_Clear_m3100126480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m42294518_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m42294518(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2839873518 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m42294518_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1247626742_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1247626742(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m1247626742_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1247687171_gshared (Dictionary_2_t2839873518 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1247687171(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2839873518 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m1247687171_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2311441473_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2311441473(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2311441473_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3416660538_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3416660538(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2839873518 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m3416660538_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3468189519_gshared (Dictionary_2_t2839873518 * __this, int32_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3468189519(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2839873518 *, int32_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3468189519_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::get_Keys()
extern "C"  KeyCollection_t868181502 * Dictionary_2_get_Keys_m2278720528_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2278720528(__this, method) ((  KeyCollection_t868181502 * (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_get_Keys_m2278720528_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::get_Values()
extern "C"  ValueCollection_t467043316 * Dictionary_2_get_Values_m3248398736_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3248398736(__this, method) ((  ValueCollection_t467043316 * (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_get_Values_m3248398736_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m147237967_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m147237967(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m147237967_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m2168069327_gshared (Dictionary_2_t2839873518 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2168069327(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t2839873518 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2168069327_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3981998109_gshared (Dictionary_2_t2839873518 * __this, KeyValuePair_2_t2328404816  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3981998109(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2839873518 *, KeyValuePair_2_t2328404816 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3981998109_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2606901460  Dictionary_2_GetEnumerator_m1922978410_gshared (Dictionary_2_t2839873518 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1922978410(__this, method) ((  Enumerator_t2606901460  (*) (Dictionary_2_t2839873518 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1922978410_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<ScaleType,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m253977657_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m253977657(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m253977657_gshared)(__this /* static, unused */, ___key0, ___value1, method)
