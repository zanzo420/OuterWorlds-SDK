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

// Class Engine.Actor
// 0x0000
class AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x0000
class ActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}

};


// Class Engine.SceneComponent
// 0x0000
class SceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}

};


// Class Engine.DeveloperSettings
// 0x0000
class DeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.BlueprintFunctionLibrary
// 0x0000
class BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}

};


// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000
class OnlineBlueprintCallProxyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}

};


// Class Engine.Player
// 0x0000
class Player
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x0000
class NetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0000
class NetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0000
class BlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}

};


// Class Engine.OnlineEngineInterface
// 0x0000
class OnlineEngineInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000
class OnlineSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x0000
class AudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}

};


// Class Engine.AssetImportData
// 0x0000
class AssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000
class AssetUserData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.StreamableComponent
// 0x0000
class StreamableComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamableComponent");
		return ptr;
	}

};


// Class Engine.PrimitiveComponent
// 0x0000
class PrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}

};


// Class Engine.MeshComponent
// 0x0000
class MeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0000
class InterpTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000
class InterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.Brush
// 0x0000
class Brush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0000
class Volume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0000
class PhysicalMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.World
// 0x0000
class World
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0000
class InterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0000
class InterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.DataAsset
// 0x0000
class DataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x0000
class AnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}

};


// Class Engine.AnimNotifyState
// 0x0000
class AnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}

};


// Class Engine.MovementComponent
// 0x0000
class MovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}

};


// Class Engine.NavMovementComponent
// 0x0000
class NavMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}

};


// Class Engine.PawnMovementComponent
// 0x0000
class PawnMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}

};


// Class Engine.CharacterMovementComponent
// 0x0000
class CharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}

};


// Class Engine.PrimaryDataAsset
// 0x0000
class PrimaryDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryDataAsset");
		return ptr;
	}

};


// Class Engine.SkinnedMeshComponent
// 0x0000
class SkinnedMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}

};


// Class Engine.SkeletalMeshComponent
// 0x0000
class SkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}

};


// Class Engine.AnimInstance
// 0x0000
class AnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}

};


// Class Engine.ShapeComponent
// 0x0000
class ShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0000
class BoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}

};


// Class Engine.CameraComponent
// 0x0000
class CameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}

};


// Class Engine.InputComponent
// 0x0000
class InputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}

};


// Class Engine.LogicalExpressionBaseDataAsset
// 0x0000
class LogicalExpressionBaseDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogicalExpressionBaseDataAsset");
		return ptr;
	}

};


// Class Engine.StaticMeshComponent
// 0x0000
class StaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}

};


// Class Engine.SpringArmComponent
// 0x0000
class SpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x0000
class Pawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}

};


// Class Engine.Character
// 0x0000
class Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}

};


// Class Engine.Controller
// 0x0000
class Controller
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}

};


// Class Engine.AISystemBase
// 0x0000
class AISystemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000
class TriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.AvoidanceManager
// 0x0000
class AvoidanceManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}

};


// Class Engine.PlayerController
// 0x0000
class PlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}

};


// Class Engine.CheatManager
// 0x0000
class CheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}

};


// Class Engine.DamageType
// 0x0000
class DamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.DebugCameraController
// 0x0000
class DebugCameraController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}

};


// Class Engine.GameInstance
// 0x0000
class GameInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}

};


// Class Engine.Info
// 0x0000
class Info
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.GameModeBase
// 0x0000
class GameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}

};


// Class Engine.GameMode
// 0x0000
class GameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}

};


// Class Engine.GameUserSettings
// 0x0000
class GameUserSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}

};


// Class Engine.Engine
// 0x0000
class Engine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0000
class ScriptViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x0000
class GameViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}

};


// Class Engine.NavigationSystemBase
// 0x0000
class NavigationSystemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemBase");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0000
class PlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}

};


// Class Engine.NavigationObjectBase
// 0x0000
class NavigationObjectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0000
class PlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x0000
class ProjectileMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x0000
class TargetPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.HUD
// 0x0000
class HUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}

};


// Class Engine.WorldSettings
// 0x0000
class WorldSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}

};


// Class Engine.NavAreaBase
// 0x0000
class NavAreaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaBase");
		return ptr;
	}

};


// Class Engine.ParticleSystemComponent
// 0x0000
class ParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}

};


// Class Engine.StasisLogicBaseDataAsset
// 0x0000
class StasisLogicBaseDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StasisLogicBaseDataAsset");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000
class AnimMetaData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x0000
class InstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0000
class HierarchicalInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0000
class StaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.MaterialInterface
// 0x0000
class MaterialInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x0000
class MaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000
class MaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x0000
class MaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0x0000
class MaterialExpressionCustomOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.EngineCustomTimeStep
// 0x0000
class EngineCustomTimeStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineCustomTimeStep");
		return ptr;
	}

};


// Class Engine.BlueprintGeneratedClass
// 0x0000
class BlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x0000
class CameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}

};


// Class Engine.SoundEffectPreset
// 0x0000
class SoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectPreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSubmixPreset
// 0x0000
class SoundEffectSubmixPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSubmixPreset");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0000
class SoundBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x0000
class SoundWave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0x0000
class SoundWaveProcedural
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0000
class BlueprintCore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x0000
class Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.Model
// 0x0000
class Model
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.Channel
// 0x0000
class Channel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x0000
class ActorChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.AnimationAsset
// 0x0000
class AnimationAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x0000
class BlendSpaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0000
class BlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000
class AimOffsetBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0000
class BlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000
class AimOffsetBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0000
class AmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}

};


// Class Engine.AnimationSettings
// 0x0000
class AnimationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0x0000
class AnimBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0000
class AnimBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.AnimClassData
// 0x0000
class AnimClassData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}

};


// Class Engine.AnimClassInterface
// 0x0000
class AnimClassInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}

};


// Class Engine.AnimSequenceBase
// 0x0000
class AnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}

};


// Class Engine.AnimCompositeBase
// 0x0000
class AnimCompositeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0000
class AnimComposite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0000
class AnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0000
class AnimCompress_Automatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000
class AnimCompress_BitwiseCompressOnly
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000
class AnimCompress_LeastDestructive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0000
class AnimCompress_RemoveLinearKeys
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0000
class AnimCompress_PerTrackCompression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0000
class AnimCompress_RemoveEverySecondKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0000
class AnimCompress_RemoveTrivialKeys
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x0000
class AnimMontage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}

};


