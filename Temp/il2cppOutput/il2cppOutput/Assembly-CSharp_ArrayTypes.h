#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// MusicNote
struct MusicNote_t2393937815;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_MusicNote2393937815.h"
#include "AssemblyU2DCSharp_ScaleDegree404253846.h"
#include "AssemblyU2DCSharp_ScaleType126056324.h"

#pragma once
// MusicNote[]
struct MusicNoteU5BU5D_t1584741422  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) MusicNote_t2393937815 * m_Items[1];

public:
	inline MusicNote_t2393937815 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline MusicNote_t2393937815 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, MusicNote_t2393937815 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ScaleDegree[]
struct ScaleDegreeU5BU5D_t2216153171  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ScaleType[]
struct ScaleTypeU5BU5D_t3321939437  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
