//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject
{
    NSMutableSet *_inFlightAnimations;
}

+ (void)_scrollAnimationOccurredWithContext:(CDStruct_0c606d9b)arg1 isBegin:(BOOL)arg2;
+ (void)scrollAnimationDidEndWithScrollContext:(CDStruct_0c606d9b)arg1;
+ (void)scrollAnimationDidBeginWithScrollContext:(CDStruct_0c606d9b)arg1;
+ (id)sharedTracker;
@property(readonly, nonatomic) NSMutableSet *inFlightAnimations; // @synthesize inFlightAnimations=_inFlightAnimations;
// - (void).cxx_destruct;
- (void)zoomLevelTransitionsDidEndEarly;
- (void)_zoomLevelTransitionOccurred:(id)arg1 isPreparation:(BOOL)arg2 isBegin:(BOOL)arg3;
- (void)zoomLevelTransitionDidEnd:(id)arg1;
- (void)zoomLevelTransitionDidBegin:(id)arg1;
- (void)zoomLevelTransitionPreparationDidBegin:(id)arg1;
- (id)init;

@end

