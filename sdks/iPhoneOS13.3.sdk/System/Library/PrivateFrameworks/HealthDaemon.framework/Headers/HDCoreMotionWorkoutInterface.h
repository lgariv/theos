//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class CMWorkout, CMWorkoutManager, CMWorkoutMets, HDAssertionManager;
@protocol OS_dispatch_queue;

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    CMWorkoutMets *_cmWorkoutMets;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
}

// - (void).cxx_destruct;
- (id)_queue_coreMotionWorkoutMets;
- (id)_queue_coreMotionWorkoutManager;
- (void)_queue_stopWorkoutWithAssertion:(id)arg1;
- (NSUInteger)_queue_countActiveAssertionsForSessionUUID:(id)arg1;
- (id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (void)_queue_startWorkoutWithAssertion:(id)arg1;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)averageMETsForWorkoutSessionUUID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (id)init;

@end
