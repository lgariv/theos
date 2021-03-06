//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>
#import <NewsCore/FCReadingListContentControllerObserving-Protocol.h>

@class FCCloudContext, FCMTWriterLock, FCReadingListContentController, NSMutableDictionary;
@protocol FCOperationThrottler;

@interface FCReadingList : FCPrivateDataController <FCReadingListContentControllerObserving, FCOperationThrottlerDelegate>
{
    NSMutableDictionary *_entriesByArticleID;
    FCReadingListContentController *_readingListContentController;
    FCCloudContext *_cloudContext;
    id <FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
    FCMTWriterLock *_itemsLock;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (NSUInteger)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) id <FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler; // @synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) FCReadingListContentController *readingListContentController; // @synthesize readingListContentController=_readingListContentController;
@property(retain, nonatomic) NSMutableDictionary *entriesByArticleID; // @synthesize entriesByArticleID=_entriesByArticleID;
// - (void).cxx_destruct;
- (id)_allSortedEntriesInReadingList;
- (id)_allEntriesInReadingList;
- (id)_readingListEntryForArticleID:(id)arg1;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(NSUInteger)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isArticleAvailableForOfflineReading:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (NSUInteger)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)allNonConsumedArticleIDsInReadingListForOfflineReading;
- (id)allNonConsumedArticleIDsInReadingList;
- (NSUInteger)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)allSortedArticleIDsInReadingList;
- (id)dateArticleWasAdded:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(NSUInteger)arg3;
- (void)addArticleToReadingList:(id)arg1;
- (BOOL)isArticleOnReadingList:(id)arg1;
- (BOOL)shouldHideHeadline:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end

