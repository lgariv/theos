//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PXIDSAddressQuery : NSObject
{
    NSUInteger _destinationsCount;
    NSMutableSet *_mutableRemainingDestinations;
    NSMutableDictionary *_mutableStashedResults;
    NSUInteger _resultsCount;
    id /* CDUnknownBlockType */ _resultHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isComplete;
@property(readonly, copy, nonatomic) NSSet *remainingDestinations;
- (id)popStashedResults;
- (void)stashDestination:(id)arg1 withResult:(BOOL)arg2;
- (id)initWithDestinations:(id)arg1 resultHandler:(id /* CDUnknownBlockType */)arg2;

@end

