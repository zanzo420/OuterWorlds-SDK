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

// Enum Indiana.EAttribute
enum class EAttribute : uint8_t
{

};


// Enum Indiana.ESkill
enum class ESkill : uint8_t
{

};


// Enum Indiana.EMeshTarget
enum class EMeshTarget : uint8_t
{

};


// Enum Indiana.ELogicalOperator
enum class ELogicalOperator : uint8_t
{

};


// Enum Indiana.EModSlot
enum class EModSlot : uint8_t
{

};


// Enum Indiana.EWeaponState
enum class EWeaponState : uint8_t
{

};


// Enum Indiana.EWeaponEvent
enum class EWeaponEvent : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Indiana.CauseDamageInfo
// 0x0000
struct FCauseDamageInfo
{

};

// ScriptStruct Indiana.ItemStack
// 0x0000
struct FItemStack
{

};

// ScriptStruct Indiana.InteractionDescription
// 0x0000
struct FInteractionDescription
{

};

// ScriptStruct Indiana.LocString
// 0x0000
struct FLocString
{

};

// ScriptStruct Indiana.ItemStackSplit
// 0x0000
struct FItemStackSplit
{

};

// ScriptStruct Indiana.ComponentEvent
// 0x0000
struct FComponentEvent
{

};

// ScriptStruct Indiana.ButtonEvent
// 0x0000
struct FButtonEvent
{

};

// ScriptStruct Indiana.SliderEvent
// 0x0000
struct FSliderEvent
{

};

// ScriptStruct Indiana.IndianaComboBoxStyle
// 0x0000
struct FIndianaComboBoxStyle
{

};

// ScriptStruct Indiana.IndianaComboButtonStyle
// 0x0000
struct FIndianaComboButtonStyle
{

};

// ScriptStruct Indiana.SlateBrushContainer
// 0x0000
struct FSlateBrushContainer
{

};

// ScriptStruct Indiana.IndianaButtonStyle
// 0x0000
struct FIndianaButtonStyle
{

};

// ScriptStruct Indiana.IndianaTextBlockStyle
// 0x0000
struct FIndianaTextBlockStyle
{

};

// ScriptStruct Indiana.SizeConstraint
// 0x0000
struct FSizeConstraint
{

};

// ScriptStruct Indiana.AchievementProgress
// 0x0000
struct FAchievementProgress
{

};

// ScriptStruct Indiana.ActorPoolConfiguration
// 0x0000
struct FActorPoolConfiguration
{

};

// ScriptStruct Indiana.AISoundDetectionSettings
// 0x0000
struct FAISoundDetectionSettings
{

};

// ScriptStruct Indiana.AIDetectionData
// 0x0000
struct FAIDetectionData
{

};

// ScriptStruct Indiana.AISoundDetectionData
// 0x0000
struct FAISoundDetectionData
{

};

// ScriptStruct Indiana.AimAssistConfig
// 0x0000
struct FAimAssistConfig
{

};

// ScriptStruct Indiana.ExtremaOverlap
// 0x0000
struct FExtremaOverlap
{

};

// ScriptStruct Indiana.AISelector_Action
// 0x0000
struct FAISelector_Action
{

};

// ScriptStruct Indiana.AISelector_ActorWritable
// 0x0000
struct FAISelector_ActorWritable
{

};

// ScriptStruct Indiana.AISelector_Actor
// 0x0000
struct FAISelector_Actor
{

};

// ScriptStruct Indiana.AISelector_BoolWriteable
// 0x0000
struct FAISelector_BoolWriteable
{

};

// ScriptStruct Indiana.AISelector_Bool
// 0x0000
struct FAISelector_Bool
{

};

// ScriptStruct Indiana.AISelector_EQSParameter
// 0x0000
struct FAISelector_EQSParameter
{

};

// ScriptStruct Indiana.AISelector_FiringPattern
// 0x0000
struct FAISelector_FiringPattern
{

};

// ScriptStruct Indiana.AISelector_FValue
// 0x0000
struct FAISelector_FValue
{

};

// ScriptStruct Indiana.AISelector_Int
// 0x0000
struct FAISelector_Int
{

};

// ScriptStruct Indiana.AISelector_LocationWritable
// 0x0000
struct FAISelector_LocationWritable
{

};

// ScriptStruct Indiana.AISelector_Location
// 0x0000
struct FAISelector_Location
{

};

// ScriptStruct Indiana.BehaviorPackage
// 0x0000
struct FBehaviorPackage
{

};

// ScriptStruct Indiana.AISelector_UObject
// 0x0000
struct FAISelector_UObject
{

};

// ScriptStruct Indiana.BehaviorSettings_Set
// 0x0000
struct FBehaviorSettings_Set
{

};

// ScriptStruct Indiana.ScriptedBehavior_Set
// 0x0000
struct FScriptedBehavior_Set
{

};

// ScriptStruct Indiana.LogicalExpression
// 0x0000
struct FLogicalExpression
{

};

// ScriptStruct Indiana.LogicalStatement
// 0x0000
struct FLogicalStatement
{

};

// ScriptStruct Indiana.PCGenderConditional
// 0x0000
struct FPCGenderConditional
{

};

// ScriptStruct Indiana.CompanionStateConditional
// 0x0000
struct FCompanionStateConditional
{

};

// ScriptStruct Indiana.QuestStateConditional
// 0x0000
struct FQuestStateConditional
{

};

// ScriptStruct Indiana.QuestReference
// 0x0000
struct FQuestReference
{

};

// ScriptStruct Indiana.GlobalVariableConditional
// 0x0000
struct FGlobalVariableConditional
{

};

// ScriptStruct Indiana.GlobalVariable
// 0x0000
struct FGlobalVariable
{

};

// ScriptStruct Indiana.AISettings_Block
// 0x0000
struct FAISettings_Block
{

};

// ScriptStruct Indiana.AISettings_CoverFire
// 0x0000
struct FAISettings_CoverFire
{

};

// ScriptStruct Indiana.AISettings_FiringPattern
// 0x0000
struct FAISettings_FiringPattern
{

};

// ScriptStruct Indiana.ReactiveToRangeElement
// 0x0000
struct FReactiveToRangeElement
{

};

// ScriptStruct Indiana.DefensiveActionElement
// 0x0000
struct FDefensiveActionElement
{

};

// ScriptStruct Indiana.ReactiveToMeleeElement
// 0x0000
struct FReactiveToMeleeElement
{

};

// ScriptStruct Indiana.AISettings_Dodge
// 0x0000
struct FAISettings_Dodge
{

};

// ScriptStruct Indiana.AISettings_LostTarget
// 0x0000
struct FAISettings_LostTarget
{

};

// ScriptStruct Indiana.AISettings_Melee
// 0x0000
struct FAISettings_Melee
{

};

// ScriptStruct Indiana.AISettings_MeleePattern
// 0x0000
struct FAISettings_MeleePattern
{

};

// ScriptStruct Indiana.AISettings_MeleePatternEntry
// 0x0000
struct FAISettings_MeleePatternEntry
{

};

