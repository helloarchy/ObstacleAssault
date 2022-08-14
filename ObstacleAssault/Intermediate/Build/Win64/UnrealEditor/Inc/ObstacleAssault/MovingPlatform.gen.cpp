// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputC_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputI_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputJ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputJ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputK_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputK;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyInt_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MyInt), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputA_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputA = { "InputA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, InputA), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputB_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputB = { "InputB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, InputB), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputC_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputC = { "OutputC", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, OutputC), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MyFloat), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputI_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputI = { "InputI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, InputI), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputJ_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputJ = { "InputJ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, InputJ), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputJ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputJ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputK_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputK = { "OutputK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, OutputK), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputK_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_InputJ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_OutputK,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 300373571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_2939451546(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
