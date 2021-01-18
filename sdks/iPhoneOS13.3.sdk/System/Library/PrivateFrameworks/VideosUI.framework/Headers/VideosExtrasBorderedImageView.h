//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasBorderedImageView : UIImageView
{
    BOOL _shouldDeferSettingTransform;
    BOOL _shouldUseTransformWhenReplicatingState;
    BOOL _shouldSkipImageWhenReplicatingState;
    CGAffineTransform _deferredTransform;
}

@property(nonatomic) BOOL shouldSkipImageWhenReplicatingState; // @synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState;
@property(nonatomic) BOOL shouldUseTransformWhenReplicatingState; // @synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState;
@property(nonatomic) BOOL shouldDeferSettingTransform; // @synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform;
@property(nonatomic) CGAffineTransform deferredTransform; // @synthesize deferredTransform=_deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
@property(nonatomic) double borderWidth;
@property(copy, nonatomic) UIColor *borderColor;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setTransform:(CGAffineTransform)arg1;

@end
