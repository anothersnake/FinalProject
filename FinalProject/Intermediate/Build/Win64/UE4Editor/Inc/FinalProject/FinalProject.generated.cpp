// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "FinalProject.h"
#include "FinalProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalProject() {}
	void AFinalProjectCharacter::StaticRegisterNativesAFinalProjectCharacter()
	{
	}
	IMPLEMENT_CLASS(AFinalProjectCharacter, 2365095764);
	void AFinalProjectGameMode::StaticRegisterNativesAFinalProjectGameMode()
	{
	}
	IMPLEMENT_CLASS(AFinalProjectGameMode, 3720538717);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	PAPER2D_API class UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	FINALPROJECT_API class UClass* Z_Construct_UClass_AFinalProjectCharacter_NoRegister();
	FINALPROJECT_API class UClass* Z_Construct_UClass_AFinalProjectCharacter();
	FINALPROJECT_API class UClass* Z_Construct_UClass_AFinalProjectGameMode_NoRegister();
	FINALPROJECT_API class UClass* Z_Construct_UClass_AFinalProjectGameMode();
	FINALPROJECT_API class UPackage* Z_Construct_UPackage_FinalProject();
	UClass* Z_Construct_UClass_AFinalProjectCharacter_NoRegister()
	{
		return AFinalProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFinalProjectCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APaperCharacter();
			Z_Construct_UPackage_FinalProject();
			OuterClass = AFinalProjectCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_IdleAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleAnimation"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(IdleAnimation, AFinalProjectCharacter), 0x0000080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RunningAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RunningAnimation"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(RunningAnimation, AFinalProjectCharacter), 0x0000080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AFinalProjectCharacter), 0x00000000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, AFinalProjectCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ModuleRelativePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ToolTip"), TEXT("The animation to play while idle (standing still)"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ModuleRelativePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ToolTip"), TEXT("The animation to play while running around"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("FinalProjectCharacter.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalProjectCharacter(Z_Construct_UClass_AFinalProjectCharacter, TEXT("AFinalProjectCharacter"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectCharacter);
	UClass* Z_Construct_UClass_AFinalProjectGameMode_NoRegister()
	{
		return AFinalProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFinalProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_FinalProject();
			OuterClass = AFinalProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FinalProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FinalProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of FinalProjectCharacter"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalProjectGameMode(Z_Construct_UClass_AFinalProjectGameMode, TEXT("AFinalProjectGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectGameMode);
	UPackage* Z_Construct_UPackage_FinalProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FinalProject")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xEFF4F05D;
			Guid.B = 0x6D84EBAF;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
