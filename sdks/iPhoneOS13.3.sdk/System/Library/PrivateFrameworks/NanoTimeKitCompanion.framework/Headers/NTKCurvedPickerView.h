//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSMutableDictionary;

@interface NTKCurvedPickerView : UIView <NTKEditOptionContainerView>
{
    NSMutableDictionary *_sideViews;
    NSUInteger _activeSide;
    NSUInteger _transitioningSide;
    double _currentFraction;
    BOOL _interior;
    double _circleRadius;
    double _centerAngle;
    CGPoint _circleCenter;
}

@property(readonly, nonatomic) CGPoint circleCenter; // @synthesize circleCenter=_circleCenter;
@property(readonly, nonatomic) BOOL interior; // @synthesize interior=_interior;
@property(readonly, nonatomic) double centerAngle; // @synthesize centerAngle=_centerAngle;
@property(readonly, nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
// - (void).cxx_destruct;
- (double)_alphaForIndex:(NSUInteger)arg1;
- (double)_angleForIndex:(NSUInteger)arg1;
- (CGAffineTransform)_transformForAngle:(double)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_setCurrentFraction:(double)arg1;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(NSUInteger)arg2 toSideAtIndex:(NSUInteger)arg3;
- (void)transitionToSideAtIndex:(NSUInteger)arg1;
- (void)enumerateSideViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)viewForSideAtIndex:(NSUInteger)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSUInteger numberOfVisibleSides;
@property(readonly, nonatomic) NSUInteger numberOfSides;
- (void)setCircleRadius:(double)arg1 centerAngle:(double)arg2 circleCenter:(CGPoint)arg3 interior:(BOOL)arg4;
- (id)init;

@end