// Class Engine.AnimNotify_PauseClothingSimulation
// 0x0000
class AnimNotify_PauseClothingSimulation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PauseClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x0000
class AnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlaySound
// 0x0000
class AnimNotify_PlaySound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000
class AnimNotify_ResetClothingSimulation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetDynamics
// 0x0000
class AnimNotify_ResetDynamics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetDynamics");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResumeClothingSimulation
// 0x0000
class AnimNotify_ResumeClothingSimulation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResumeClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_DisableRootMotion
// 0x0000
class AnimNotifyState_DisableRootMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_DisableRootMotion");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0000
class AnimNotifyState_TimedParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0000
class AnimNotifyState_Trail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x0000
class AnimSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x0000
class AnimSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x0000
class AnimSingleNodeInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}

};


// Class Engine.AnimStateMachineTypes
// 0x0000
class AnimStateMachineTypes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0000
class ApplicationLifecycleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x0000
class ArrowComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}

};


// Class Engine.AssetExportTask
// 0x0000
class AssetExportTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetExportTask");
		return ptr;
	}

};


// Class Engine.AssetManager
// 0x0000
class AssetManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManager");
		return ptr;
	}

};


// Class Engine.AssetManagerSettings
// 0x0000
class AssetManagerSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManagerSettings");
		return ptr;
	}

};


// Class Engine.AssetMappingTable
// 0x0000
class AssetMappingTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetMappingTable");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAssetBase
// 0x0000
class AsyncActionLoadPrimaryAssetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetBase");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAsset
// 0x0000
class AsyncActionLoadPrimaryAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAsset");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAssetClass
// 0x0000
class AsyncActionLoadPrimaryAssetClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClass");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAssetList
// 0x0000
class AsyncActionLoadPrimaryAssetList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetList");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAssetClassList
// 0x0000
class AsyncActionLoadPrimaryAssetClassList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClassList");
		return ptr;
	}

};


// Class Engine.AsyncActionChangePrimaryAssetBundles
// 0x0000
class AsyncActionChangePrimaryAssetBundles
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionChangePrimaryAssetBundles");
		return ptr;
	}

};


// Class Engine.AtmosphericFog
// 0x0000
class AtmosphericFog
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.AtmosphericFogComponent
// 0x0000
class AtmosphericFogComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}

};


// Class Engine.AudioSettings
// 0x0000
class AudioSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x0000
class AudioVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}

};


// Class Engine.AutomationTestSettings
// 0x0000
class AutomationTestSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.BillboardComponent
// 0x0000
class BillboardComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}

};


// Class Engine.BlendableInterface
// 0x0000
class BlendableInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x0000
class Skeleton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.BlendProfile
// 0x0000
class BlendProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000
class BlockingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.BlueprintMapLibrary
// 0x0000
class BlueprintMapLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}

};


// Class Engine.PlatformGameInstance
// 0x0000
class PlatformGameInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}

};


// Class Engine.BlueprintPlatformLibrary
// 0x0000
class BlueprintPlatformLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}

};


// Class Engine.BlueprintSetLibrary
// 0x0000
class BlueprintSetLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}

};


// Class Engine.BodySetup
// 0x0000
class BodySetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0000
class BoneMaskFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookmarkBase
// 0x0000
class BookmarkBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookmarkBase");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0000
class BookMark
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0000
class BookMark2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0000
class ReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000
class BoxReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.ReflectionCaptureComponent
// 0x0000
class ReflectionCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.BoxReflectionCaptureComponent
// 0x0000
class BoxReflectionCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0000
class Breakpoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0000
class BrushBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x0000
class BrushComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0x0000
class BrushShape
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x0000
class ButtonStyleAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0000
class CameraAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x0000
class CameraAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}

};


// Class Engine.CameraBlockingVolume
// 0x0000
class CameraBlockingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraModifier
// 0x0000
class CameraModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}

};


// Class Engine.CameraModifier_CameraShake
// 0x0000
class CameraModifier_CameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0000
class CameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x0000
class Canvas
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}

};


// Class Engine.Texture
// 0x0000
class Texture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0000
class TextureRenderTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0000
class TextureRenderTarget2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0000
class CanvasRenderTarget2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CapsuleComponent
// 0x0000
class CapsuleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}

};


// Class Engine.CheckBoxStyleAsset
// 0x0000
class CheckBoxStyleAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.ChildActorComponent
// 0x0000
class ChildActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}

};


// Class Engine.ChildConnection
// 0x0000
class ChildConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.Cloud
// 0x0000
class Cloud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Cloud");
		return ptr;
	}

};


// Class Engine.CloudComponent
// 0x0000
class CloudComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudComponent");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0000
class PlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x0000
class CloudStorageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0000
class CollisionProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0000
class Commandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000
class DynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0000
class ComponentDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0000
class CurveTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.CompositeCurveTable
// 0x0000
class CompositeCurveTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeCurveTable");
		return ptr;
	}

};


// Class Engine.DataTable
// 0x0000
class DataTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.CompositeDataTable
// 0x0000
class CompositeDataTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeDataTable");
		return ptr;
	}

};


// Class Engine.Console
// 0x0000
class Console
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0000
class ControlChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.ControlRigInterface
// 0x0000
class ControlRigInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlRigInterface");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x0000
class StreamingSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x0000
class GarbageCollectionSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0000
class CullDistanceVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.CullPortalVolume
// 0x0000
class CullPortalVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullPortalVolume");
		return ptr;
	}

};


// Class Engine.CurveBase
// 0x0000
class CurveBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}

};


// Class Engine.CurveEdPresetCurve
// 0x0000
class CurveEdPresetCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveFloat
// 0x0000
class CurveFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}

};


// Class Engine.CurveLinearColor
// 0x0000
class CurveLinearColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x0000
class Texture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}

};


// Class Engine.CurveLinearColorAtlas
// 0x0000
class CurveLinearColorAtlas
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColorAtlas");
		return ptr;
	}

};


// Class Engine.CurveSourceInterface
// 0x0000
class CurveSourceInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveSourceInterface");
		return ptr;
	}

};


// Class Engine.CurveVector
// 0x0000
class CurveVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}

};


// Class Engine.DataTableFunctionLibrary
// 0x0000
class DataTableFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0x0000
class DebugCameraHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.DebugDrawService
// 0x0000
class DebugDrawService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0000
class DecalActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}

};


