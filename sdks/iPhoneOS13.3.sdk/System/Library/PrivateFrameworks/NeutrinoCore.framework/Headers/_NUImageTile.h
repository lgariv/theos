//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NUPurgeableStorage, OS_dispatch_queue;

@interface _NUImageTile : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <NUPurgeableStorage> _storage;
    NSUInteger _useCount;
    NSUInteger _accessCount;
    BOOL _wasPurged;
}

// - (void).cxx_destruct;
- (BOOL)isValid;
- (long long)copyFromTile:(id)arg1 region:(id)arg2;
- (long long)writeStorageInRegion:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (long long)readStorageInRegion:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)_visitRead:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_markAsUnpurgeable;
- (void)_markAsPurgeable;
- (BOOL)_decrementAccessCount;
- (BOOL)_incrementAccessCount;
- (BOOL)_decrementUseCount;
- (BOOL)decrementAccessAndUseCount;
- (BOOL)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
- (BOOL)decrementAccessCount;
- (BOOL)incrementAccessCount;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;
- (BOOL)isShared;
- (NSUInteger)accessCount;
- (NSUInteger)useCount;
- (void)returnToStorageFactory:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

@end
