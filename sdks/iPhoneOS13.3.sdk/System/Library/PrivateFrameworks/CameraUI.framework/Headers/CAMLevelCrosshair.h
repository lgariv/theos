//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMLevelCrosshair : UIView
{
    BOOL _highlighted;
}

+ (void)_drawCrosshairInContext:(CGContext )arg1 withBounds:(CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void)drawRect:(CGRect)arg1;
- (void)_commonCAMLevelCrosshairInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

