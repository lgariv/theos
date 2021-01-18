//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTBulletinDistributorSubscriberDeviceDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTCompanionServer-Protocol.h>

@class BBObserver, BLTBulletinDistributorMRUSectionCache, BLTBulletinFetcher, BLTClientReplyTimeoutManager, BLTGizmoLegacyMap, BLTHashCache, BLTPingSubscriberManager, BLTRemoteGizmoClient, BLTSectionConfiguration, BLTSettingSync, BLTUserNotificationList, BLTWatchKitAppList, NSDate, NSMutableDictionary, NSMutableSet;

@interface BLTBulletinDistributor : NSObject <BLTBulletinDistributorSubscriberDeviceDelegate, BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate>
{
    NSUInteger _stateHandler;
    BOOL _standaloneTestModeEnabled;
    BLTRemoteGizmoClient *_gizmoConnection;
    BBObserver *_bbObserver;
    NSMutableDictionary *_bulletins;
    NSMutableSet *_noticesFeed;
    NSMutableSet *_lockScreenFeed;
    BLTHashCache *_attachmentHashCache;
    BLTHashCache *_iconHashCache;
    BLTWatchKitAppList *_watchKitAppList;
    BLTSettingSync *_settingSync;
    NSDate *_startupTime;
    NSMutableDictionary *_pendingBulletinUpdates;
    NSMutableSet *_bulletinIDsWaitingOnGizmoAdd;
    BLTClientReplyTimeoutManager *_clientReplyTimeoutManager;
    BLTSectionConfiguration *_sectionConfiguration;
    BLTUserNotificationList *_userNotificationList;
    BLTBulletinFetcher *_bulletinFetcher;
    BLTPingSubscriberManager *_pingSubscriberManager;
    BLTGizmoLegacyMap *_gizmoLegacyMap;
    BLTBulletinDistributorMRUSectionCache *_mruSectionCache;
}

