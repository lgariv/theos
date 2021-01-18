//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityControlling-Protocol.h>
#import <TextInputCore/TIKeyboardApplicationStateResponses-Protocol.h>
#import <TextInputCore/TIKeyboardAssertionManagerDelegate-Protocol.h>

@class NSHashTable, NSTimer, TIKeyboardApplicationStateMonitor;
@protocol OS_dispatch_source;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses>
{
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    NSUInteger _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
    BOOL _isDirty;
    NSTimer *_inactivityTimer;
    NSHashTable *_observers;
    TIKeyboardApplicationStateMonitor *_appMonitor;
}

+ (double)defaultKeyboardIdleTimeoutInterval;
+ (double)keyboardIdleTimeoutInterval;
+ (id)singletonInstance;
+ (id)sharedController;
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;
+ (void)setSharedController:(id)arg1;
@property(retain, nonatomic) TIKeyboardApplicationStateMonitor *appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *inactivityTimer; // @synthesize inactivityTimer=_inactivityTimer;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
// - (void).cxx_destruct;
- (BOOL)shouldBecomeClean;
- (BOOL)canGoEarlyClean;
- (void)setKeyboardCleanIfNecessary;
- (BOOL)shouldBecomeDirty;
- (void)setKeyboardDirtyIfNecessary;
- (void)inactivityTimerFired:(id)arg1;
- (void)touchInactivityTimer;
- (void)backgroundActivityAssertionsDidChange;
- (void)keyboardAssertionsDidChange;
- (BOOL)atexitHandler;
- (void)releaseInputManagers;
- (void)updateActivityState;
@property(readonly, nonatomic) NSUInteger activityState;
- (NSUInteger)getExcessMemoryInBytes;
- (void)handleMemoryStatusPressure:(NSUInteger)arg1;
- (id)createMemoryPressureSource;
- (void)notifyMemoryPressureLevel:(NSUInteger)arg1 excessMemoryInBytes:(NSUInteger)arg2;
- (void)notifyTransitionWithContext:(id)arg1;
- (void)removeActivityObserver:(id)arg1;
- (void)addActivityObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
