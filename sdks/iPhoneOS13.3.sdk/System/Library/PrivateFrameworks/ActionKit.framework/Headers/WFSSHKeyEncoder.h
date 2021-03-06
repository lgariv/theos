//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface WFSSHKeyEncoder : NSObject
{
    NSMutableData *_data;
}

@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)encodeDataWithPreceedingLength:(id)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeStringWithPreceedingLength:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeInteger:(unsigned int)arg1;
- (void)encodeChar:(BOOL)arg1;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) NSUInteger encodedLength;
- (id)init;

@end

