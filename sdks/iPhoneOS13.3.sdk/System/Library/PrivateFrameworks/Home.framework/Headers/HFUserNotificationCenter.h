//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/UNUserNotificationCenterDelegate-Protocol.h>

@class NAFuture, NSHashTable, UNUserNotificationCenter;
@protocol HFUserNotificationPresentationHandling;

@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_userNotificationCenter;
    id <HFUserNotificationPresentationHandling> _presentationHandler;
    NAFuture *_notificationSettingsFuture;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *notificationSettingsFuture; // @synthesize notificationSettingsFuture=_notificationSettingsFuture;
@property(nonatomic) __weak id <HFUserNotificationPresentationHandling> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
// - (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (id)notificationSettings;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

