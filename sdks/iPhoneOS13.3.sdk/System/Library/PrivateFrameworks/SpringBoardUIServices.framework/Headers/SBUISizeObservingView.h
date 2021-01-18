//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;

@interface SBUISizeObservingView : SBFView
{
    BOOL _delegateInterestedInSizeChanges;
    id <SBUISizeObservingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBUISizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;

@end
