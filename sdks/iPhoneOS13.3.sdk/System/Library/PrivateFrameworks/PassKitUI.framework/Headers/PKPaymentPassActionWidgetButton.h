//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PKPaymentPassAction;

@interface PKPaymentPassActionWidgetButton : UIButton
{
    BOOL _usesAccessibilityLayout;
    PKPaymentPassAction *_action;
}

+ (double)widgetHeightWithAccessibilityLayout:(BOOL)arg1;
+ (double)glyphImageHeight;
@property(nonatomic) BOOL usesAccessibilityLayout; // @synthesize usesAccessibilityLayout=_usesAccessibilityLayout;
@property(retain, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)_applyStyles;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWidgetViewStyle:(NSUInteger)arg1;

@end

