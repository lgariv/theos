//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXZoomAnimationContext-Protocol.h>

@class PXNonuniformTransform, PXRegionOfInterest, UIView;
@protocol PXZoomAnimationContext;

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext>
{
    double _fromAlpha;
    PXNonuniformTransform *_fromTransform;
    double _toAlpha;
    PXNonuniformTransform *_toTransform;
    UIView *_transformedView;
    id <PXZoomAnimationContext> _context;
}

@property(readonly, nonatomic) id <PXZoomAnimationContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) UIView *transformedView; // @synthesize transformedView=_transformedView;
@property(readonly, nonatomic) PXNonuniformTransform *toTransform; // @synthesize toTransform=_toTransform;
@property(readonly, nonatomic) double toAlpha; // @synthesize toAlpha=_toAlpha;
@property(readonly, nonatomic) PXNonuniformTransform *fromTransform; // @synthesize fromTransform=_fromTransform;
@property(readonly, nonatomic) double fromAlpha; // @synthesize fromAlpha=_fromAlpha;
// - (void).cxx_destruct;
- (void)registerCleanupHandler:(id /* CDUnknownBlockType */)arg1;
- (void)didEndAnimation:(long long)arg1;
- (long long)willBeginAnimation;
@property(readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property(readonly, nonatomic, getter=isMatchingRegionsOfInterest) BOOL matchingRegionsOfInterest;
@property(readonly, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property(readonly, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) long long animationType;
- (id)initWithTransformedView:(id)arg1 context:(id)arg2;

@end
