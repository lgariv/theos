//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, UIColor, UIView, _PKCheckerGridView, _PKSliderKnobView;
@protocol _PKColorAlphaSliderDelegate;

@interface _PKColorAlphaSlider : UIControl
{
    id <_PKColorAlphaSliderDelegate> _delegate;
    UIColor *_color;
    long long _colorUserInterfaceStyle;
    double _minAlpha;
    double _maxAlpha;
    UIView *_colorView;
    CAGradientLayer *_colorViewMaskLayer;
    _PKCheckerGridView *_alphaGridView;
    CAGradientLayer *_alphaGridViewMaskLayer;
    _PKSliderKnobView *_sliderKnobView;
}

+ (void)_layoutGradientMaskLayer:(id)arg1 frame:(CGRect)arg2 isReversed:(BOOL)arg3;
+ (id)rgbaColorFromColorIfPossible:(id)arg1;
@property(retain, nonatomic) _PKSliderKnobView *sliderKnobView; // @synthesize sliderKnobView=_sliderKnobView;
@property(retain, nonatomic) CAGradientLayer *alphaGridViewMaskLayer; // @synthesize alphaGridViewMaskLayer=_alphaGridViewMaskLayer;
@property(retain, nonatomic) _PKCheckerGridView *alphaGridView; // @synthesize alphaGridView=_alphaGridView;
@property(retain, nonatomic) CAGradientLayer *colorViewMaskLayer; // @synthesize colorViewMaskLayer=_colorViewMaskLayer;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) double maxAlpha; // @synthesize maxAlpha=_maxAlpha;
@property(nonatomic) double minAlpha; // @synthesize minAlpha=_minAlpha;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <_PKColorAlphaSliderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)_uiColorUserInterfaceStyle;
- (CGRect)_knobViewFrameForColorAlpha:(double)arg1;
- (void)didPanSliderKnob:(id)arg1;
- (double)colorAlphaForSliderKnobXPosition:(double)arg1;
- (double)sliderKnobXPositionForColorAlpha:(double)arg1;
- (double)_sliderKnobViewWidth;
- (void)_colorViewTapGestureHandler:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_setColorNoLayout:(id)arg1;
- (void)setColor:(id)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end