// Class Engine.DecalComponent
// 0x0000
class DecalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}

};


// Class Engine.DefaultPawn
// 0x0000
class DefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x0000
class PhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000
class DefaultPhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0x0000
class DemoNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0x0000
class DemoNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x0000
class PendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0x0000
class DemoPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.DestructibleInterface
// 0x0000
class DestructibleInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleInterface");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x0000
class TextureLODSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0000
class DeviceProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x0000
class DeviceProfileManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0000
class DialogueSoundWaveProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0000
class DialogueVoice
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0000
class DialogueWave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Light
// 0x0000
class Light
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}

};


// Class Engine.DirectionalLight
// 0x0000
class DirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.LightComponentBase
// 0x0000
class LightComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}

};


// Class Engine.LightComponent
// 0x0000
class LightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}

};


// Class Engine.DirectionalLightComponent
// 0x0000
class DirectionalLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0000
class Distribution
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0000
class DistributionFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0000
class DistributionFloatConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0000
class DistributionFloatConstantCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0000
class DistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000
class DistributionFloatParticleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0000
class DistributionFloatUniform
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0000
class DistributionFloatUniformCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0000
class DistributionVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0000
class DistributionVectorConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0000
class DistributionVectorConstantCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0000
class DistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000
class DistributionVectorParticleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0000
class DistributionVectorUniform
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0000
class DistributionVectorUniformCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0x0000
class DocumentationActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000
class DPICustomScalingRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0000
class DrawFrustumComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.SphereComponent
// 0x0000
class SphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0x0000
class DrawSphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0000
class EdGraph
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0000
class EdGraphNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0000
class EdGraphNode_Documentation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphPin_Deprecated
// 0x0000
class EdGraphPin_Deprecated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000
class EdGraphSchema
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x0000
class Emitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}

};


// Class Engine.EmitterCameraLensEffectBase
// 0x0000
class EmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000
class EngineBaseTypes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EngineHandlerComponentFactory
// 0x0000
class EngineHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000
class LocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0000
class EngineMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000
class EngineTypes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0000
class ExponentialHeightFog
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFogComponent
// 0x0000
class ExponentialHeightFogComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}

};


// Class Engine.Exporter
// 0x0000
class Exporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}

};


// Class Engine.FloatingPawnMovement
// 0x0000
class FloatingPawnMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.Font
// 0x0000
class Font
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.FontFace
// 0x0000
class FontFace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontFace");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x0000
class FontImportOptions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.ForceFeedbackAttenuation
// 0x0000
class ForceFeedbackAttenuation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackAttenuation");
		return ptr;
	}

};


// Class Engine.ForceFeedbackComponent
// 0x0000
class ForceFeedbackComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackComponent");
		return ptr;
	}

};


// Class Engine.ForceFeedbackEffect
// 0x0000
class ForceFeedbackEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0000
class GameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.GameNetworkManager
// 0x0000
class GameNetworkManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.GameplayStatics
// 0x0000
class GameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}

};


// Class Engine.GameSession
// 0x0000
class GameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.GameStateBase
// 0x0000
class GameStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}

};


// Class Engine.GameState
// 0x0000
class GameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}

};


// Class Engine.SpotLight
// 0x0000
class SpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}

};


// Class Engine.GeneratedMeshAreaLight
// 0x0000
class GeneratedMeshAreaLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Base
// 0x0000
class HapticFeedbackEffect_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Buffer
// 0x0000
class HapticFeedbackEffect_Buffer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Curve
// 0x0000
class HapticFeedbackEffect_Curve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_SoundWave
// 0x0000
class HapticFeedbackEffect_SoundWave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}

};


// Class Engine.HealthSnapshotBlueprintLibrary
// 0x0000
class HealthSnapshotBlueprintLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HealthSnapshotBlueprintLibrary");
		return ptr;
	}

};


// Class Engine.HeightmapData
// 0x0000
class HeightmapData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightmapData");
		return ptr;
	}

};


// Class Engine.HLODProxy
// 0x0000
class HLODProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HLODProxy");
		return ptr;
	}

};


// Class Engine.AmbisonicsSubmixSettingsBase
// 0x0000
class AmbisonicsSubmixSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbisonicsSubmixSettingsBase");
		return ptr;
	}

};


// Class Engine.SpatializationPluginSourceSettingsBase
// 0x0000
class SpatializationPluginSourceSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.OcclusionPluginSourceSettingsBase
// 0x0000
class OcclusionPluginSourceSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.ReverbPluginSourceSettingsBase
// 0x0000
class ReverbPluginSourceSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.ImportanceSamplingLibrary
// 0x0000
class ImportanceSamplingLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportanceSamplingLibrary");
		return ptr;
	}

};


// Class Engine.ImportantToggleSettingInterface
// 0x0000
class ImportantToggleSettingInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0000
class InGameAdManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x0000
class InheritableComponentHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000
class InputDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0000
class InputActionDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0000
class InputAxisDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0000
class InputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0000
class InputKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputSettings
// 0x0000
class InputSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}

};


// Class Engine.InputTouchDelegateBinding
// 0x0000
class InputTouchDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000
class InputVectorAxisDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000
class Interface_AssetUserData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000
class Interface_CollisionDataProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000
class Interface_PostProcessVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.Interface_PreviewMeshProvider
// 0x0000
class Interface_PreviewMeshProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PreviewMeshProvider");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0000
class InterpCurveEdSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0000
class InterpData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0000
class InterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000
class InterpFilter_Classes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000
class InterpFilter_Custom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0000
class InterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0000
class InterpGroupCamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000
class InterpGroupDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0000
class InterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000
class InterpGroupInstCamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000
class InterpGroupInstDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpToMovementComponent
// 0x0000
class InterpToMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x0000
class InterpTrackAnimControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000
class InterpTrackAudioMaster
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0000
class InterpTrackBoolProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0000
class InterpTrackColorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000
class InterpTrackColorScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0000
class InterpTrackDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0000
class InterpTrackEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0000
class InterpTrackFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x0000
class InterpTrackFloatAnimBPParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0000
class InterpTrackFloatMaterialParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0000
class InterpTrackFloatParticleParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0000
class InterpTrackFloatProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0000
class InterpTrackInstAnimControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000
class InterpTrackInstAudioMaster
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0000
class InterpTrackInstProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0000
class InterpTrackInstBoolProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0000
class InterpTrackInstColorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000
class InterpTrackInstColorScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0000
class InterpTrackInstDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0000
class InterpTrackInstEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000
class InterpTrackInstFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0000
class InterpTrackInstFloatAnimBPParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0000
class InterpTrackInstFloatMaterialParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0000
class InterpTrackInstFloatParticleParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0000
class InterpTrackInstFloatProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0000
class InterpTrackInstLinearColorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0000
class InterpTrackInstMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0000
class InterpTrackInstParticleReplay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0000
class InterpTrackInstSlomo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0000
class InterpTrackInstSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0000
class InterpTrackInstToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0000
class InterpTrackInstVectorMaterialParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0000
class InterpTrackInstVectorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0000
class InterpTrackInstVisibility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0000
class InterpTrackLinearColorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0000
class InterpTrackLinearColorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0000
class InterpTrackMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0000
class InterpTrackMoveAxis
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0000
class InterpTrackParticleReplay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000
class InterpTrackSlomo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0000
class InterpTrackSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0000
class InterpTrackToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0000
class InterpTrackVectorMaterialParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0000
class InterpTrackVectorProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0000
class InterpTrackVisibility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0000
class IntSerialization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000
class KillZVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.KismetArrayLibrary
// 0x0000
class KismetArrayLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}

};