// ScriptStruct Indiana.AISettings_MeleeActionBase
// 0x0000
struct FAISettings_MeleeActionBase
{

};

// ScriptStruct Indiana.AISettings_RecoveryBackupBehavior
// 0x0000
struct FAISettings_RecoveryBackupBehavior
{

};

// ScriptStruct Indiana.AISettings_MeleeAction
// 0x0000
struct FAISettings_MeleeAction
{

};

// ScriptStruct Indiana.AISettings_MovingFire
// 0x0000
struct FAISettings_MovingFire
{

};

// ScriptStruct Indiana.AISettings_Positioning
// 0x0000
struct FAISettings_Positioning
{

};

// ScriptStruct Indiana.AISettings_RangedBehavior
// 0x0000
struct FAISettings_RangedBehavior
{

};

// ScriptStruct Indiana.AISettings_RangedPositioning
// 0x0000
struct FAISettings_RangedPositioning
{

};

// ScriptStruct Indiana.AISettings_RangedBehavior_Set
// 0x0000
struct FAISettings_RangedBehavior_Set
{

};

// ScriptStruct Indiana.AISettings_RangedBehavior_TooFar_Set
// 0x0000
struct FAISettings_RangedBehavior_TooFar_Set
{

};

// ScriptStruct Indiana.AISettings_StationaryFire
// 0x0000
struct FAISettings_StationaryFire
{

};

// ScriptStruct Indiana.AISettings_SuppressingFire
// 0x0000
struct FAISettings_SuppressingFire
{

};

// ScriptStruct Indiana.AISettingsWander
// 0x0000
struct FAISettingsWander
{

};

// ScriptStruct Indiana.BehaviorPhases
// 0x0000
struct FBehaviorPhases
{

};

// ScriptStruct Indiana.BaseItemDefinition
// 0x0000
struct FBaseItemDefinition
{

};

// ScriptStruct Indiana.AmmoItemDefinition
// 0x0000
struct FAmmoItemDefinition
{

};

// ScriptStruct Indiana.AnimEventGameplayTagContainer
// 0x0000
struct FAnimEventGameplayTagContainer
{

};

// ScriptStruct Indiana.AnimEventGameplayTagData
// 0x0000
struct FAnimEventGameplayTagData
{

};

// ScriptStruct Indiana.AnimNode_BatchJointDriver
// 0x0000
struct FAnimNode_BatchJointDriver
{

};

// ScriptStruct Indiana.JointDriverData
// 0x0000
struct FJointDriverData
{

};

// ScriptStruct Indiana.AnimNode_BatchModify
// 0x0000
struct FAnimNode_BatchModify
{

};

// ScriptStruct Indiana.BoneMod
// 0x0000
struct FBoneMod
{

};

// ScriptStruct Indiana.AnimNode_BoneMatch
// 0x0000
struct FAnimNode_BoneMatch
{

};

// ScriptStruct Indiana.AISettings_RangePositioning_Set
// 0x0000
struct FAISettings_RangePositioning_Set
{

};

// ScriptStruct Indiana.AnimNode_CurveSlot
// 0x0000
struct FAnimNode_CurveSlot
{

};

// ScriptStruct Indiana.AnimNode_EyeLidLimits
// 0x0000
struct FAnimNode_EyeLidLimits
{

};

// ScriptStruct Indiana.AnimNode_EyeLidLimitEntry
// 0x0000
struct FAnimNode_EyeLidLimitEntry
{

};

// ScriptStruct Indiana.AnimNode_EyeLookAt
// 0x0000
struct FAnimNode_EyeLookAt
{

};

// ScriptStruct Indiana.AnimNode_JointDriver
// 0x0000
struct FAnimNode_JointDriver
{

};

// ScriptStruct Indiana.AnimNode_LocomotionPlay
// 0x0000
struct FAnimNode_LocomotionPlay
{

};

// ScriptStruct Indiana.AnimNode_RandomSequenceNamed
// 0x0000
struct FAnimNode_RandomSequenceNamed
{

};

// ScriptStruct Indiana.LoopRandomSequence
// 0x0000
struct FLoopRandomSequence
{

};

// ScriptStruct Indiana.RandomPlayerSequenceEntryNamed
// 0x0000
struct FRandomPlayerSequenceEntryNamed
{

};

// ScriptStruct Indiana.AnimNode_RotateBoneAboutBone
// 0x0000
struct FAnimNode_RotateBoneAboutBone
{

};

// ScriptStruct Indiana.PropEntry
// 0x0000
struct FPropEntry
{

};

// ScriptStruct Indiana.AppearanceInstance
// 0x0000
struct FAppearanceInstance
{

};

// ScriptStruct Indiana.AppliedAppearanceMod
// 0x0000
struct FAppliedAppearanceMod
{

};

// ScriptStruct Indiana.HeadAppearanceMods
// 0x0000
struct FHeadAppearanceMods
{

};

// ScriptStruct Indiana.MainAppearances
// 0x0000
struct FMainAppearances
{

};

// ScriptStruct Indiana.AppearanceMatch
// 0x0000
struct FAppearanceMatch
{

};

// ScriptStruct Indiana.MaterialParamDescription
// 0x0000
struct FMaterialParamDescription
{

};

// ScriptStruct Indiana.FadeSettings
// 0x0000
struct FFadeSettings
{

};

// ScriptStruct Indiana.AppearanceCustomizations
// 0x0000
struct FAppearanceCustomizations
{

};

// ScriptStruct Indiana.AptitudeTextures
// 0x0000
struct FAptitudeTextures
{

};

// ScriptStruct Indiana.ArmorModifierEntry
// 0x0000
struct FArmorModifierEntry
{

};

// ScriptStruct Indiana.ArmorModifier
// 0x0000
struct FArmorModifier
{

};

// ScriptStruct Indiana.ArmorPieceEntry
// 0x0000
struct FArmorPieceEntry
{

};

// ScriptStruct Indiana.ArmorPiece
// 0x0000
struct FArmorPiece
{

};

// ScriptStruct Indiana.ArmorData
// 0x0000
struct FArmorData
{

};

// ScriptStruct Indiana.DegradableItemDefinition
// 0x0000
struct FDegradableItemDefinition
{

};

// ScriptStruct Indiana.ArmorItemDefinition
// 0x0000
struct FArmorItemDefinition
{

};

// ScriptStruct Indiana.ArmorModDampeningItemDefinition
// 0x0000
struct FArmorModDampeningItemDefinition
{

};

// ScriptStruct Indiana.ArmorModResistanceItemDefinition
// 0x0000
struct FArmorModResistanceItemDefinition
{

};

// ScriptStruct Indiana.ArmorModUtilityItemDefinition
// 0x0000
struct FArmorModUtilityItemDefinition
{

};

// ScriptStruct Indiana.ArmorModArmoringItemDefinition
// 0x0000
struct FArmorModArmoringItemDefinition
{

};

// ScriptStruct Indiana.NewArmorModVisual
// 0x0000
struct FNewArmorModVisual
{

};

