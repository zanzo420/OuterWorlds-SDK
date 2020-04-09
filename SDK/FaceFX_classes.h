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

// Class FaceFX.FaceFXAsset
// 0x0000
class FaceFXAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAsset");
		return ptr;
	}

};


// Class FaceFX.FaceFXActor
// 0x0000
class FaceFXActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXActor");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnim
// 0x0000
class FaceFXAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnim");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationSection
// 0x0000
class FaceFXAnimationSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationSection");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationTrack
// 0x0000
class FaceFXAnimationTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationTrack");
		return ptr;
	}

};


// Class FaceFX.FaceFXCharacter
// 0x0000
class FaceFXCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXCharacter");
		return ptr;
	}

};


// Class FaceFX.FaceFXComponent
// 0x0000
class FaceFXComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXComponent");
		return ptr;
	}

};


// Class FaceFX.FaceFXMatineeControl
// 0x0000
class FaceFXMatineeControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControl");
		return ptr;
	}

};


// Class FaceFX.FaceFXMatineeControlInst
// 0x0000
class FaceFXMatineeControlInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControlInst");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
