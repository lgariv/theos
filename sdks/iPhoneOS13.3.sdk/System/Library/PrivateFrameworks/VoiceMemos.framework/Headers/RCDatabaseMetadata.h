//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface RCDatabaseMetadata : NSObject
{
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableDictionary *_metadata;
    BOOL _dirty;
}

@property(readonly) BOOL dirty; // @synthesize dirty=_dirty;
// - (void).cxx_destruct;
- (void)save;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;

@end