// Class Engine.KismetGuidLibrary
// 0x0000
class KismetGuidLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}

};


// Class Engine.KismetInputLibrary
// 0x0000
class KismetInputLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}

};


// Class Engine.KismetInternationalizationLibrary
// 0x0000
class KismetInternationalizationLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInternationalizationLibrary");
		return ptr;
	}

};


// Class Engine.KismetMaterialLibrary
// 0x0000
class KismetMaterialLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}

};


// Class Engine.KismetMathLibrary
// 0x0000
class KismetMathLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}

};


// Class Engine.KismetNodeHelperLibrary
// 0x0000
class KismetNodeHelperLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}

};


// Class Engine.KismetRenderingLibrary
// 0x0000
class KismetRenderingLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}

};


// Class Engine.KismetStringLibrary
// 0x0000
class KismetStringLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}

};


// Class Engine.KismetStringTableLibrary
// 0x0000
class KismetStringTableLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
		return ptr;
	}

};


// Class Engine.KismetSystemLibrary
// 0x0000
class KismetSystemLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}

};


// Class Engine.KismetTextLibrary
// 0x0000
class KismetTextLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}

};


// Class Engine.Layer
// 0x0000
class Layer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.Level
// 0x0000
class Level
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.LevelActorContainer
// 0x0000
class LevelActorContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelActorContainer");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x0000
class LevelBounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x0000
class LevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}

};


// Class Engine.LevelScriptBlueprint
// 0x0000
class LevelScriptBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x0000
class LevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}

};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000
class LevelStreamingAlwaysLoaded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingDynamic
// 0x0000
class LevelStreamingDynamic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDynamic");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000
class LevelStreamingPersistent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x0000
class LevelStreamingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0000
class LightmappedSurfaceCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightMapTexture2D
// 0x0000
class LightMapTexture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000
class LightmassCharacterIndirectDetailVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceComponent
// 0x0000
class LightmassImportanceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceComponent");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000
class LightmassImportanceVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.LightmassPortal
// 0x0000
class LightmassPortal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}

};


// Class Engine.LightmassPortalComponent
// 0x0000
class LightmassPortalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0000
class LightmassPrimitiveSettingsObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LightVolume
// 0x0000
class LightVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightVolume");
		return ptr;
	}

};


// Class Engine.LightVolumeComponent
// 0x0000
class LightVolumeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightVolumeComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0000
class LineBatchComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.LocalLightComponent
// 0x0000
class LocalLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalLightComponent");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x0000
class LocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x0000
class LODActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.LODActorDummy
// 0x0000
class LODActorDummy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActorDummy");
		return ptr;
	}

};


// Class Engine.MapBuildDataRegistry
// 0x0000
class MapBuildDataRegistry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapBuildDataRegistry");
		return ptr;
	}

};


