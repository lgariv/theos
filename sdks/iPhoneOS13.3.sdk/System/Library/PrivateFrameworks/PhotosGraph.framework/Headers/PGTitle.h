//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTitle : NSObject
{
    NSString *_stringValue;
    long long _category;
}

+ (id)titleWithString:(id)arg1 category:(long long)arg2;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end
