//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject
{
    NSUInteger _urgency;
    NSMutableDictionary *_urgencies;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)recomputeUrgency;
- (void)ageUrgencies;
- (id)allUrgencies;
- (NSUInteger)urgencyForClient:(id)arg1;
- (NSUInteger)currentUrgency;
- (void)updateUrgency:(NSUInteger)arg1 forClient:(id)arg2;

@end