// Class Engine.Material
// 0x0000
class Material
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0000
class MaterialBillboardComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0000
class MaterialExpressionAbs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000
class MaterialExpressionActorPositionWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0000
class MaterialExpressionAdd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0000
class MaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x0000
class MaterialExpressionTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0000
class MaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000
class MaterialExpressionTextureSampleParameter2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0000
class MaterialExpressionAntialiasedTextureMask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0000
class MaterialExpressionAppendVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosine
// 0x0000
class MaterialExpressionArccosine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosineFast
// 0x0000
class MaterialExpressionArccosineFast
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsine
// 0x0000
class MaterialExpressionArcsine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsineFast
// 0x0000
class MaterialExpressionArcsineFast
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent
// 0x0000
class MaterialExpressionArctangent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2
// 0x0000
class MaterialExpressionArctangent2
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2Fast
// 0x0000
class MaterialExpressionArctangent2Fast
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2Fast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangentFast
// 0x0000
class MaterialExpressionArctangentFast
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangentFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0000
class MaterialExpressionAtmosphericFogColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightColor
// 0x0000
class MaterialExpressionAtmosphericLightColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightVector
// 0x0000
class MaterialExpressionAtmosphericLightVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBentNormalCustomOutput
// 0x0000
class MaterialExpressionBentNormalCustomOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBentNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0000
class MaterialExpressionBlackBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x0000
class MaterialExpressionBlendMaterialAttributes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlendMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0000
class MaterialExpressionBreakMaterialAttributes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x0000
class MaterialExpressionBumpOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000
class MaterialExpressionCameraPositionWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000
class MaterialExpressionCameraVectorWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0000
class MaterialExpressionCeil
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0000
class MaterialExpressionParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0000
class MaterialExpressionVectorParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionChannelMaskParameter
// 0x0000
class MaterialExpressionChannelMaskParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionChannelMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x0000
class MaterialExpressionClamp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0000
class MaterialExpressionClearCoatNormalCustomOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudLayerInfo
// 0x0000
class MaterialExpressionCloudLayerInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudLayerInfo");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudSunDirection
// 0x0000
class MaterialExpressionCloudSunDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudSunDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudWeather
// 0x0000
class MaterialExpressionCloudWeather
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudWeather");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudWorldNoise
// 0x0000
class MaterialExpressionCloudWorldNoise
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudWorldNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0000
class MaterialExpressionCollectionParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0000
class MaterialExpressionComment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0000
class MaterialExpressionComponentMask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0000
class MaterialExpressionConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0000
class MaterialExpressionConstant2Vector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0000
class MaterialExpressionConstant3Vector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0000
class MaterialExpressionConstant4Vector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0000
class MaterialExpressionConstantBiasScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0000
class MaterialExpressionCosine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCoverClusterSphere
// 0x0000
class MaterialExpressionCoverClusterSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCoverClusterSphere");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0000
class MaterialExpressionCrossProduct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0000
class MaterialExpressionScalarParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCurveAtlasRowParameter
// 0x0000
class MaterialExpressionCurveAtlasRowParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCurveAtlasRowParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0000
class MaterialExpressionCustom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0000
class MaterialExpressionDDX
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0000
class MaterialExpressionDDY
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalDerivative
// 0x0000
class MaterialExpressionDecalDerivative
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000
class MaterialExpressionDecalLifetimeOpacity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0000
class MaterialExpressionDecalMipmapLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0000
class MaterialExpressionDepthFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0000
class MaterialExpressionDepthOfFieldFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0000
class MaterialExpressionDeriveNormalZ
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0000
class MaterialExpressionDesaturation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0000
class MaterialExpressionDistance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000
class MaterialExpressionDistanceCullFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0000
class MaterialExpressionDistanceFieldGradient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0000
class MaterialExpressionDistanceToNearestSurface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0000
class MaterialExpressionDivide
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0000
class MaterialExpressionDotProduct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0000
class MaterialExpressionDynamicParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000
class MaterialExpressionEyeAdaptation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0000
class MaterialExpressionFeatureLevelSwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0000
class MaterialExpressionFloor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0000
class MaterialExpressionFmod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0000
class MaterialExpressionFontSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0000
class MaterialExpressionFontSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0000
class MaterialExpressionFrac
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x0000
class MaterialExpressionFresnel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0000
class MaterialExpressionFunctionInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0000
class MaterialExpressionFunctionOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x0000
class MaterialExpressionGetMaterialAttributes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x0000
class MaterialExpressionGIReplace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0000
class MaterialExpressionIf
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionInteractableHighlightOcclusion
// 0x0000
class MaterialExpressionInteractableHighlightOcclusion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionInteractableHighlightOcclusion");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIsBakingMaterial
// 0x0000
class MaterialExpressionIsBakingMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIsBakingMaterial");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000
class MaterialExpressionLightmapUVs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0000
class MaterialExpressionLightmassReplace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000
class MaterialExpressionLightVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVolumeEffect
// 0x0000
class MaterialExpressionLightVolumeEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVolumeEffect");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x0000
class MaterialExpressionLinearInterpolate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm10
// 0x0000
class MaterialExpressionLogarithm10
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm10");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x0000
class MaterialExpressionLogarithm2
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0000
class MaterialExpressionMakeMaterialAttributes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialAttributeLayers
// 0x0000
class MaterialExpressionMaterialAttributeLayers
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialAttributeLayers");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0000
class MaterialExpressionMaterialFunctionCall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialLayerOutput
// 0x0000
class MaterialExpressionMaterialLayerOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialLayerOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0000
class MaterialExpressionMaterialProxyReplace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0000
class MaterialExpressionMax
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0000
class MaterialExpressionMin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0000
class MaterialExpressionMultiply
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0000
class MaterialExpressionNoise
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0000
class MaterialExpressionNormalize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000
class MaterialExpressionObjectBounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000
class MaterialExpressionObjectOrientation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000
class MaterialExpressionObjectPositionWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000
class MaterialExpressionObjectRadius
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0000
class MaterialExpressionOneMinus
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x0000
class MaterialExpressionPanner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000
class MaterialExpressionParticleColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000
class MaterialExpressionParticleDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000
class MaterialExpressionParticleMacroUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000
class MaterialExpressionParticleMotionBlurFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000
class MaterialExpressionParticlePositionWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000
class MaterialExpressionParticleRadius
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRandom
// 0x0000
class MaterialExpressionParticleRandom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000
class MaterialExpressionParticleRelativeTime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000
class MaterialExpressionParticleSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000
class MaterialExpressionParticleSpeed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0000
class MaterialExpressionParticleSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000
class MaterialExpressionPerInstanceFadeAmount
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000
class MaterialExpressionPerInstanceRandom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000
class MaterialExpressionPixelDepth
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000
class MaterialExpressionPixelNormalWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0000
class MaterialExpressionPower
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000
class MaterialExpressionPrecomputedAOMask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedNormal
// 0x0000
class MaterialExpressionPreSkinnedNormal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedPosition
// 0x0000
class MaterialExpressionPreSkinnedPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x0000
class MaterialExpressionPreviousFrameSwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreviousFrameSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x0000
class MaterialExpressionQualitySwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0000
class MaterialExpressionReflectionVectorWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReroute
// 0x0000
class MaterialExpressionReroute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReroute");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x0000
class MaterialExpressionRotateAboutAxis
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0000
class MaterialExpressionRotator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRound
// 0x0000
class MaterialExpressionRound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRound");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSaturate
// 0x0000
class MaterialExpressionSaturate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSaturate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0000
class MaterialExpressionSceneColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0000
class MaterialExpressionSceneDepth
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000
class MaterialExpressionSceneTexelSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0000
class MaterialExpressionSceneTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0000
class MaterialExpressionScreenPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSetMaterialAttributes
// 0x0000
class MaterialExpressionSetMaterialAttributes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadingPathSwitch
// 0x0000
class MaterialExpressionShadingPathSwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadingPathSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSign
// 0x0000
class MaterialExpressionSign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0000
class MaterialExpressionSine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSobol
// 0x0000
class MaterialExpressionSobol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0000
class MaterialExpressionSpeedTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x0000
class MaterialExpressionSphereMask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0000
class MaterialExpressionSphericalParticleOpacity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0000
class MaterialExpressionSquareRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0000
class MaterialExpressionStaticBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0000
class MaterialExpressionStaticBoolParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0000
class MaterialExpressionStaticComponentMaskParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x0000
class MaterialExpressionStaticSwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0000
class MaterialExpressionStaticSwitchParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0000
class MaterialExpressionSubtract
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangent
// 0x0000
class MaterialExpressionTangent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangentOutput
// 0x0000
class MaterialExpressionTangentOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTemporalSobol
// 0x0000
class MaterialExpressionTemporalSobol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTemporalSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0000
class MaterialExpressionTextureCoordinate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000
class MaterialExpressionTextureObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000
class MaterialExpressionTextureObjectParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureProperty
// 0x0000
class MaterialExpressionTextureProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000
class MaterialExpressionTextureSampleParameterCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0000
class MaterialExpressionTextureSampleParameterSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterVolume
// 0x0000
class MaterialExpressionTextureSampleParameterVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterVolume");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0000
class MaterialExpressionTime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0000
class MaterialExpressionTransform
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0000
class MaterialExpressionTransformPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTruncate
// 0x0000
class MaterialExpressionTruncate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTruncate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000
class MaterialExpressionTwoSidedSign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorNoise
// 0x0000
class MaterialExpressionVectorNoise
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000
class MaterialExpressionVertexColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexInterpolator
// 0x0000
class MaterialExpressionVertexInterpolator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexInterpolator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000
class MaterialExpressionVertexNormalWS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x0000
class MaterialExpressionViewProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000
class MaterialExpressionViewSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0000
class MaterialExpressionWorldPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInterface
// 0x0000
class MaterialFunctionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInterface");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0000
class MaterialFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInstance
// 0x0000
class MaterialFunctionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayer
// 0x0000
class MaterialFunctionMaterialLayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayer");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerInstance
// 0x0000
class MaterialFunctionMaterialLayerInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlend
// 0x0000
class MaterialFunctionMaterialLayerBlend
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// 0x0000
class MaterialFunctionMaterialLayerBlendInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlendInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0000
class MaterialInstanceActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0000
class MaterialInstanceDynamic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollection
// 0x0000
class MaterialParameterCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x0000
class MaterialParameterCollectionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x0000
class MatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}

};


