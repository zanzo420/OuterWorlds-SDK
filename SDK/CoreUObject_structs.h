#pragma once

// Name: TheOuterWorlds, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.Guid
// 0x0000
struct FGuid
{

};

// ScriptStruct CoreUObject.Vector
// 0x0000
struct FVector
{

};

// ScriptStruct CoreUObject.Vector4
// 0x0000
struct alignas(16) FVector4
{

};

// ScriptStruct CoreUObject.Vector2D
// 0x0000
struct FVector2D
{


	inline FVector2D()
		: X(0), Y(0)
	{ }

	inline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0000
struct FTwoVectors
{

};

// ScriptStruct CoreUObject.Rotator
// 0x0000
struct FRotator
{

};

// ScriptStruct CoreUObject.Plane
// 0x0000
struct alignas(16) FPlane
{

};

// ScriptStruct CoreUObject.Quat
// 0x0000
struct alignas(16) FQuat
{

};

// ScriptStruct CoreUObject.IntPoint
// 0x0000
struct FIntPoint
{

};

// ScriptStruct CoreUObject.IntVector
// 0x0000
struct FIntVector
{

};

// ScriptStruct CoreUObject.Color
// 0x0000
struct FColor
{

};

// ScriptStruct CoreUObject.LinearColor
// 0x0000
struct FLinearColor
{


	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x0000
struct FBox
{

};

// ScriptStruct CoreUObject.Box2D
// 0x0000
struct FBox2D
{

};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x0000
struct FBoxSphereBounds
{

};

// ScriptStruct CoreUObject.OrientedBox
// 0x0000
struct FOrientedBox
{

};

// ScriptStruct CoreUObject.Matrix
// 0x0000
struct FMatrix
{

};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0000
struct FInterpCurveFloat
{

};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0000
struct FInterpCurveVector2D
{

};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0000
struct FInterpCurveVector
{

};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0000
struct FInterpCurveQuat
{

};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0000
struct FInterpCurveTwoVectors
{

};

// ScriptStruct CoreUObject.Transform
// 0x0000
struct alignas(16) FTransform
{

};

// ScriptStruct CoreUObject.RandomStream
// 0x0000
struct FRandomStream
{

};

// ScriptStruct CoreUObject.DateTime
// 0x0000
struct FDateTime
{

};

// ScriptStruct CoreUObject.FrameNumber
// 0x0000
struct FFrameNumber
{

};

// ScriptStruct CoreUObject.FrameRate
// 0x0000
struct FFrameRate
{

};

// ScriptStruct CoreUObject.FrameTime
// 0x0000
struct FFrameTime
{

};

// ScriptStruct CoreUObject.QualifiedFrameTime
// 0x0000
struct FQualifiedFrameTime
{

};

// ScriptStruct CoreUObject.Timecode
// 0x0000
struct FTimecode
{

};

// ScriptStruct CoreUObject.Timespan
// 0x0000
struct FTimespan
{

};

// ScriptStruct CoreUObject.SoftObjectPath
// 0x0000
struct FSoftObjectPath
{

};

// ScriptStruct CoreUObject.SoftClassPath
// 0x0000
struct FSoftClassPath
{

};

// ScriptStruct CoreUObject.PrimaryAssetType
// 0x0000
struct FPrimaryAssetType
{

};

// ScriptStruct CoreUObject.PrimaryAssetId
// 0x0000
struct FPrimaryAssetId
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
