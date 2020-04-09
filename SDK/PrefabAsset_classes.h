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

// Class PrefabAsset.PrefabActor
// 0x0000
class PrefabActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabActor");
		return ptr;
	}

};


// Class PrefabAsset.PrefabAsset
// 0x0000
class PrefabAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x0000
class PrefabComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0000
class PrefabToolSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