// Class Engine.MatineeActorCameraAnim
// 0x0000
class MatineeActorCameraAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.MatineeAnimInterface
// 0x0000
class MatineeAnimInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000
class MatineeInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.MeshMergeCullingVolume
// 0x0000
class MeshMergeCullingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshMergeCullingVolume");
		return ptr;
	}

};


// Class Engine.MeshSimplificationSettings
// 0x0000
class MeshSimplificationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000
class MeshVertexPainterKismetLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}

};


// Class Engine.MicroTransactionBase
// 0x0000
class MicroTransactionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x0000
class ModelComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0000
class MorphTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000
class NavAgentInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.NavCollisionBase
// 0x0000
class NavCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollisionBase");
		return ptr;
	}

};


// Class Engine.NavEdgeProviderInterface
// 0x0000
class NavEdgeProviderInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x0000
class NavigationDataChunk
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationDataInterface
// 0x0000
class NavigationDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataInterface");
		return ptr;
	}

};


// Class Engine.NavigationSystem
// 0x0000
class NavigationSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}

};


// Class Engine.NavigationSystemConfig
// 0x0000
class NavigationSystemConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemConfig");
		return ptr;
	}

};


// Class Engine.NullNavSysConfig
// 0x0000
class NullNavSysConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NullNavSysConfig");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0000
class NavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000
class NavPathObserverInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000
class NavRelevantInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.SimulatedClientNetConnection
// 0x0000
class SimulatedClientNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulatedClientNetConnection");
		return ptr;
	}

};


// Class Engine.NetworkPredictionInterface
// 0x0000
class NetworkPredictionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0000
class NetworkSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.NodeMappingContainer
// 0x0000
class NodeMappingContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingContainer");
		return ptr;
	}

};


// Class Engine.NodeMappingProviderInterface
// 0x0000
class NodeMappingProviderInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingProviderInterface");
		return ptr;
	}

};


