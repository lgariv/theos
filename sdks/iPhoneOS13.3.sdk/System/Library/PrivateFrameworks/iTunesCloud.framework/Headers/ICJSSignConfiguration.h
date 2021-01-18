//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSString;

@interface ICJSSignConfiguration : NSObject <NSCopying>
{
    NSMutableArray *_componentNames;
    NSMutableArray *_components;
    NSString *_signatureDataCookieName;
    NSString *_signatureDataHeaderName;
}

+ (id)storePlatformConfiguration;
@property(copy, nonatomic) NSString *signatureDataHeaderName; // @synthesize signatureDataHeaderName=_signatureDataHeaderName;
@property(copy, nonatomic) NSString *signatureDataCookieName; // @synthesize signatureDataCookieName=_signatureDataCookieName;
// - (void).cxx_destruct;
- (void)_enumerateComponentsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_addRequestComponent:(long long)arg1 withName:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)includeQueryItemWithName:(id)arg1;
- (void)includeHeaderWithName:(id)arg1;
- (void)includeCookieWithName:(id)arg1;

@end