// ScriptStruct Indiana.ArmorVisualProperties
// 0x0000
struct FArmorVisualProperties
{

};

// ScriptStruct Indiana.ArmorSetModSlot
// 0x0000
struct FArmorSetModSlot
{

};

// ScriptStruct Indiana.NewArmorSetModVisual
// 0x0000
struct FNewArmorSetModVisual
{

};

// ScriptStruct Indiana.ArmorSetItemDefinition
// 0x0000
struct FArmorSetItemDefinition
{

};

// ScriptStruct Indiana.AssetInfo
// 0x0000
struct FAssetInfo
{

};

// ScriptStruct Indiana.BannedNameReaderData
// 0x0000
struct FBannedNameReaderData
{

};

// ScriptStruct Indiana.BeaconProperties
// 0x0000
struct FBeaconProperties
{

};

// ScriptStruct Indiana.MapBeaconCache
// 0x0000
struct FMapBeaconCache
{

};

// ScriptStruct Indiana.BeaconData
// 0x0000
struct FBeaconData
{

};

// ScriptStruct Indiana.BeardAppearance
// 0x0000
struct FBeardAppearance
{

};

// ScriptStruct Indiana.AIStateHistory
// 0x0000
struct FAIStateHistory
{

};

// ScriptStruct Indiana.DiscoveredAnims
// 0x0000
struct FDiscoveredAnims
{

};

// ScriptStruct Indiana.BipedWeaponAnims
// 0x0000
struct FBipedWeaponAnims
{

};

// ScriptStruct Indiana.BipedPersonalityAnims
// 0x0000
struct FBipedPersonalityAnims
{

};

// ScriptStruct Indiana.BlockProperties
// 0x0000
struct FBlockProperties
{

};

// ScriptStruct Indiana.BodyAppearance
// 0x0000
struct FBodyAppearance
{

};

// ScriptStruct Indiana.AppearanceGoreCap
// 0x0000
struct FAppearanceGoreCap
{

};

// ScriptStruct Indiana.SpellEffectApplyChance
// 0x0000
struct FSpellEffectApplyChance
{

};

// ScriptStruct Indiana.BodyPart
// 0x0000
struct FBodyPart
{

};

// ScriptStruct Indiana.TrackingRegion
// 0x0000
struct FTrackingRegion
{

};

// ScriptStruct Indiana.BodyTrackingRegion
// 0x0000
struct FBodyTrackingRegion
{

};

// ScriptStruct Indiana.CompositeConditionalElement
// 0x0000
struct FCompositeConditionalElement
{

};

// ScriptStruct Indiana.UIAppearanceData
// 0x0000
struct FUIAppearanceData
{

};

// ScriptStruct Indiana.BoneModificationUIWrapper
// 0x0000
struct FBoneModificationUIWrapper
{

};

// ScriptStruct Indiana.CreationTemplate
// 0x0000
struct FCreationTemplate
{

};

// ScriptStruct Indiana.CharacterCreationPerkData
// 0x0000
struct FCharacterCreationPerkData
{

};

// ScriptStruct Indiana.CharacterCreationSkillData
// 0x0000
struct FCharacterCreationSkillData
{

};

// ScriptStruct Indiana.CharacterCreationAttributeData
// 0x0000
struct FCharacterCreationAttributeData
{

};

// ScriptStruct Indiana.AttributeMetaData
// 0x0000
struct FAttributeMetaData
{

};

// ScriptStruct Indiana.CharacterDeathDamageInfo
// 0x0000
struct FCharacterDeathDamageInfo
{

};

// ScriptStruct Indiana.CharacterDeathDataRow
// 0x0000
struct FCharacterDeathDataRow
{

};

// ScriptStruct Indiana.ScannerData
// 0x0000
struct FScannerData
{

};

// ScriptStruct Indiana.ScannerArmorData
// 0x0000
struct FScannerArmorData
{

};

// ScriptStruct Indiana.ScannerAbility
// 0x0000
struct FScannerAbility
{

};

// ScriptStruct Indiana.PerkSubclassArray
// 0x0000
struct FPerkSubclassArray
{

};

// ScriptStruct Indiana.SkillCategoryDetail
// 0x0000
struct FSkillCategoryDetail
{

};

// ScriptStruct Indiana.DialogueNodeAsset
// 0x0000
struct FDialogueNodeAsset
{

};

// ScriptStruct Indiana.ScriptCallAsset
// 0x0000
struct FScriptCallAsset
{

};

// ScriptStruct Indiana.ConditionalAsset
// 0x0000
struct FConditionalAsset
{

};

// ScriptStruct Indiana.ExpressionComponentAsset
// 0x0000
struct FExpressionComponentAsset
{

};

// ScriptStruct Indiana.ConditionalExpressionAsset
// 0x0000
struct FConditionalExpressionAsset
{

};

// ScriptStruct Indiana.ConditionalCallAsset
// 0x0000
struct FConditionalCallAsset
{

};

// ScriptStruct Indiana.ChatterLinkAsset
// 0x0000
struct FChatterLinkAsset
{

};

// ScriptStruct Indiana.ScriptNodeAsset
// 0x0000
struct FScriptNodeAsset
{

};

// ScriptStruct Indiana.ChatterBranchNodeAsset
// 0x0000
struct FChatterBranchNodeAsset
{

};

// ScriptStruct Indiana.ChatterBundle
// 0x0000
struct FChatterBundle
{

};

// ScriptStruct Indiana.SoundEffectNodeAsset
// 0x0000
struct FSoundEffectNodeAsset
{

};

// ScriptStruct Indiana.ChatterEventNodeAsset
// 0x0000
struct FChatterEventNodeAsset
{

};

// ScriptStruct Indiana.GameDataStructure
// 0x0000
struct FGameDataStructure
{

};

// ScriptStruct Indiana.ChatterEvent
// 0x0000
struct FChatterEvent
{

};

// ScriptStruct Indiana.ChatterNodeAsset
// 0x0000
struct FChatterNodeAsset
{

};

// ScriptStruct Indiana.TalkNodeAsset
// 0x0000
struct FTalkNodeAsset
{

};

// ScriptStruct Indiana.ChatterCooldownSet
// 0x0000
struct FChatterCooldownSet
{

};

// ScriptStruct Indiana.ChatterCooldownSettings
// 0x0000
struct FChatterCooldownSettings
{

};

// ScriptStruct Indiana.GameDataReferenceID
// 0x0000
struct FGameDataReferenceID
{

};

// ScriptStruct Indiana.ChatterEventsGameDataReferenceID
// 0x0000
struct FChatterEventsGameDataReferenceID
{

};

// ScriptStruct Indiana.CompanionCommandMoveToLocation
// 0x0000
struct FCompanionCommandMoveToLocation
{

};

// ScriptStruct Indiana.MoveToQueryInfo
// 0x0000
struct FMoveToQueryInfo
{

};

// ScriptStruct Indiana.BotchableQuestInfo
// 0x0000
struct FBotchableQuestInfo
{

};

// ScriptStruct Indiana.CompanionEQSRequest
// 0x0000
struct FCompanionEQSRequest
{

};