// Class Engine.Note
// 0x0000
class Note
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0000
class ObjectLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0000
class ObjectReferencer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x0000
class PackageMapClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0000
class PainCausingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0000
class ParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000
class ParticleEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0000
class ParticleLODLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0000
class ParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0000
class ParticleModuleAccelerationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0000
class ParticleModuleAcceleration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0000
class ParticleModuleAccelerationConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0000
class ParticleModuleAccelerationDrag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0000
class ParticleModuleAccelerationDragScaleOverLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0000
class ParticleModuleAccelerationOverLifetime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000
class ParticleModuleAttractorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0000
class ParticleModuleAttractorLine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0000
class ParticleModuleAttractorParticle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x0000
class ParticleModuleAttractorPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0000
class ParticleModuleAttractorPointGravity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000
class ParticleModuleBeamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x0000
class ParticleModuleBeamModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0000
class ParticleModuleBeamNoise
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x0000
class ParticleModuleBeamSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x0000
class ParticleModuleBeamTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000
class ParticleModuleCameraBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0000
class ParticleModuleCameraOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000
class ParticleModuleCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0000
class ParticleModuleCollision
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0000
class ParticleModuleCollisionGPU
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000
class ParticleModuleColorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x0000
class ParticleModuleColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0000
class ParticleModuleColor_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0000
class ParticleModuleColorOverLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0000
class ParticleModuleColorScaleOverLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000
class ParticleModuleEventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0000
class ParticleModuleEventGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0000
class ParticleModuleEventReceiverBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0000
class ParticleModuleEventReceiverKillParticles
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x0000
class ParticleModuleEventReceiverSpawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000
class ParticleModuleEventSendToGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000
class ParticleModuleKillBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x0000
class ParticleModuleKillBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0000
class ParticleModuleKillHeight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000
class ParticleModuleLifetimeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0000
class ParticleModuleLifetime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0000
class ParticleModuleLifetime_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000
class ParticleModuleLightBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x0000
class ParticleModuleLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0000
class ParticleModuleLight_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000
class ParticleModuleLocationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0000
class ParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0000
class ParticleModuleLocation_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0000
class ParticleModuleLocationBoneSocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x0000
class ParticleModuleLocationDirect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0000
class ParticleModuleLocationEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0000
class ParticleModuleLocationEmitterDirect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0000
class ParticleModuleLocationPrimitiveBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0000
class ParticleModuleLocationPrimitiveCylinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0000
class ParticleModuleLocationPrimitiveCylinder_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0000
class ParticleModuleLocationPrimitiveSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0000
class ParticleModuleLocationPrimitiveSphere_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x0000
class ParticleModuleLocationPrimitiveTriangle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0000
class ParticleModuleLocationSkelVertSurface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000
class ParticleModuleLocationWorldOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0000
class ParticleModuleLocationWorldOffset_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000
class ParticleModuleMaterialBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0000
class ParticleModuleMeshMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000
class ParticleModuleRotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0000
class ParticleModuleMeshRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0000
class ParticleModuleMeshRotation_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000
class ParticleModuleRotationRateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0000
class ParticleModuleMeshRotationRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0000
class ParticleModuleMeshRotationRate_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0000
class ParticleModuleMeshRotationRateMultiplyLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0000
class ParticleModuleMeshRotationRateOverLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0000
class ParticleModuleOrbitBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x0000
class ParticleModuleOrbit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000
class ParticleModuleOrientationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0000
class ParticleModuleOrientationAxisLock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000
class ParticleModuleParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0000
class ParticleModuleParameterDynamic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0000
class ParticleModuleParameterDynamic_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0000
class ParticleModulePivotOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x0000
class ParticleModuleRequired
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0000
class ParticleModuleRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0000
class ParticleModuleRotation_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0000
class ParticleModuleRotationOverLifetime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0000
class ParticleModuleRotationRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0000
class ParticleModuleRotationRate_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0000
class ParticleModuleRotationRateMultiplyLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000
class ParticleModuleSizeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0000
class ParticleModuleSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0000
class ParticleModuleSize_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0000
class ParticleModuleSizeMultiplyLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0000
class ParticleModuleSizeScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0000
class ParticleModuleSizeScaleBySpeed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0000
class ParticleModuleSourceMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0000
class ParticleModuleSpawnBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x0000
class ParticleModuleSpawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0000
class ParticleModuleSpawnPerUnit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000
class ParticleModuleSubUVBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0000
class ParticleModuleSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0000
class ParticleModuleSubUVMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000
class ParticleModuleTrailBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0000
class ParticleModuleTrailSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000
class ParticleModuleTypeDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0000
class ParticleModuleTypeDataAnimTrail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x0000
class ParticleModuleTypeDataBeam2
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x0000
class ParticleModuleTypeDataGpu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0000
class ParticleModuleTypeDataMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0000
class ParticleModuleTypeDataRibbon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000
class ParticleModuleVectorFieldBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0000
class ParticleModuleVectorFieldGlobal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0000
class ParticleModuleVectorFieldLocal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0000
class ParticleModuleVectorFieldRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0000
class ParticleModuleVectorFieldRotationRate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0000
class ParticleModuleVectorFieldScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0000
class ParticleModuleVectorFieldScaleOverLife
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0000
class ParticleModuleVelocityBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0000
class ParticleModuleVelocity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0000
class ParticleModuleVelocity_Seeded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0000
class ParticleModuleVelocityCone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0000
class ParticleModuleVelocityInheritParent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0000
class ParticleModuleVelocityOverLifetime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000
class ParticleSpriteEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0000
class ParticleSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x0000
class ParticleSystemReplay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PathFollowingAgentInterface
// 0x0000
class PathFollowingAgentInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathFollowingAgentInterface");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0x0000
class PawnNoiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}

};


// Class Engine.PhysicalAnimationComponent
// 0x0000
class PhysicalAnimationComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000
class PhysicalMaterialPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x0000
class PhysicsAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.SkeletalBodySetup
// 0x0000
class SkeletalBodySetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0000
class PhysicsCollisionHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000
class RigidBodyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0000
class PhysicsConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0x0000
class PhysicsConstraintComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintTemplate
// 0x0000
class PhysicsConstraintTemplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PhysicsHandleComponent
// 0x0000
class PhysicsHandleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}

};


// Class Engine.PhysicsSettings
// 0x0000
class PhysicsSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSpringComponent
// 0x0000
class PhysicsSpringComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}

};


// Class Engine.PhysicsThruster
// 0x0000
class PhysicsThruster
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.PhysicsThrusterComponent
// 0x0000
class PhysicsThrusterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.SceneCapture
// 0x0000
class SceneCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.PlanarReflection
// 0x0000
class PlanarReflection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x0000
class SceneCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlanarReflectionComponent
// 0x0000
class PlanarReflectionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000
class PlaneReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0000
class PlaneReflectionCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlatformEventsComponent
// 0x0000
class PlatformEventsComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceWebResponse
// 0x0000
class PlatformInterfaceWebResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x0000
class PlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}

};


// Class Engine.PlayerStartPIE
// 0x0000
class PlayerStartPIE
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.PlayerState
// 0x0000
class PlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}

};


// Class Engine.PluginCommandlet
// 0x0000
class PluginCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0000
class PointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}

};


// Class Engine.PointLightComponent
// 0x0000
class PointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0000
class Polys
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.PoseableMeshComponent
// 0x0000
class PoseableMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}

};


// Class Engine.PoseAsset
// 0x0000
class PoseAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}

};


// Class Engine.PoseWatch
// 0x0000
class PoseWatch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x0000
class PostProcessComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x0000
class PostProcessVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0000
class PrecomputedVisibilityOverrideVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000
class PrecomputedVisibilityVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.PreviewCollectionInterface
// 0x0000
class PreviewCollectionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewCollectionInterface");
		return ptr;
	}

};


// Class Engine.PreviewMeshCollection
// 0x0000
class PreviewMeshCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewMeshCollection");
		return ptr;
	}

};


// Class Engine.PrimaryAssetLabel
// 0x0000
class PrimaryAssetLabel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryAssetLabel");
		return ptr;
	}

};


// Class Engine.ProxyLODMeshSimplificationSettings
// 0x0000
class ProxyLODMeshSimplificationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyLODMeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0000
class RadialForceActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}

};


// Class Engine.RadialForceComponent
// 0x0000
class RadialForceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}

};


// Class Engine.RectLight
// 0x0000
class RectLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLight");
		return ptr;
	}

};


// Class Engine.RectLightComponent
// 0x0000
class RectLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLightComponent");
		return ptr;
	}

};


// Class Engine.RendererSettings
// 0x0000
class RendererSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.RendererOverrideSettings
// 0x0000
class RendererOverrideSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}

};


// Class Engine.ReplicationDriver
// 0x0000
class ReplicationDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationDriver");
		return ptr;
	}

};


// Class Engine.ReplicationConnectionDriver
// 0x0000
class ReplicationConnectionDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationConnectionDriver");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0000
class ReporterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0000
class ReporterGraph
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0000
class ReverbEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0000
class Rig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.RotatingMovementComponent
// 0x0000
class RotatingMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.RVOAvoidanceInterface
// 0x0000
class RVOAvoidanceInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.SaveGame
// 0x0000
class SaveGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000
class Scene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.SceneCapture2D
// 0x0000
class SceneCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent2D
// 0x0000
class SceneCaptureComponent2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponentCube
// 0x0000
class SceneCaptureComponentCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}

};


