//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKRecordZoneDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCKPrivateDatabase, NSArray, NSDictionary;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate>
{
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}

@property(retain, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSDictionary *ckRecordZonesByID; // @synthesize ckRecordZonesByID=_ckRecordZonesByID;
@property(retain, nonatomic) NSDictionary *fcRecordZonesByName; // @synthesize fcRecordZonesByName=_fcRecordZonesByName;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)prepareRecordZonesForUseWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)recordZoneWithName:(id)arg1;
- (id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2;

@end

