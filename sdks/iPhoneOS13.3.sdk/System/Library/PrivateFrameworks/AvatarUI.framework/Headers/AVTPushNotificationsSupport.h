//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/APSConnectionDelegate-Protocol.h>
#import <AvatarUI/AVTPushNotificationsSupport-Protocol.h>

@class APSConnection, AVTCoreEnvironment, AVTPushNotificationsConnectionFactory;
@protocol AVTPushNotificationsSupportDelegate, AVTUILogger, OS_dispatch_queue;

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport>
{
    id <AVTPushNotificationsSupportDelegate> _delegate;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    AVTCoreEnvironment *_environment;
    AVTPushNotificationsConnectionFactory *_connectionFactory;
    id <AVTUILogger> _logger;
}

+ (id)topic;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTPushNotificationsConnectionFactory *connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(nonatomic) __weak id <AVTPushNotificationsSupportDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)stopListeningToPushNotifications;
- (void)startListeningToPushNotifications;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)setupConnectionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getAPSEnvironmentString:(id /* CDUnknownBlockType */)arg1;
- (id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2;

@end