// ScriptStruct Indiana.LocationCost
// 0x0000
struct FLocationCost
{

};

// ScriptStruct Indiana.ConversationCompanionConfig
// 0x0000
struct FConversationCompanionConfig
{

};

// ScriptStruct Indiana.EntryData
// 0x0000
struct FEntryData
{

};

// ScriptStruct Indiana.ComputerBrandData
// 0x0000
struct FComputerBrandData
{

};

// ScriptStruct Indiana.AddictionModifier
// 0x0000
struct FAddictionModifier
{

};

// ScriptStruct Indiana.TalkDependencies
// 0x0000
struct FTalkDependencies
{

};

// ScriptStruct Indiana.ConversationDescription
// 0x0000
struct FConversationDescription
{

};

// ScriptStruct Indiana.CameraProperties
// 0x0000
struct FCameraProperties
{

};

// ScriptStruct Indiana.SpeakerGameDataReferenceID
// 0x0000
struct FSpeakerGameDataReferenceID
{

};

// ScriptStruct Indiana.CharacterDescription
// 0x0000
struct FCharacterDescription
{

};

// ScriptStruct Indiana.NodeConfig
// 0x0000
struct FNodeConfig
{

};

// ScriptStruct Indiana.CoverAssetCollisionData
// 0x0000
struct FCoverAssetCollisionData
{

};

// ScriptStruct Indiana.CreditsGroup
// 0x0000
struct FCreditsGroup
{

};

// ScriptStruct Indiana.CreditsEntry
// 0x0000
struct FCreditsEntry
{

};

// ScriptStruct Indiana.CurrencyItmDefinition
// 0x0000
struct FCurrencyItmDefinition
{

};

// ScriptStruct Indiana.AppliedMaterialParam
// 0x0000
struct FAppliedMaterialParam
{

};

// ScriptStruct Indiana.ReceiveDamageData
// 0x0000
struct FReceiveDamageData
{

};

// ScriptStruct Indiana.DamageMultipliers
// 0x0000
struct FDamageMultipliers
{

};

// ScriptStruct Indiana.IndianaGenericDamageEvent
// 0x0000
struct FIndianaGenericDamageEvent
{

};

// ScriptStruct Indiana.IndianaPointDamageEvent
// 0x0000
struct FIndianaPointDamageEvent
{

};

// ScriptStruct Indiana.IndianaRadialDamageEvent
// 0x0000
struct FIndianaRadialDamageEvent
{

};

// ScriptStruct Indiana.DamageLevelScaler
// 0x0000
struct FDamageLevelScaler
{

};

// ScriptStruct Indiana.DamageDescription
// 0x0000
struct FDamageDescription
{

};

// ScriptStruct Indiana.IndianaDamageEvent
// 0x0000
struct FIndianaDamageEvent
{

};

// ScriptStruct Indiana.DeathClassRow
// 0x0000
struct FDeathClassRow
{

};

// ScriptStruct Indiana.DeathBodyTypeAudioEvent
// 0x0000
struct FDeathBodyTypeAudioEvent
{

};

// ScriptStruct Indiana.DeathPoseData
// 0x0000
struct FDeathPoseData
{

};

// ScriptStruct Indiana.DeathBodyInstanceData
// 0x0000
struct FDeathBodyInstanceData
{

};

// ScriptStruct Indiana.RandomRequestItem
// 0x0000
struct FRandomRequestItem
{

};

// ScriptStruct Indiana.DecisionTreeContextMap
// 0x0000
struct FDecisionTreeContextMap
{

};

// ScriptStruct Indiana.DecisionTreeStack
// 0x0000
struct FDecisionTreeStack
{

};

// ScriptStruct Indiana.DecisionTreeMapElement
// 0x0000
struct FDecisionTreeMapElement
{

};

// ScriptStruct Indiana.DecisionTreeResult
// 0x0000
struct FDecisionTreeResult
{

};

// ScriptStruct Indiana.StatModifierDescriptionBase
// 0x0000
struct FStatModifierDescriptionBase
{

};

// ScriptStruct Indiana.DifficultyStatModifierDescription
// 0x0000
struct FDifficultyStatModifierDescription
{

};

// ScriptStruct Indiana.DifficultyModifier
// 0x0000
struct FDifficultyModifier
{

};

// ScriptStruct Indiana.EmotionEntry
// 0x0000
struct FEmotionEntry
{

};

// ScriptStruct Indiana.PotentialEncounterList
// 0x0000
struct FPotentialEncounterList
{

};

// ScriptStruct Indiana.EncounterClearConditions
// 0x0000
struct FEncounterClearConditions
{

};

// ScriptStruct Indiana.LogicalGroupedExpression
// 0x0000
struct FLogicalGroupedExpression
{

};

// ScriptStruct Indiana.LogicalExpressionGroup
// 0x0000
struct FLogicalExpressionGroup
{

};

// ScriptStruct Indiana.EncounterActivationConditions
// 0x0000
struct FEncounterActivationConditions
{

};

// ScriptStruct Indiana.AIDynamicParam_IndianaBase
// 0x0000
struct FAIDynamicParam_IndianaBase
{

};

// ScriptStruct Indiana.MedKitConsumableSlot
// 0x0000
struct FMedKitConsumableSlot
{

};

// ScriptStruct Indiana.WeaponSlot
// 0x0000
struct FWeaponSlot
{

};

// ScriptStruct Indiana.EventEffectParams
// 0x0000
struct FEventEffectParams
{

};

// ScriptStruct Indiana.EventEffectState
// 0x0000
struct FEventEffectState
{

};

// ScriptStruct Indiana.PlayFxPair
// 0x0000
struct FPlayFxPair
{

};

// ScriptStruct Indiana.PlayFxState
// 0x0000
struct FPlayFxState
{

};

// ScriptStruct Indiana.AkPlaySoundStatePair
// 0x0000
struct FAkPlaySoundStatePair
{

};

// ScriptStruct Indiana.AkPlaySoundState
// 0x0000
struct FAkPlaySoundState
{

};

// ScriptStruct Indiana.EyesTrackingRegion
// 0x0000
struct FEyesTrackingRegion
{

};

// ScriptStruct Indiana.FaceFxRigsGameDataReferenceID
// 0x0000
struct FFaceFxRigsGameDataReferenceID
{

};

// ScriptStruct Indiana.FaceFxRigStructure
// 0x0000
struct FFaceFxRigStructure
{

};

// ScriptStruct Indiana.ShotInfo
// 0x0000
struct FShotInfo
{

};

// ScriptStruct Indiana.FootstepSurfaceMatch
// 0x0000
struct FFootstepSurfaceMatch
{

};

// ScriptStruct Indiana.FootstepMatch
// 0x0000
struct FFootstepMatch
{

};

// ScriptStruct Indiana.SpecialMovementStimulusProperties
// 0x0000
struct FSpecialMovementStimulusProperties
{

};

// ScriptStruct Indiana.SpecialEventStimulusOverride
// 0x0000
struct FSpecialEventStimulusOverride
{

};

