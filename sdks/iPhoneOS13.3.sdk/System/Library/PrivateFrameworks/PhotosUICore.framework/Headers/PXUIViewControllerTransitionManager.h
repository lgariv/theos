//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXVerticalSwipeGestureRecognizerHelperDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, PXVerticalSwipeGestureRecognizerHelper;

@interface PXUIViewControllerTransitionManager : NSObject <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, UINavigationControllerDelegate>
{
    NSMapTable *__pinchGestureRecognizers;
    NSMapTable *_panGestureRecognizers;
    NSMapTable *__lastViewControllerTransitions;
    NSMutableSet *__pinchTransitions;
    NSMutableSet *_swipeDownTransitions;
    PXVerticalSwipeGestureRecognizerHelper *_swipeDownGestureRecognizerHelper;
}

+ (id)sharedManager;
@property(readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper; // @synthesize swipeDownGestureRecognizerHelper=_swipeDownGestureRecognizerHelper;
@property(readonly, nonatomic) NSMutableSet *swipeDownTransitions; // @synthesize swipeDownTransitions=_swipeDownTransitions;
@property(readonly, nonatomic) NSMutableSet *_pinchTransitions; // @synthesize _pinchTransitions=__pinchTransitions;
@property(readonly, nonatomic) NSMapTable *_lastViewControllerTransitions; // @synthesize _lastViewControllerTransitions=__lastViewControllerTransitions;
@property(readonly, nonatomic) NSMapTable *panGestureRecognizers; // @synthesize panGestureRecognizers=_panGestureRecognizers;
@property(readonly, nonatomic) NSMapTable *_pinchGestureRecognizers; // @synthesize _pinchGestureRecognizers=__pinchGestureRecognizers;
// - (void).cxx_destruct;
- (BOOL)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)_swipeDownTransitionForGestureRecognizer:(id)arg1;
- (id)_pinchTransitionForGestureRecognizer:(id)arg1;
- (id)_deepestDescendantOfViewController:(id)arg1 atLocationOfGestureRecognizer:(id)arg2;
- (BOOL)_getMasterViewController:(out id )arg1 detailViewController:(out id )arg2 forPopAtLocationOfGestureRecognizer:(id)arg3;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (id)_windowForViewController:(id)arg1;
- (id)_panGestureRecognizerForViewController:(id)arg1;
- (id)_pinchGestureRecognizerForViewController:(id)arg1;
- (void)setLastTransition:(id)arg1 forViewController:(id)arg2;
- (id)lastTransitionForViewController:(id)arg1;
- (id)init;

@end

