//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class NSMutableArray;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject>
{
    long long _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    BOOL _shouldRequestACleanupToScheduler;
}

+ (id)scopeTypeDescriptionForScopeType:(NSUInteger)arg1;
// - (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (BOOL)hasCleanupTasks;
- (BOOL)cleanupStepHasMore:(BOOL )arg1 error:(id )arg2;
- (BOOL)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(NSUInteger)arg3 error:(id )arg4;
- (NSUInteger)scopeType;

@end