// ScriptStruct Indiana.FootstepStimulus
// 0x0000
struct FFootstepStimulus
{

};

// ScriptStruct Indiana.FootstepStimulusOverride
// 0x0000
struct FFootstepStimulusOverride
{

};

// ScriptStruct Indiana.SpecialMovementVisualProperties
// 0x0000
struct FSpecialMovementVisualProperties
{

};

// ScriptStruct Indiana.SpecialEventVisualsOverride
// 0x0000
struct FSpecialEventVisualsOverride
{

};

// ScriptStruct Indiana.FootstepVisuals
// 0x0000
struct FFootstepVisuals
{

};

// ScriptStruct Indiana.FootstepVisualsOverride
// 0x0000
struct FFootstepVisualsOverride
{

};

// ScriptStruct Indiana.TransformOverride
// 0x0000
struct FTransformOverride
{

};

// ScriptStruct Indiana.BlockedActorData
// 0x0000
struct FBlockedActorData
{

};

// ScriptStruct Indiana.urniturePositionalAnimationData
// 0x0000
struct FurniturePositionalAnimationData
{

};

// ScriptStruct Indiana.GadgetItemDefinition
// 0x0000
struct FGadgetItemDefinition
{

};

// ScriptStruct Indiana.DelayedEventData
// 0x0000
struct FDelayedEventData
{

};

// ScriptStruct Indiana.GameTimeDataEntry
// 0x0000
struct FGameTimeDataEntry
{

};

// ScriptStruct Indiana.GameDateTime
// 0x0000
struct FGameDateTime
{

};

// ScriptStruct Indiana.GameTimespan
// 0x0000
struct FGameTimespan
{

};

// ScriptStruct Indiana.AchievementArray
// 0x0000
struct FAchievementArray
{

};

// ScriptStruct Indiana.ChatterEventRestrictedCharacterGroups
// 0x0000
struct FChatterEventRestrictedCharacterGroups
{

};

// ScriptStruct Indiana.MinMaxChatterTime
// 0x0000
struct FMinMaxChatterTime
{

};

// ScriptStruct Indiana.PseudoGodModeSettings
// 0x0000
struct FPseudoGodModeSettings
{

};

// ScriptStruct Indiana.InvestigationSettings
// 0x0000
struct FInvestigationSettings
{

};

// ScriptStruct Indiana.NavigationJumpSettings
// 0x0000
struct FNavigationJumpSettings
{

};

// ScriptStruct Indiana.NavigationBumpSettings
// 0x0000
struct FNavigationBumpSettings
{

};

// ScriptStruct Indiana.NavigationBlockDetectionSettings
// 0x0000
struct FNavigationBlockDetectionSettings
{

};

// ScriptStruct Indiana.NavigationBlockedSettings
// 0x0000
struct FNavigationBlockedSettings
{

};

// ScriptStruct Indiana.LostTargetTimes
// 0x0000
struct FLostTargetTimes
{

};

// ScriptStruct Indiana.AIEventTypeMapElement
// 0x0000
struct FAIEventTypeMapElement
{

};

// ScriptStruct Indiana.DisablePriorityMapElement
// 0x0000
struct FDisablePriorityMapElement
{

};

// ScriptStruct Indiana.WeaponAISettingsMapElement
// 0x0000
struct FWeaponAISettingsMapElement
{

};

// ScriptStruct Indiana.CompanionCommmandMoveToSettings
// 0x0000
struct FCompanionCommmandMoveToSettings
{

};

// ScriptStruct Indiana.CompanionCommmandSettings
// 0x0000
struct FCompanionCommmandSettings
{

};

// ScriptStruct Indiana.CompanionFollowSettings
// 0x0000
struct FCompanionFollowSettings
{

};

// ScriptStruct Indiana.ArmorVsDamageTypes
// 0x0000
struct FArmorVsDamageTypes
{

};

// ScriptStruct Indiana.DamageTypeScalar
// 0x0000
struct FDamageTypeScalar
{

};

// ScriptStruct Indiana.ReputationActionModifiers
// 0x0000
struct FReputationActionModifiers
{

};

// ScriptStruct Indiana.ReputationActionConsequence
// 0x0000
struct FReputationActionConsequence
{

};

// ScriptStruct Indiana.InteractAudioEvent
// 0x0000
struct FInteractAudioEvent
{

};

// ScriptStruct Indiana.ReputationElement
// 0x0000
struct FReputationElement
{

};

// ScriptStruct Indiana.LinkedBinding
// 0x0000
struct FLinkedBinding
{

};

// ScriptStruct Indiana.NameTypeBinding
// 0x0000
struct FNameTypeBinding
{

};

// ScriptStruct Indiana.GamepadBindingsList
// 0x0000
struct FGamepadBindingsList
{

};

// ScriptStruct Indiana.GamepadBindings
// 0x0000
struct FGamepadBindings
{

};

// ScriptStruct Indiana.MeleeAction
// 0x0000
struct FMeleeAction
{

};

// ScriptStruct Indiana.MeleeInput
// 0x0000
struct FMeleeInput
{

};

// ScriptStruct Indiana.MeleeAnim
// 0x0000
struct FMeleeAnim
{

};

// ScriptStruct Indiana.DefaultTeamRelationships
// 0x0000
struct FDefaultTeamRelationships
{

};

// ScriptStruct Indiana.HUDFadeSettings
// 0x0000
struct FHUDFadeSettings
{

};

// ScriptStruct Indiana.SpecializedAmmoClasses
// 0x0000
struct FSpecializedAmmoClasses
{

};

// ScriptStruct Indiana.ActionLabelDescription
// 0x0000
struct FActionLabelDescription
{

};

// ScriptStruct Indiana.TransitionGroupElement
// 0x0000
struct FTransitionGroupElement
{

};

// ScriptStruct Indiana.TrackingSetting
// 0x0000
struct FTrackingSetting
{

};

// ScriptStruct Indiana.NewHeadAppearance
// 0x0000
struct FNewHeadAppearance
{

};

// ScriptStruct Indiana.HeadTrackingRegion
// 0x0000
struct FHeadTrackingRegion
{

};

// ScriptStruct Indiana.AreaHeightTile
// 0x0000
struct FAreaHeightTile
{

};

// ScriptStruct Indiana.HelmetItemDefinition
// 0x0000
struct FHelmetItemDefinition
{

};

// ScriptStruct Indiana.HeightValuesTexture
// 0x0000
struct FHeightValuesTexture
{

};

// ScriptStruct Indiana.HitLocationChance
// 0x0000
struct FHitLocationChance
{

};

// ScriptStruct Indiana.IDSet
// 0x0000
struct FIDSet
{

};

// ScriptStruct Indiana.ImpactAudioDamageTypeOverlays
// 0x0000
struct FImpactAudioDamageTypeOverlays
{

};

// ScriptStruct Indiana.ImpactAIDataOverride
// 0x0000
struct FImpactAIDataOverride
{

};

// ScriptStruct Indiana.ImpactFxEntry
// 0x0000
struct FImpactFxEntry
{

};

