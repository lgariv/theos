//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UIActivityIndicatorView, UILabel;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

// - (void).cxx_destruct;
- (void)_updateLabelText;
- (void)statusDescriptionDidChange;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (BOOL)wantsContentView;
- (id)initWithFrame:(CGRect)arg1;

@end

