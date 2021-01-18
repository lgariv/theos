//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation
{
    NSPredicate *_predicate;
    int _entityType;
    struct CalDatabase _database;
    int _fetchIdentifier;
    id /* CDUnknownBlockType */ _completion;
}

@property(readonly, nonatomic) int fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
// - (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(struct CalDatabase )arg3 fetchIdentifier:(int)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;

@end
