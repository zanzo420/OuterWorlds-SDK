#pragma once

// Name: TheOuterWorlds, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class BuildPatchServices.BuildPatchManifest
// 0x0000
class BuildPatchManifest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
