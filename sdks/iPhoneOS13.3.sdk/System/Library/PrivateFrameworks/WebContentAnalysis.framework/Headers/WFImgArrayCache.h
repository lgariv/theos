//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WFImgArrayCache : NSObject
{
    NSMutableString *imageAlternativeDescriptions;
    long long numberOfUnknownSizedImages;
    long long numberOfKnownImagePixels;
}

+ (id)imgArrayCacheWithArray:(id)arg1;
- (void)dealloc;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)imageAlternativeDescriptions;
- (id)initWithArray:(id)arg1;

@end

