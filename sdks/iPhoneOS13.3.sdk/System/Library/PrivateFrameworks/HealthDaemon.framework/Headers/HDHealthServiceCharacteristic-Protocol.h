//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CBUUID, NSData, NSDate;

@protocol HDHealthServiceCharacteristic <NSObject>
+ (id)buildWithBinaryValue:(NSData *)arg1 updateTime:(NSDate *)arg2 error:(id )arg3;
+ (CBUUID *)uuid;
- (NSData *)getBinaryValueWithError:(id )arg1;
@end

