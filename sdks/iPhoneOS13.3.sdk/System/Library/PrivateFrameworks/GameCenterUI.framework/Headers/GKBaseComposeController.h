//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKLoadableContentViewController.h>


@class GKContiguousContainerView, GKTextView, NSArray, NSLayoutConstraint, UIScrollView, UIView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate>
{
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKTextView *_messageField;
    UIView *_intendedFirstResponder;
    GKContiguousContainerView *_headerFieldContainer;
    UIView *_contentView;
    double _scrollContentInsetAdjustY;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentLeadingConstraint;
    NSLayoutConstraint *_messageFieldTrailingConstraint;
    CGRect _lastKnownKeyboardFrame;
}

@property(retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint; // @synthesize messageFieldTrailingConstraint=_messageFieldTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // @synthesize contentLeadingConstraint=_contentLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(nonatomic) double scrollContentInsetAdjustY; // @synthesize scrollContentInsetAdjustY=_scrollContentInsetAdjustY;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GKContiguousContainerView *headerFieldContainer; // @synthesize headerFieldContainer=_headerFieldContainer;
@property(nonatomic) CGRect lastKnownKeyboardFrame; // @synthesize lastKnownKeyboardFrame=_lastKnownKeyboardFrame;
@property(nonatomic) UIView *intendedFirstResponder; // @synthesize intendedFirstResponder=_intendedFirstResponder;
@property(retain, nonatomic) GKTextView *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) NSArray *composeHeaderFields; // @synthesize composeHeaderFields=_composeHeaderFields;
@property(retain, nonatomic) UIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_scrollSelectedTextToVisible;
- (void)messageFieldTextDidChange;
- (void)setMessageFieldText:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (UIEdgeInsets)margins;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)keyboardWillHideShow:(id)arg1;
- (void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)dealloc;
- (id)init;

@end