// ScriptStruct Indiana.ImpactParticle
// 0x0000
struct FImpactParticle
{

};

// ScriptStruct Indiana.PerceptionRangeScalar
// 0x0000
struct FPerceptionRangeScalar
{

};

// ScriptStruct Indiana.IndianaAINoiseEvent
// 0x0000
struct FIndianaAINoiseEvent
{

};

// ScriptStruct Indiana.AudioState
// 0x0000
struct FAudioState
{

};

// ScriptStruct Indiana.BreakBoneInfo
// 0x0000
struct FBreakBoneInfo
{

};

// ScriptStruct Indiana.AttributeStatModifierDescription
// 0x0000
struct FAttributeStatModifierDescription
{

};

// ScriptStruct Indiana.LandAudioEvent
// 0x0000
struct FLandAudioEvent
{

};

// ScriptStruct Indiana.AutoConsoleCommandProperties
// 0x0000
struct FAutoConsoleCommandProperties
{

};

// ScriptStruct Indiana.AutoRandomInputProperties
// 0x0000
struct FAutoRandomInputProperties
{

};

// ScriptStruct Indiana.PropComponents
// 0x0000
struct FPropComponents
{

};

// ScriptStruct Indiana.AimTargets
// 0x0000
struct FAimTargets
{

};

// ScriptStruct Indiana.CompanionInfo
// 0x0000
struct FCompanionInfo
{

};

// ScriptStruct Indiana.TagToAudioList
// 0x0000
struct FTagToAudioList
{

};

// ScriptStruct Indiana.TagToAudio
// 0x0000
struct FTagToAudio
{

};

// ScriptStruct Indiana.ConditionalizedLoadingTips
// 0x0000
struct FConditionalizedLoadingTips
{

};

// ScriptStruct Indiana.LoadingScreenRegionMaps
// 0x0000
struct FLoadingScreenRegionMaps
{

};

// ScriptStruct Indiana.ConditionalizedLoadingImageContainer
// 0x0000
struct FConditionalizedLoadingImageContainer
{

};

// ScriptStruct Indiana.WeightedImageData
// 0x0000
struct FWeightedImageData
{

};

// ScriptStruct Indiana.LoadingImageContainer
// 0x0000
struct FLoadingImageContainer
{

};

// ScriptStruct Indiana.TrajectoryResult
// 0x0000
struct FTrajectoryResult
{

};

// ScriptStruct Indiana.RotatedBox
// 0x0000
struct FRotatedBox
{

};

// ScriptStruct Indiana.SkillUnlockEffect
// 0x0000
struct FSkillUnlockEffect
{

};

// ScriptStruct Indiana.SkillCheck
// 0x0000
struct FSkillCheck
{

};

// ScriptStruct Indiana.AttributesArray
// 0x0000
struct FAttributesArray
{

};

// ScriptStruct Indiana.SkillsArray
// 0x0000
struct FSkillsArray
{

};

// ScriptStruct Indiana.TextAnimationData
// 0x0000
struct FTextAnimationData
{

};

// ScriptStruct Indiana.OpacityWrapper
// 0x0000
struct FOpacityWrapper
{

};

// ScriptStruct Indiana.InputLabelDescription
// 0x0000
struct FInputLabelDescription
{

};

// ScriptStruct Indiana.InteractActorDescription
// 0x0000
struct FInteractActorDescription
{

};

// ScriptStruct Indiana.InteractPayload
// 0x0000
struct FInteractPayload
{

};

// ScriptStruct Indiana.InteractPayloadParamDescription
// 0x0000
struct FInteractPayloadParamDescription
{

};

// ScriptStruct Indiana.InterestTypeData
// 0x0000
struct FInterestTypeData
{

};

// ScriptStruct Indiana.DefaultItemStack
// 0x0000
struct FDefaultItemStack
{

};

// ScriptStruct Indiana.ItemDefinitionVariant
// 0x0000
struct FItemDefinitionVariant
{

};

// ScriptStruct Indiana.WeaponModItemDefinition
// 0x0000
struct FWeaponModItemDefinition
{

};

// ScriptStruct Indiana.QuestItmDefinition
// 0x0000
struct FQuestItmDefinition
{

};

// ScriptStruct Indiana.ResourceItmDefinition
// 0x0000
struct FResourceItmDefinition
{

};

// ScriptStruct Indiana.WeaponItemDefinition
// 0x0000
struct FWeaponItemDefinition
{

};

// ScriptStruct Indiana.ExaminableStringSet
// 0x0000
struct FExaminableStringSet
{

};

// ScriptStruct Indiana.ItemViewerInitializer
// 0x0000
struct FItemViewerInitializer
{

};

// ScriptStruct Indiana.PageDimensions
// 0x0000
struct FPageDimensions
{

};

// ScriptStruct Indiana.NavigationCategory
// 0x0000
struct FNavigationCategory
{

};

// ScriptStruct Indiana.TalkingIdleEntry
// 0x0000
struct FTalkingIdleEntry
{

};

// ScriptStruct Indiana.DeathMontageGroup
// 0x0000
struct FDeathMontageGroup
{

};

// ScriptStruct Indiana.LocomotionData
// 0x0000
struct FLocomotionData
{

};

// ScriptStruct Indiana.MainMenuLevelDescription
// 0x0000
struct FMainMenuLevelDescription
{

};

// ScriptStruct Indiana.ManagerDebuggerPlayerData
// 0x0000
struct FManagerDebuggerPlayerData
{

};

// ScriptStruct Indiana.MapCompassUIVisuals
// 0x0000
struct FMapCompassUIVisuals
{

};

// ScriptStruct Indiana.MapFloorData
// 0x0000
struct FMapFloorData
{

};

// ScriptStruct Indiana.PointOfInterestLocation
// 0x0000
struct FPointOfInterestLocation
{

};

// ScriptStruct Indiana.MapTextEntryData
// 0x0000
struct FMapTextEntryData
{

};

// ScriptStruct Indiana.MaterialParamMod
// 0x0000
struct FMaterialParamMod
{

};

// ScriptStruct Indiana.MeleeAnimEvent
// 0x0000
struct FMeleeAnimEvent
{

};

// ScriptStruct Indiana.MeleeCollisionInfo
// 0x0000
struct FMeleeCollisionInfo
{

};

// ScriptStruct Indiana.TransformedShapeVariant
// 0x0000
struct FTransformedShapeVariant
{

};

// ScriptStruct Indiana.ShapeVariant
// 0x0000
struct FShapeVariant
{

};

// ScriptStruct Indiana.ShapeInterface
// 0x0000
struct FShapeInterface
{

};

// ScriptStruct Indiana.CapsuleShapeData
// 0x0000
struct FCapsuleShapeData
{

};

// ScriptStruct Indiana.SphereShapeData
// 0x0000
struct FSphereShapeData
{

};

// ScriptStruct Indiana.BoxShapeData
// 0x0000
struct FBoxShapeData
{

};

// ScriptStruct Indiana.DamageTypeRequirement
// 0x0000
struct FDamageTypeRequirement
{

};

