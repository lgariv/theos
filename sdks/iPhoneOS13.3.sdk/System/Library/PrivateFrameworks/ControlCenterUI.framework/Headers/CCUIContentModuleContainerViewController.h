//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContainer-Protocol.h>
#import <ControlCenterUI/CCUISafeAppearancePropagationProvider-Protocol.h>
#import <ControlCenterUI/_UIClickPresentationInteractionDelegate-Protocol.h>

@class CCUIContentModuleBackgroundView, CCUIContentModuleContainerPresentationController, CCUIContentModuleContentContainerView, NSArray, NSString, UITapGestureRecognizer, UIView, _UIClickPresentationInteraction;
@protocol CCUIContentModule, CCUIContentModuleBackgroundViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModuleContentViewController;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider>
{
    BOOL _expanded;
    BOOL _contentModuleProvidesOwnPlatter;
    BOOL _transitioning;
    NSString *_moduleIdentifier;
    UIViewController<CCUIContentModuleContentViewController> *_contentViewController;
    id <CCUIContentModuleContainerViewControllerDelegate> _delegate;
    NSString *_materialGroupName;
    NSArray *_topLevelBlockingGestureRecognizers;
    id <CCUIContentModule> _contentModule;
    UIViewController<CCUIContentModuleBackgroundViewController> *_backgroundViewController;
    CCUIContentModuleContainerPresentationController *_presentationController;
    UIView *_highlightWrapperView;
    CCUIContentModuleBackgroundView *_backgroundView;
    CCUIContentModuleContentContainerView *_contentContainerView;
    UIView *_contentView;
    UIView *_maskView;
    UITapGestureRecognizer *_tapRecognizer;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    UIEdgeInsets _expandedContentEdgeInsets;
}

@property(nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction; // @synthesize clickPresentationInteraction=_clickPresentationInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *highlightWrapperView; // @synthesize highlightWrapperView=_highlightWrapperView;
@property(nonatomic) BOOL contentModuleProvidesOwnPlatter; // @synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter;
@property(retain, nonatomic) CCUIContentModuleContainerPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController; // @synthesize backgroundViewController=_backgroundViewController;
@property(retain, nonatomic) id <CCUIContentModule> contentModule; // @synthesize contentModule=_contentModule;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers; // @synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *materialGroupName; // @synthesize materialGroupName=_materialGroupName;
@property(nonatomic) __weak id <CCUIContentModuleContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) UIEdgeInsets expandedContentEdgeInsets; // @synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets;
@property(copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
// - (void).cxx_destruct;
- (void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(BOOL)arg2;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)_configureMaskViewIfNecessary;
- (CGRect)_contentBoundsForTransitionProgress:(double)arg1;
- (CGRect)_presentationFrameForExpandedState;
- (CGRect)_containerFrameForExpandedState;
- (CGRect)_backgroundFrameForExpandedState;
- (CGRect)_backgroundFrameForRestState;
- (CGRect)_contentFrameForExpandedState;
- (double)_continuousCornerRadiusForExpandedState;
- (double)_continuousCornerRadiusForCompactState;
- (CGRect)_contentBoundsForExpandedState;
- (CGRect)_contentFrameForRestState;
- (void)_setDidExpandModulePreference;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (BOOL)_isForceTouchAvailable;
- (void)willDismissViewController:(id)arg1;
- (void)willPresentViewController:(id)arg1;
- (BOOL)definesContentModuleContainer;
- (NSUInteger)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
- (BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
- (BOOL)clickPresentationInteractionShouldBegin:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2;
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)displayWillTurnOff;
@property(readonly, nonatomic) CCUIContentModuleContentContainerView *moduleContentView;
- (void)_closeExpandedModule:(BOOL)arg1;
- (void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dismissPresentedContentAnimated:(BOOL)arg1;
- (void)dismissExpandedModuleAnimated:(BOOL)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)expandModule;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)transitionToExpandedMode:(BOOL)arg1;
- (void)_loadBackgroundViewController:(id)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_loadContentViewController:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3;

@end
