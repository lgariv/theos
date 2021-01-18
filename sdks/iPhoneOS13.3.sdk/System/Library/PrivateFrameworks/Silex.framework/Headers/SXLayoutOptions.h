//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXColumnLayout, UITraitCollection;

@interface SXLayoutOptions : NSObject
{
    SXColumnLayout *_columnLayout;
    CGSize _viewportSize;
    UITraitCollection *_traitCollection;
    NSString *_contentSizeCategory;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    BOOL _testing;
    NSUInteger _viewingLocation;
    double _contentScaleFactor;
}

@property(readonly, nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(readonly, nonatomic) NSUInteger viewingLocation; // @synthesize viewingLocation=_viewingLocation;
@property(readonly, nonatomic) BOOL testing; // @synthesize testing=_testing;
@property(readonly, nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property(readonly, nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property(readonly, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(readonly, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (NSUInteger)diffWithLayoutOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithColumnLayout:(id)arg1 viewportSize:(CGSize)arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(BOOL)arg7 viewingLocation:(NSUInteger)arg8 contentScaleFactor:(double)arg9;

@end
