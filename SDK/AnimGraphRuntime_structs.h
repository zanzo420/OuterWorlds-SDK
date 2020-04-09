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

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{

};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{

};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{

};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{

};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0000
struct FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x0000
struct FAnimNode_BlendSpacePlayer
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x0000
struct FAnimNode_AimOffsetLookAt
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0000
struct FAnimNode_AnimDynamics
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0000
struct FAnimPhysSphericalLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0000
struct FAnimPhysPlanarLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0000
struct FAnimPhysConstraintSetup
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0000
struct FAnimNode_ApplyAdditive
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0000
struct FAnimNode_ApplyLimits
{

};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0000
struct FAngularRangeLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0000
struct FAnimNode_BlendBoneByChannel
{

};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0000
struct FBlendBoneByChannelEntry
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0000
struct FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0000
struct FAnimNode_BlendListByBool
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0000
struct FAnimNode_BlendListByEnum
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0000
struct FAnimNode_BlendListByInt
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0000
struct FAnimNode_BlendSpaceEvaluator
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0000
struct FAnimNode_BoneDrivenController
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x0000
struct FAnimNode_CCDIK
{

};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0000
struct FBoneSocketTarget
{

};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0000
struct FSocketReference
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0000
struct FAnimNode_Constraint
{

};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x0000
struct FConstraint
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0000
struct FAnimNode_CopyBone
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0000
struct FAnimNode_CopyBoneDelta
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0000
struct FAnimNode_CopyPoseFromMesh
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0000
struct FAnimNode_CurveSource
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0000
struct FAnimNode_Fabrik
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0000
struct FAnimNode_HandIKRetargeting
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x0000
struct FAnimNode_LayeredBoneBlend
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0000
struct FAnimNode_LegIK
{

};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0000
struct FAnimLegIKData
{

};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0000
struct FAnimLegIKDefinition
{

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0000
struct FIKChain
{

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0000
struct FIKChainLink
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0000
struct FAnimNode_LookAt
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0000
struct FAnimNode_MakeDynamicAdditive
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0000
struct FAnimNode_ModifyBone
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0000
struct FAnimNode_ModifyCurve
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0000
struct FAnimNode_MultiWayBlend
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0000
struct FAnimNode_ObserveBone
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0000
struct FAnimNode_PoseHandler
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0000
struct FAnimNode_PoseBlendNode
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0000
struct FAnimNode_PoseByName
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x0000
struct FAnimNode_PoseDriver
{

};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x0000
struct FPoseDriverTarget
{

};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0000
struct FPoseDriverTransform
{

};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0000
struct FRBFParams
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0000
struct FAnimNode_PoseSnapshot
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0000
struct FAnimNode_RandomPlayer
{

};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0000
struct FRandomPlayerSequenceEntry
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000
struct FAnimNode_MeshSpaceRefPose
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0000
struct FAnimNode_RefPose
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0000
struct FAnimNode_ResetRoot
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0000
struct FAnimNode_RigidBody
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0000
struct FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0000
struct FAnimNode_RotateRootBone
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0000
struct FAnimNode_RotationMultiplier
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0000
struct FAnimNode_RotationOffsetBlendSpace
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0000
struct FAnimNode_ScaleChainLength
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0000
struct FAnimNode_SequenceEvaluator
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0000
struct FAnimNode_Slot
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0000
struct FAnimNode_SplineIK
{

};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0000
struct FSplineIKCachedBoneData
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0000
struct FAnimNode_SpringBone
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000
struct FAnimNode_StateResult
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0000
struct FAnimNode_Trail
{

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0000
struct FRotationLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0000
struct FAnimNode_TwistCorrectiveNode
{

};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0000
struct FReferenceBoneFrame
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0000
struct FAnimNode_TwoBoneIK
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x0000
struct FAnimNode_TwoWayBlend
{

};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0000
struct FAnimSequencerInstanceProxy
{

};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0000
struct FRBFEntry
{

};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0000
struct FRBFTarget
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