+ (id)sharedDistributor;
@property(retain, nonatomic) BLTBulletinDistributorMRUSectionCache *mruSectionCache; // @synthesize mruSectionCache=_mruSectionCache;
@property(retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap; // @synthesize gizmoLegacyMap=_gizmoLegacyMap;
@property(retain, nonatomic) BLTPingSubscriberManager *pingSubscriberManager; // @synthesize pingSubscriberManager=_pingSubscriberManager;
@property(retain, nonatomic) BLTBulletinFetcher *bulletinFetcher; // @synthesize bulletinFetcher=_bulletinFetcher;
@property(retain, nonatomic) BLTUserNotificationList *userNotificationList; // @synthesize userNotificationList=_userNotificationList;
@property(retain, nonatomic) BLTSectionConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(retain, nonatomic) BLTClientReplyTimeoutManager *clientReplyTimeoutManager; // @synthesize clientReplyTimeoutManager=_clientReplyTimeoutManager;
@property(retain, nonatomic) NSMutableSet *bulletinIDsWaitingOnGizmoAdd; // @synthesize bulletinIDsWaitingOnGizmoAdd=_bulletinIDsWaitingOnGizmoAdd;
@property(retain, nonatomic) NSMutableDictionary *pendingBulletinUpdates; // @synthesize pendingBulletinUpdates=_pendingBulletinUpdates;
@property(nonatomic) BOOL standaloneTestModeEnabled; // @synthesize standaloneTestModeEnabled=_standaloneTestModeEnabled;
@property(retain, nonatomic) NSDate *startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) BLTSettingSync *settingSync; // @synthesize settingSync=_settingSync;
@property(retain, nonatomic) BLTWatchKitAppList *watchKitAppList; // @synthesize watchKitAppList=_watchKitAppList;
@property(retain, nonatomic) BLTHashCache *iconHashCache; // @synthesize iconHashCache=_iconHashCache;
@property(retain, nonatomic) BLTHashCache *attachmentHashCache; // @synthesize attachmentHashCache=_attachmentHashCache;
@property(retain, nonatomic) NSMutableSet *lockScreenFeed; // @synthesize lockScreenFeed=_lockScreenFeed;
@property(retain, nonatomic) NSMutableSet *noticesFeed; // @synthesize noticesFeed=_noticesFeed;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property(retain, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(retain, nonatomic) BLTRemoteGizmoClient *gizmoConnection; // @synthesize gizmoConnection=_gizmoConnection;
// - (void).cxx_destruct;
- (id)_stateDescription;
- (void)_addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 systemApp:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)shouldSuppressLightsAndSirensNow;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handleAction:(id)arg1;
- (void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(BOOL)arg6 finalReply:(BOOL)arg7 replyToken:(id)arg8;
- (void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 replyToken:(id)arg6;
- (void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(BOOL)arg4 replyToken:(id)arg5;
- (void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (CGSize)observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(CGSize)arg4;
- (void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
- (void)_performRemoveBulletin:(id)arg1 forFeed:(NSUInteger)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(NSUInteger)arg3;
- (void)_performModifyBulletin:(id)arg1 forFeed:(NSUInteger)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(NSUInteger)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(NSUInteger)arg3 playLightsAndSirens:(BOOL)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 alwaysSend:(BOOL)arg7 withReply:(id /* CDUnknownBlockType */)arg8;
- (void)_subscriberWillAllowBulletin:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_replyTokenForSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(NSUInteger)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(id /* CDUnknownBlockType */)arg5;
- (void)setReplyBlock:(id /* CDUnknownBlockType */)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (void)_cleanupForAddedBulletin:(id)arg1;
- (void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg1;
- (BOOL)_enqueuBulletinUpdate:(NSUInteger)arg1 bulletin:(id)arg2 feed:(NSUInteger)arg3;
- (void)_performNextPendingBulletinUpdateForBulletinID:(id)arg1;
- (void)_sendCurrentBulletinIdentifiers;
- (id)_obsoletionDateRelativeToNow;
- (void)_reloadBulletinsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_willNanoPresent:(NSUInteger)arg1 forBulletin:(id)arg2 feed:(NSUInteger)arg3;
- (NSUInteger)_nanoPresentableFeedFromPhoneFeed:(NSUInteger)arg1;
- (BOOL)_willNanoPresent:(NSUInteger)arg1;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(NSUInteger)arg2 updateType:(NSUInteger)arg3 playLightsAndSirens:(BOOL)arg4 shouldSendReplyIfNeeded:(BOOL)arg5 attachment:(id)arg6 attachmentType:(long long)arg7 replyToken:(id)arg8;
- (void)_sendPBBulletin:(id)arg1 forBulletin:(id)arg2 feed:(NSUInteger)arg3 updateType:(NSUInteger)arg4 playLightsAndSirens:(BOOL)arg5 shouldSendReplyIfNeeded:(BOOL)arg6;
- (void)_handleAddBulletin:(id)arg1 feed:(NSUInteger)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 performedWithSuccess:(BOOL)arg4 sendAttemptTime:(id)arg5 connectionStatus:(NSUInteger)arg6 isGizmoReady:(BOOL)arg7 shouldSendReplyIfNeeded:(BOOL)arg8 replyToken:(id)arg9;
- (void)_attachIconToBulletin:(id)arg1;
- (void)_attachAttachment:(id)arg1 attachmentType:(long long)arg2 toBulletin:(id)arg3;
- (void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg1;
- (void)_rememberBulletin:(id)arg1 forFeed:(NSUInteger)arg2;
- (void)_mapBulletin:(id)arg1;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 sectionID:(id)arg2 universalSectionID:(id)arg3 feed:(NSUInteger)arg4 withBulletinDate:(id)arg5;
- (void)_pingSubscriberWithBulletin:(id)arg1 ack:(id /* CDUnknownBlockType */)arg2;
- (void)_setupBBObserver;
- (void)_registerForPairedDeviceBuildChanges;
- (void)_handleAllSyncComplete;
- (void)_startBulletinListening;
- (void)_performSync;
- (void)_handleInitialSyncStateCompleteChanged:(id)arg1;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)removeSectionID:(id)arg1;
- (id)overriddenSettings;
- (id)originalSettings;
- (id)settingOverrides;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg1 maximumSendDelay:(NSUInteger)arg2 minimumResponseDelay:(NSUInteger)arg3 maximumResponseDelay:(NSUInteger)arg4;
@property(readonly, nonatomic) BOOL isStandaloneTestModeEnabled;
- (void)clearSectionInfoSentCache;
- (void)spoolSectionInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isLocallyConnectedToRemote;
- (void)sendBulletinSummary:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end
