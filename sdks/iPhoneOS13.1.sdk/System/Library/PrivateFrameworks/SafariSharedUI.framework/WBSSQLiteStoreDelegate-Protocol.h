//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSSQLiteStore;

@protocol WBSSQLiteStoreDelegate <NSObject>
- (void)sqliteStoreDidFallBackToInMemoryStore:(WBSSQLiteStore *)arg1;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(WBSSQLiteStore *)arg1 completionHandler:(void (^)(void))arg2;
@end
