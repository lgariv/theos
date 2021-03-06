//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>


@protocol BSUIScrollViewDelegate;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isScrolling;
    BOOL _preventDidEndScrolling;
    BOOL _didScroll;
    id /* CDUnknownBlockType */ _scrollCompletion;
    CGPoint _previousContentOffset;
    CGPoint _initialContentOffset;
    BOOL _scrolling;
}

@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
// - (void).cxx_destruct;
- (id)_animationForAnimationSettings:(id)arg1;
- (void)_didEndScrollAnimationNotification:(id)arg1;
- (void)_didDidEndDeceleratingNotification:(id)arg1;
- (void)_didEndDraggingNotification:(id)arg1;
- (void)_willBeginDraggingNotification:(id)arg1;
- (void)_setScrollCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_updateScrolling;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setContentOffset:(CGPoint)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (long long)_activeMethod;
- (void)_notifyDidScroll;
- (void)_setCurrentContentOffsetImmediatelyIfScrollInterruptionAnimated:(BOOL)arg1;
- (void)_setContentOffset:(CGPoint)arg1 animation:(id)arg2;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (BOOL)_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 withAnimation:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)setContentOffset:(CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) CDStruct_3b09cf25 currentScrollContext;
@property(nonatomic) __weak id <BSUIScrollViewDelegate> delegate;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;

@end