// ScriptStruct Indiana.MeleeEQSResult
// 0x0000
struct FMeleeEQSResult
{

};

// ScriptStruct Indiana.MeleeAttacker
// 0x0000
struct FMeleeAttacker
{

};

// ScriptStruct Indiana.ModAppearance
// 0x0000
struct FModAppearance
{

};

// ScriptStruct Indiana.AppliedMod
// 0x0000
struct FAppliedMod
{

};

// ScriptStruct Indiana.ConditionalMusicTrack
// 0x0000
struct FConditionalMusicTrack
{

};

// ScriptStruct Indiana.ObjectRefCounter
// 0x0000
struct FObjectRefCounter
{

};

// ScriptStruct Indiana.ObjectiveWaypointGameDataReferenceID
// 0x0000
struct FObjectiveWaypointGameDataReferenceID
{

};

// ScriptStruct Indiana.OEIStringTable
// 0x0000
struct FOEIStringTable
{

};

// ScriptStruct Indiana.OEIStringEntry
// 0x0000
struct FOEIStringEntry
{

};

// ScriptStruct Indiana.PendingParticleSpawnInfo
// 0x0000
struct FPendingParticleSpawnInfo
{

};

// ScriptStruct Indiana.ParticleSystemPool
// 0x0000
struct FParticleSystemPool
{

};

// ScriptStruct Indiana.PerkTextures
// 0x0000
struct FPerkTextures
{

};

// ScriptStruct Indiana.PerkTiers
// 0x0000
struct FPerkTiers
{

};

// ScriptStruct Indiana.PerkTier
// 0x0000
struct FPerkTier
{

};

// ScriptStruct Indiana.AddictionTimer
// 0x0000
struct FAddictionTimer
{

};

// ScriptStruct Indiana.SurvivalTier
// 0x0000
struct FSurvivalTier
{

};

// ScriptStruct Indiana.CurveData
// 0x0000
struct FCurveData
{

};

// ScriptStruct Indiana.SkillValueExperienceRange
// 0x0000
struct FSkillValueExperienceRange
{

};

// ScriptStruct Indiana.LevelDifferenceRangeScalar
// 0x0000
struct FLevelDifferenceRangeScalar
{

};

// ScriptStruct Indiana.LootOnBreakdown
// 0x0000
struct FLootOnBreakdown
{

};

// ScriptStruct Indiana.DodgeProperties
// 0x0000
struct FDodgeProperties
{

};

// ScriptStruct Indiana.DodgeInputRange
// 0x0000
struct FDodgeInputRange
{

};

// ScriptStruct Indiana.InterestStateTextures
// 0x0000
struct FInterestStateTextures
{

};

// ScriptStruct Indiana.PostProcessFX
// 0x0000
struct FPostProcessFX
{

};

// ScriptStruct Indiana.DifficultyRange
// 0x0000
struct FDifficultyRange
{

};

// ScriptStruct Indiana.RandomActionSetPair
// 0x0000
struct FRandomActionSetPair
{

};

// ScriptStruct Indiana.RandomBank
// 0x0000
struct FRandomBank
{

};

// ScriptStruct Indiana.RandomBankGameDataReferenceID
// 0x0000
struct FRandomBankGameDataReferenceID
{

};

// ScriptStruct Indiana.WeightedEffect
// 0x0000
struct FWeightedEffect
{

};

// ScriptStruct Indiana.QueryPair
// 0x0000
struct FQueryPair
{

};

// ScriptStruct Indiana.PriorityCreatureSpawn
// 0x0000
struct FPriorityCreatureSpawn
{

};

// ScriptStruct Indiana.RandomTextEntry
// 0x0000
struct FRandomTextEntry
{

};

// ScriptStruct Indiana.DepthOfFieldSettings
// 0x0000
struct FDepthOfFieldSettings
{

};

// ScriptStruct Indiana.HitReaction
// 0x0000
struct FHitReaction
{

};

// ScriptStruct Indiana.ConversationReference
// 0x0000
struct FConversationReference
{

};

// ScriptStruct Indiana.CrosshairStates
// 0x0000
struct FCrosshairStates
{

};

// ScriptStruct Indiana.CrosshairVisuals
// 0x0000
struct FCrosshairVisuals
{

};

// ScriptStruct Indiana.StatClampingData
// 0x0000
struct FStatClampingData
{

};

// ScriptStruct Indiana.RpgStatCollection
// 0x0000
struct FRpgStatCollection
{

};

// ScriptStruct Indiana.StatInstance
// 0x0000
struct FStatInstance
{

};

// ScriptStruct Indiana.StatModifierInstance
// 0x0000
struct FStatModifierInstance
{

};

// ScriptStruct Indiana.StatModifierDescription
// 0x0000
struct FStatModifierDescription
{

};

// ScriptStruct Indiana.SaveGameDataAIController
// 0x0000
struct FSaveGameDataAIController
{

};

// ScriptStruct Indiana.SaveGameDataInterest
// 0x0000
struct FSaveGameDataInterest
{

};

// ScriptStruct Indiana.SaveGameDataDecisionTree
// 0x0000
struct FSaveGameDataDecisionTree
{

};

// ScriptStruct Indiana.SaveGameDataTargetInfo
// 0x0000
struct FSaveGameDataTargetInfo
{

};

// ScriptStruct Indiana.SaveGameDataDetection
// 0x0000
struct FSaveGameDataDetection
{

};

// ScriptStruct Indiana.SaveGameDataBehaviorStack
// 0x0000
struct FSaveGameDataBehaviorStack
{

};

// ScriptStruct Indiana.SharedStateStubData
// 0x0000
struct FSharedStateStubData
{

};

// ScriptStruct Indiana.SaveGameGeneralMetadata
// 0x0000
struct FSaveGameGeneralMetadata
{

};

// ScriptStruct Indiana.LevelReference
// 0x0000
struct FLevelReference
{

};

// ScriptStruct Indiana.GenericGameStateHeader
// 0x0000
struct FGenericGameStateHeader
{

};

// ScriptStruct Indiana.GenericVersionedGameStateHeader
// 0x0000
struct FGenericVersionedGameStateHeader
{

};

// ScriptStruct Indiana.CompanionGameStateHeader
// 0x0000
struct FCompanionGameStateHeader
{

};

// ScriptStruct Indiana.PlayerGameStateHeader
// 0x0000
struct FPlayerGameStateHeader
{

};

// ScriptStruct Indiana.ActorGameStateHeader
// 0x0000
struct FActorGameStateHeader
{

};

// ScriptStruct Indiana.LevelGameStateHeader
// 0x0000
struct FLevelGameStateHeader
{

};

// ScriptStruct Indiana.GenericVersionedWithDependenciesGameStateHeader
// 0x0000
struct FGenericVersionedWithDependenciesGameStateHeader
{

};

// ScriptStruct Indiana.CachedGameState
// 0x0000
struct FCachedGameState
{

};

// ScriptStruct Indiana.PendingDeferredSpawn
// 0x0000
struct FPendingDeferredSpawn
{

};

