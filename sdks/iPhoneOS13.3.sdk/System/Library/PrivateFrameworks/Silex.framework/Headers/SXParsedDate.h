//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXParsedDate-Protocol.h>

@class NSDate, NSTimeZone;

@interface SXParsedDate : NSObject <SXParsedDate>
{
    BOOL _containedTime;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) BOOL containedTime; // @synthesize containedTime=_containedTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (id)initWithDate:(id)arg1 containedTime:(BOOL)arg2 timeZone:(id)arg3;

@end
