//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken;

@interface CRKCloudFetchZoneChangesOperation : CRKCloudOperation <CRKCloudResetable>
{
    CKServerChangeToken *_serverToken;
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
@property(readonly, nonatomic) CKServerChangeToken *serverToken; // @synthesize serverToken=_serverToken;
// - (void).cxx_destruct;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;

@end