// ScriptStruct Indiana.DependencyLoadRequest
// 0x0000
struct FDependencyLoadRequest
{

};

// ScriptStruct Indiana.DestroyedPrePlacedActorRegistry
// 0x0000
struct FDestroyedPrePlacedActorRegistry
{

};

// ScriptStruct Indiana.ScaledActorEntry
// 0x0000
struct FScaledActorEntry
{

};

// ScriptStruct Indiana.HUDSetting
// 0x0000
struct FHUDSetting
{

};

// ScriptStruct Indiana.DynamicOverrides
// 0x0000
struct FDynamicOverrides
{

};

// ScriptStruct Indiana.GamepadLayout
// 0x0000
struct FGamepadLayout
{

};

// ScriptStruct Indiana.SettingPlatformStringContainer
// 0x0000
struct FSettingPlatformStringContainer
{

};

// ScriptStruct Indiana.SettingDescription
// 0x0000
struct FSettingDescription
{

};

// ScriptStruct Indiana.SubcategoryDescription
// 0x0000
struct FSubcategoryDescription
{

};

// ScriptStruct Indiana.TransformedShape
// 0x0000
struct FTransformedShape
{

};

// ScriptStruct Indiana.MapShipDestinations
// 0x0000
struct FMapShipDestinations
{

};

// ScriptStruct Indiana.SpawnPropertyModifiers
// 0x0000
struct FSpawnPropertyModifiers
{

};

// ScriptStruct Indiana.SpellEffectByEvent
// 0x0000
struct FSpellEffectByEvent
{

};

// ScriptStruct Indiana.TargetEffect
// 0x0000
struct FTargetEffect
{

};

// ScriptStruct Indiana.TargetCone
// 0x0000
struct FTargetCone
{

};

// ScriptStruct Indiana.AreaOfEffect
// 0x0000
struct FAreaOfEffect
{

};

// ScriptStruct Indiana.SpellInstance
// 0x0000
struct FSpellInstance
{

};

// ScriptStruct Indiana.SpellSet
// 0x0000
struct FSpellSet
{

};

// ScriptStruct Indiana.RangedStatModifierDescription
// 0x0000
struct FRangedStatModifierDescription
{

};

// ScriptStruct Indiana.StatusEffectSerializationContext
// 0x0000
struct FStatusEffectSerializationContext
{

};

// ScriptStruct Indiana.DynamicEffectProperties
// 0x0000
struct FDynamicEffectProperties
{

};

// ScriptStruct Indiana.AwarenessTalkImageSet
// 0x0000
struct FAwarenessTalkImageSet
{

};

// ScriptStruct Indiana.AwarenessImageSet
// 0x0000
struct FAwarenessImageSet
{

};

// ScriptStruct Indiana.AlertStateImageSet
// 0x0000
struct FAlertStateImageSet
{

};

// ScriptStruct Indiana.SubtitleEntry
// 0x0000
struct FSubtitleEntry
{

};

// ScriptStruct Indiana.MiniTimeSpan
// 0x0000
struct FMiniTimeSpan
{

};

// ScriptStruct Indiana.SystemMapEntryData
// 0x0000
struct FSystemMapEntryData
{

};

// ScriptStruct Indiana.WwiseVOEvent
// 0x0000
struct FWwiseVOEvent
{

};

// ScriptStruct Indiana.ScriptedTeamDataSource
// 0x0000
struct FScriptedTeamDataSource
{

};

// ScriptStruct Indiana.TeamRelationship
// 0x0000
struct FTeamRelationship
{

};

// ScriptStruct Indiana.TestAudioDataTypeReferenceID
// 0x0000
struct FTestAudioDataTypeReferenceID
{

};

// ScriptStruct Indiana.TimeDilationData
// 0x0000
struct FTimeDilationData
{

};

// ScriptStruct Indiana.IKChainConfig
// 0x0000
struct FIKChainConfig
{

};

// ScriptStruct Indiana.LocomotionNode
// 0x0000
struct FLocomotionNode
{

};

// ScriptStruct Indiana.BodyRotationProperties
// 0x0000
struct FBodyRotationProperties
{

};

// ScriptStruct Indiana.TravelShipData
// 0x0000
struct FTravelShipData
{

};

// ScriptStruct Indiana.TravelShipMapPosition
// 0x0000
struct FTravelShipMapPosition
{

};

// ScriptStruct Indiana.TravelMapPosition
// 0x0000
struct FTravelMapPosition
{

};

// ScriptStruct Indiana.TutorialBaseEventData
// 0x0000
struct FTutorialBaseEventData
{

};

// ScriptStruct Indiana.TutorialFullScreenEventDataContainer
// 0x0000
struct FTutorialFullScreenEventDataContainer
{

};

// ScriptStruct Indiana.TutorialPlatformStringContainer
// 0x0000
struct FTutorialPlatformStringContainer
{

};

// ScriptStruct Indiana.TutorialEventDataContainer
// 0x0000
struct FTutorialEventDataContainer
{

};

// ScriptStruct Indiana.ResolutionFontSizeData
// 0x0000
struct FResolutionFontSizeData
{

};

// ScriptStruct Indiana.PerkCostModifier
// 0x0000
struct FPerkCostModifier
{

};

// ScriptStruct Indiana.CostModifiers
// 0x0000
struct FCostModifiers
{

};

// ScriptStruct Indiana.VendorStockDescriptor
// 0x0000
struct FVendorStockDescriptor
{

};

// ScriptStruct Indiana.WaitData
// 0x0000
struct FWaitData
{

};

// ScriptStruct Indiana.OnHitStatusEffects
// 0x0000
struct FOnHitStatusEffects
{

};

// ScriptStruct Indiana.WeaponAimTrackingRegion
// 0x0000
struct FWeaponAimTrackingRegion
{

};

// ScriptStruct Indiana.HitFlinchAnim
// 0x0000
struct FHitFlinchAnim
{

};

// ScriptStruct Indiana.WeaponModDefaultVisuals
// 0x0000
struct FWeaponModDefaultVisuals
{

};

// ScriptStruct Indiana.WeaponModSlot
// 0x0000
struct FWeaponModSlot
{

};

// ScriptStruct Indiana.WeaponModProjectileOverride
// 0x0000
struct FWeaponModProjectileOverride
{

};

// ScriptStruct Indiana.WeaponModVisualOverride
// 0x0000
struct FWeaponModVisualOverride
{

};

// ScriptStruct Indiana.WeaponInputBuffer
// 0x0000
struct FWeaponInputBuffer
{

};

// ScriptStruct Indiana.LerpTimer
// 0x0000
struct FLerpTimer
{

};

// ScriptStruct Indiana.IndianaSliderStyle
// 0x0000
struct FIndianaSliderStyle
{

};

// ScriptStruct Indiana.HitTypeData
// 0x0000
struct FHitTypeData
{

};

// ScriptStruct Indiana.DamageTypeColors
// 0x0000
struct FDamageTypeColors
{

};

// ScriptStruct Indiana.HairAppearance
// 0x0000
struct FHairAppearance
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
