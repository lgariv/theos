//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FCCKFeedRequest : NSObject
{
    NSString *_feedID;
    NSData *_startCursor;
    NSUInteger _startOrder;
    NSUInteger _orderLimit;
    NSUInteger _softResultsLimit;
    NSUInteger _hardResultsLimit;
}

@property(nonatomic) NSUInteger hardResultsLimit; // @synthesize hardResultsLimit=_hardResultsLimit;
@property(nonatomic) NSUInteger softResultsLimit; // @synthesize softResultsLimit=_softResultsLimit;
@property(nonatomic) NSUInteger orderLimit; // @synthesize orderLimit=_orderLimit;
@property(nonatomic) NSUInteger startOrder; // @synthesize startOrder=_startOrder;
@property(copy, nonatomic) NSData *startCursor; // @synthesize startCursor=_startCursor;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end