// Class Engine.SceneCaptureCube
// 0x0000
class SceneCaptureCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}

};


// Class Engine.SCS_Node
// 0x0000
class SCS_Node
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0000
class Selection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.ServerStatReplicator
// 0x0000
class ServerStatReplicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerStatReplicator");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0000
class ShadowMapTexture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0000
class SimpleConstructionScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0000
class SkeletalMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActor
// 0x0000
class SkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}

};


// Class Engine.SkeletalMeshLODSettings
// 0x0000
class SkeletalMeshLODSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshLODSettings");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0000
class SkeletalMeshSocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}

};


// Class Engine.SkyLight
// 0x0000
class SkyLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}

};


// Class Engine.SkyLightComponent
// 0x0000
class SkyLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}

};


// Class Engine.SlateBrushAsset
// 0x0000
class SlateBrushAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SlateTextureAtlasInterface
// 0x0000
class SlateTextureAtlasInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000
class SmokeTestCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.SoundAttenuation
// 0x0000
class SoundAttenuation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0000
class SoundClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundConcurrency
// 0x0000
class SoundConcurrency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x0000
class SoundCue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePreset
// 0x0000
class SoundEffectSourcePreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePresetChain
// 0x0000
class SoundEffectSourcePresetChain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePresetChain");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0000
class SoundGroups
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0000
class SoundMix
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0000
class SoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0x0000
class SoundNodeAssetReferencer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x0000
class SoundNodeAttenuation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0000
class SoundNodeBranch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0000
class SoundNodeConcatenator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0000
class SoundNodeDelay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0000
class SoundNodeDialoguePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0000
class SoundNodeDistanceCrossFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0000
class SoundNodeDoppler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0000
class SoundNodeEnveloper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0000
class SoundNodeGroupControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0000
class SoundNodeLooping
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000
class SoundNodeMature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0000
class SoundNodeMixer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0000
class SoundNodeModulator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0000
class SoundNodeModulatorContinuous
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0000
class SoundNodeOscillator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0000
class SoundNodeParamCrossFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0x0000
class SoundNodeQualityLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0000
class SoundNodeRandom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0000
class SoundNodeSoundClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0000
class SoundNodeSwitch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0000
class SoundNodeWaveParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0000
class SoundNodeWavePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundSourceBus
// 0x0000
class SoundSourceBus
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSourceBus");
		return ptr;
	}

};


// Class Engine.SoundSubmix
// 0x0000
class SoundSubmix
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmix");
		return ptr;
	}

};


// Class Engine.SpectatorPawn
// 0x0000
class SpectatorPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0000
class SpectatorPawnMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0000
class SphereReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0000
class SphereReflectionCaptureComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x0000
class SplineComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}

};


// Class Engine.SplineMeshActor
// 0x0000
class SplineMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x0000
class SplineMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}

};


// Class Engine.SpotLightComponent
// 0x0000
class SpotLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}

};


// Class Engine.StaticMeshDescriptions
// 0x0000
class StaticMeshDescriptions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshDescriptions");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x0000
class StaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.StaticMeshSocket
// 0x0000
class StaticMeshSocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.StereoLayerComponent
// 0x0000
class StereoLayerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}

};


// Class Engine.StereoLayerFunctionLibrary
// 0x0000
class StereoLayerFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}

};


// Class Engine.StringTable
// 0x0000
class StringTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringTable");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0000
class SubsurfaceProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.SubUVAnimation
// 0x0000
class SubUVAnimation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.TimecodeProvider
// 0x0000
class TimecodeProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimecodeProvider");
		return ptr;
	}

};


// Class Engine.SystemTimeTimecodeProvider
// 0x0000
class SystemTimeTimecodeProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SystemTimeTimecodeProvider");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x0000
class TextPropertyTestObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0000
class TextRenderActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x0000
class TextRenderComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x0000
class Texture2DDynamic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0000
class TextureCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0000
class TextureLightProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.TextureRenderTargetCube
// 0x0000
class TextureRenderTargetCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000
class ThumbnailInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x0000
class TimelineComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}

};


// Class Engine.TimelineTemplate
// 0x0000
class TimelineTemplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0000
class TireType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0000
class TouchInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0000
class TriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0x0000
class TriggerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000
class TriggerCapsule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0x0000
class TriggerSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000
class TwitterIntegrationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}

};


// Class Engine.UserDefinedEnum
// 0x0000
class UserDefinedEnum
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0000
class UserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x0000
class UserInterfaceSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0000
class VectorField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0000
class VectorFieldAnimated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldComponent
// 0x0000
class VectorFieldComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}

};


// Class Engine.VectorFieldStatic
// 0x0000
class VectorFieldStatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0000
class VectorFieldVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.VirtualTexture
// 0x0000
class VirtualTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTexture");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTexture
// 0x0000
class LightMapVirtualTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTexture");
		return ptr;
	}

};


// Class Engine.VirtualTextureSpace
// 0x0000
class VirtualTextureSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTextureSpace");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTextureSpace
// 0x0000
class LightMapVirtualTextureSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTextureSpace");
		return ptr;
	}

};


// Class Engine.VisualLoggerAutomationTests
// 0x0000
class VisualLoggerAutomationTests
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000
class VisualLoggerDebugSnapshotInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}

};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000
class VisualLoggerKismetLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0000
class VoiceChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.VOIPTalker
// 0x0000
class VOIPTalker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPTalker");
		return ptr;
	}

};


// Class Engine.VOIPStatics
// 0x0000
class VOIPStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPStatics");
		return ptr;
	}

};


// Class Engine.VolumeTexture
// 0x0000
class VolumeTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTexture");
		return ptr;
	}

};


// Class Engine.VolumetricLightmapDensityVolume
// 0x0000
class VolumetricLightmapDensityVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumetricLightmapDensityVolume");
		return ptr;
	}

};


// Class Engine.WindDirectionalSource
// 0x0000
class WindDirectionalSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0000
class WindDirectionalSourceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.WorldComposition
// 0x0000
class WorldComposition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.HierarchicalLODSetup
// 0x0000
class HierarchicalLODSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalLODSetup");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
