//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceEntity.h>

#import <SpringBoard/SBProcessSettings-Protocol.h>

@class NSMutableSet, NSSet, SBApplication, SBApplicationSceneHandle, SBProcessSettings;

@interface SBApplicationSceneEntity : SBWorkspaceEntity <SBProcessSettings>
{
    SBApplicationSceneHandle *_sceneHandle;
    NSMutableSet *_actions;
    SBProcessSettings *_processSettings;
}

@property(readonly, copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) SBProcessSettings *processSettings; // @synthesize processSettings=_processSettings;
@property(readonly, nonatomic) SBApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (Class)viewControllerClass;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)applicationSceneEntity;
- (BOOL)isApplicationSceneEntity;
- (id /* CDUnknownBlockType */)entityGenerator;
- (BOOL)_supportsLayoutRole:(long long)arg1;
- (void)removeAllActions;
- (void)removeActions:(id)arg1;
- (void)addActions:(id)arg1;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (BOOL)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
@property(readonly, nonatomic) SBApplication *application;
- (id)_initWithSceneHandle:(id)arg1;
- (void)_initializeWithSceneHandle:(id)arg1;
- (void)translateActivationSettingsToActions;

@end

