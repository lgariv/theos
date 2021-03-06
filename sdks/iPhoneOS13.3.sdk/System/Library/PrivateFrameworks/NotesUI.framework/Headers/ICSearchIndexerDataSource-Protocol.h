//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSSearchableItem, NSArray, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;
@protocol ICSearchIndexable;

@protocol ICSearchIndexerDataSource <NSObject>
- (BOOL)isObservingChanges;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)stageObjectIDURIsForIndexing:(NSArray *)arg1;
- (void)stageForReindexing;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(NSArray *)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (id <ICSearchIndexable>)objectForManagedObjectIDURI:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (id <ICSearchIndexable>)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)searchableItemsForObjectIDs:(NSArray *)arg1;
- (NSArray *)allIndexableObjectIDsInReversedReindexingOrder;
- (NSArray *)objectIDURIsToBeDeleted;
- (NSArray *)objectIDsNeedingIndexing;
- (NSArray *)indexableObjectIDsWithURIs:(NSArray *)arg1;
- (void)clearObjectIDsToProcess;
- (BOOL)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSUInteger)indexingPriority;
- (NSString *)dataSourceIdentifier;
@end

