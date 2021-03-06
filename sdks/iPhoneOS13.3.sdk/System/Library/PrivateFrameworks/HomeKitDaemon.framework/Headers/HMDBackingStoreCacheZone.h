//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSString;

@interface HMDBackingStoreCacheZone : HMFObject
{
    long long _zoneID;
    NSString *_zoneName;
    NSMutableArray *_actualGroups;
    NSMutableArray *_actualShares;
}

@property(retain) NSMutableArray *actualShares; // @synthesize actualShares=_actualShares;
@property(retain) NSMutableArray *actualGroups; // @synthesize actualGroups=_actualGroups;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) long long zoneID; // @synthesize zoneID=_zoneID;
// - (void).cxx_destruct;
@property(readonly) NSArray *shares;
@property(readonly) NSArray *groups;
- (id)dumpDebug;
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;

@end

