//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject
{
    double _expirationTime;
    ICURLBag *_urlBag;
}

@property(retain) ICURLBag *urlBag; // @synthesize urlBag=_urlBag;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
// - (void).cxx_destruct;
- (id)initWithURLBag:(id)arg1 expirationTime:(double)arg2;

@end

