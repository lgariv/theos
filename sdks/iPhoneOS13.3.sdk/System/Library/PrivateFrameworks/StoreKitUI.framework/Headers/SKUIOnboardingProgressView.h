//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIShapeView, UIColor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingProgressView : UIView
{
    SKUIShapeView *_borderView;
    UIImageView *_imageView;
    double _progress;
    SKUIShapeView *_progressView;
    UILabel *_titleLabel;
}

+ (CGSize)preferredImageSizeForViewSize:(CGSize)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (id)_borderColor;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) UIColor *fillColor;
@property(readonly, nonatomic) CGSize preferredImageSize;
- (id)initWithFrame:(CGRect)arg1;

@end

