//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCSyncHealthReport : NSObject
{
    NSMutableDictionary *_syncUpErrorsByZone;
    NSMutableDictionary *_syncDownErrorsByZone;
    NSMutableDictionary *_uploadFailureCountByError;
    NSMutableDictionary *_downloadFailureCountByError;
    NSUInteger _totalZoneCount;
    NSUInteger _blockedZonesCount;
    NSUInteger _totalItemsCount;
}

@property(readonly, nonatomic) NSDictionary *downloadFailureCountByError; // @synthesize downloadFailureCountByError=_downloadFailureCountByError;
@property(readonly, nonatomic) NSDictionary *uploadFailureCountByError; // @synthesize uploadFailureCountByError=_uploadFailureCountByError;
@property(readonly, nonatomic) NSDictionary *syncDownErrorsByZone; // @synthesize syncDownErrorsByZone=_syncDownErrorsByZone;
@property(readonly, nonatomic) NSDictionary *syncUpErrorsByZone; // @synthesize syncUpErrorsByZone=_syncUpErrorsByZone;
@property(readonly, nonatomic) NSUInteger totalItemsCount; // @synthesize totalItemsCount=_totalItemsCount;
@property(readonly, nonatomic) NSUInteger blockedZonesCount; // @synthesize blockedZonesCount=_blockedZonesCount;
@property(readonly, nonatomic) NSUInteger totalZoneCount; // @synthesize totalZoneCount=_totalZoneCount;
// - (void).cxx_destruct;
- (void)syncErrors:(id /* CDUnknownBlockType */)arg1;
- (void)generateReportWithSession:(id)arg1;
- (id)init;

@end

