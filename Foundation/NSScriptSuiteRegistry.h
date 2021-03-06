//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSScriptClassDescription, NSScriptCommandDescription;

@interface NSScriptSuiteRegistry : NSObject
{
    BOOL _isLoadingSDEFFiles;
    BOOL _isLoadingSecurityOverride;
    BOOL _hasLoadedIntrinsics;
    char _reserved1[1];
    NSMutableSet *_seenBundles;
    NSMutableArray *_suiteDescriptionsBeingCollected;
    NSScriptClassDescription *_classDescriptionNeedingRegistration;
    NSMutableArray *_suiteDescriptions;
    NSScriptCommandDescription *_commandDescriptionNeedingRegistration;
    NSMutableDictionary *_cachedClassDescriptionsByAppleEventCode;
    NSMutableDictionary *_cachedCommandDescriptionsByAppleEventCodes;
    NSDictionary *_cachedSuiteDescriptionsByName;
    NSMutableDictionary *_complexTypeDescriptionsByName;
    NSMutableDictionary *_listTypeDescriptionsByName;
    unsigned int _nextComplexTypeAppleEventCode;
    void *_reserved2[4];
}

+ (BOOL)_isScriptingEnabled;
+ (void)setSharedScriptSuiteRegistry:(id)arg1;
+ (id)sharedScriptSuiteRegistry;
+ (void)_loadScriptSuites;
- (id)aeteResource:(id)arg1;
- (id)commandDescriptionWithAppleEventClass:(unsigned int)arg1 andAppleEventCode:(unsigned int)arg2;
- (id)classDescriptionWithAppleEventCode:(unsigned int)arg1;
- (id)suiteForAppleEventCode:(unsigned int)arg1;
- (id)commandDescriptionsInSuite:(id)arg1;
- (id)classDescriptionsInSuite:(id)arg1;
- (id)bundleForSuite:(id)arg1;
- (unsigned int)appleEventCodeForSuite:(id)arg1;
@property(readonly, copy) NSArray *suiteNames;
- (void)registerCommandDescription:(id)arg1;
- (void)registerClassDescription:(id)arg1;
- (id)_newRegisteredSuiteDescriptionForName:(id)arg1;
- (void)loadSuiteWithDictionary:(id)arg1 fromBundle:(id)arg2;
- (void)loadSuitesFromBundle:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_loadSuitesForSecurityOverride;
- (void)_loadSuitesForJustLoadedBundle:(id)arg1;
- (void)_loadSuitesForAlreadyLoadedBundles;
- (void)_loadIntrinsicScriptingDefinitions;
- (void)_loadSuitesFromSDEFData:(id)arg1 bundle:(id)arg2;
- (void)_loadSuiteDescription:(id)arg1;
- (void)_registerOrCollectSuiteDescription:(id)arg1;
- (void)_registerSuiteDescriptions:(id)arg1;
- (id)_aeteDataForAllSuites;
- (unsigned long long)_appendTypeNamesSuiteDeclarationToAETEData:(id)arg1;
- (unsigned long long)_appendTypeDefinitionsSuiteDeclarationToAETEData:(id)arg1;
- (id)description;
- (id)_suiteDescriptions;
- (id)_initWithSDEFData:(id)arg1 otherAppBundle:(id)arg2;
- (id)_typeDescriptionForAppleEventCode:(unsigned int)arg1;
- (id)_listTypeDescriptions;
- (id)_complexTypeDescriptions;
- (id)_suiteDescriptionsByName;
- (id)_subclassDescriptionsForDescription:(id)arg1;
- (id)_objectSpecifierTypeDescription;
- (id)_objectTypeDescriptionForClassAppleEventCode:(unsigned int)arg1 isValid:(char *)arg2;
- (id)_typeDescriptionForName:(id)arg1 suiteName:(id)arg2 isValid:(char *)arg3;
- (id)_typeDescriptionForName:(id)arg1;
- (id)_classDescriptionForName:(id)arg1 suiteName:(id)arg2 isValid:(char *)arg3;
- (id)_classDescriptionForName:(id)arg1;
- (BOOL)_isLoadingSDEFFiles;

@end

