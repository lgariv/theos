//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockIconZoomAnimator-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationPickerViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceEditViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKSensitiveUIStateObserver-Protocol.h>

@class NSCache, NSDate, NSMutableDictionary, NSObject, NSString, NTKComplicationController, NTKComplicationDisplayWrapperView, NTKDelayedBlock, NTKFace, NTKFaceEditView, NTKFaceView, UIView;
@protocol NTKClockStatusBarViewController, NTKFaceViewControllerDelegate, OS_dispatch_source;

@interface NTKFaceViewController : UIViewController <NTKFaceEditViewDelegate, NTKComplicationPickerViewDataSource, NTKSensitiveUIStateObserver, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver>
{
    NTKFaceView *_faceView;
//     struct os_unfair_lock_s _normalComplicationControllersLock;
    NSMutableDictionary *_normalComplicationControllers;
//     struct os_unfair_lock_s _detachedComplicationControllersLock;
    NSMutableDictionary *_detachedComplicationControllers;
    NTKFaceEditView *_editView;
    BOOL _editingComplications;
    NSCache *_appearanceVariantsCache;
    NSCache *_informationVariantsCache;
    BOOL _frozen;
    BOOL _becomeLiveOnUnfreeze;
    NTKDelayedBlock *_delayedFreezeBlock;
    BOOL _readyToApplyConfiguration;
    BOOL _animatingVariant;
    BOOL _newValueWhileAnimating;
    NSUInteger _delayedAnimationValue;
    BOOL _deviceLocked;
    BOOL _sensitiveUIHidden;
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    UIView *_zoomingContainerView;
    NSDate *_scrubDate;
    NSObject<OS_dispatch_source> *_time_travel_update_timer;
    NTKComplicationDisplayWrapperView *_pptComplicationDisplay;
    NTKComplicationController *_pptComplicationController;
    BOOL _wantsRemoveUnadorned;
    BOOL _hasGoneLive;
    BOOL _hasUsedUnadornedSnapshot;
    BOOL _hasRemovedUnadornedSnapshot;
    NSString *_lastTappedSlotIdentifier;
    CGRect _faceLaunchRect;
    BOOL _shouldShowSnapshot;
    BOOL _supressesNonSnapshotUI;
    BOOL _showsCanonicalContent;
    BOOL _showContentForUnadornedSnapshot;
    BOOL _ignoreSnapshotImages;
    BOOL _showsLockedUI;
    id <NTKFaceViewControllerDelegate> _delegate;
    long long _dataMode;
    NSDate *_pauseDate;
    UIViewController<NTKClockStatusBarViewController> *_statusBarViewController;
    NTKFace *_face;
}

+ (double)_complicationPickerAlphaForTransitionFraction:(double)arg1;
+ (id)_createNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2 face:(id)arg3 faceView:(id)arg4;
+ (void)initialize;
@property(readonly, nonatomic) NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(retain, nonatomic) UIViewController<NTKClockStatusBarViewController> *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
@property(nonatomic) BOOL showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(nonatomic) BOOL ignoreSnapshotImages; // @synthesize ignoreSnapshotImages=_ignoreSnapshotImages;
@property(nonatomic) BOOL showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(nonatomic) BOOL showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) BOOL supressesNonSnapshotUI; // @synthesize supressesNonSnapshotUI=_supressesNonSnapshotUI;
@property(nonatomic) BOOL shouldShowSnapshot; // @synthesize shouldShowSnapshot=_shouldShowSnapshot;
@property(nonatomic) __weak id <NTKFaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_unadornedSnapshot;
- (id)_dailySnapshot;
- (BOOL)shouldLoadLiveFaceAtNextScreenOff;
- (void)_wrapperViewTapped:(id)arg1;
- (void)faceViewRequestedLaunchFromRect:(CGRect)arg1;
- (void)_clearFaceLaunchRect;
- (void)_clearLastTappedComplication;
- (CGRect)launchRectForComplicationApplicationIdentifier:(id)arg1;
- (void)_configureBackgroundFillAlpha:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (id)_selectedVisibleSlotForEditMode:(long long)arg1;
- (id)_controllerForComplication:(id)arg1 slot:(id)arg2;
- (id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2;
- (void)_updateInteractivityOfComplicationDisplays;
- (void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2;
- (void)_removeDetachedComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2;
- (void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (void)_insertDetachedComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (void)_ensureDetachedComplication:(id)arg1;
- (void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2;
- (void)_removeComplicationForSlot:(id)arg1;
- (void)_ensureComplication:(id)arg1 forSlot:(id)arg2;
- (void)_handleStatusBarChange;
- (void)_showStatusBarAfterWake;
- (id)currentOrderedComplicationApplicationIdentifiers;
- (void)performComplicationBackgroundDataRefresh;
- (void)handleScreenBlanked;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (BOOL)_handlePhysicalButton:(NSUInteger)arg1 event:(NSUInteger)arg2;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_defaultCleanupAfterZoom;
- (void)_defaultSetZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (id)customEditOptionContainerViewForComplicationPickerView:(id)arg1;
- (id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2;
- (void)complicationPickerView:(id)arg1 getDisplay:(id )arg2 controller:(id )arg3 forComplication:(id)arg4;
- (id)PPTDescriptionForComplication:(id)arg1;
- (void)PPTCleanupLastComplication;
- (void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(BOOL)arg3;
- (void)PPTPrepareComplicationTest;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (id)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
- (id)faceViewEditOptionThatHidesAllComplications;
- (id)faceViewComplicationSlots;
- (id)faceViewComplicationForSlot:(id)arg1;
- (id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
- (BOOL)faceViewShouldIgnoreSnapshotImages;
- (BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;
- (void)faceViewWantsToPresentViewController:(id)arg1;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
- (BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)editViewShouldShowPageDotsOnBottom:(id)arg1;
- (void)editView:(id)arg1 keylineDidRubberBand:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
- (void)editView:(id)arg1 keylineDidBreathe:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
- (void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(long long)arg3;
- (void)editView:(id)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4;
- (void)editView:(id)arg1 didStopAtEditMode:(long long)arg2;
- (void)editViewWillBeginScrolling:(id)arg1;
- (BOOL)_shouldShowComplicationPickerForSlot:(id)arg1;
- (void)_configureLisaForSelectedSlot:(id)arg1 editMode:(long long)arg2 animated:(BOOL)arg3;
- (void)_configureViewsForSelectedSlot:(id)arg1 editMode:(long long)arg2;
- (id)_deactivatePickerViewForSlot:(id)arg1;
- (id)_ensurePickerViewForSlot:(id)arg1;
- (void)_tearDownEditing;
- (void)_updateComplicationLisaGesture;
- (void)_setupEditViewForHiddenComplications;
- (void)_setupEditViewForComplications;
- (void)_updateFaceAndViewWithOption:(id)arg1 forMode:(long long)arg2 resourcePath:(id)arg3 slot:(id)arg4;
- (void)_setFaceViewResourceDirectoryFromFace;
- (void)_loadInitialComplicationVisibilityFromFace;
- (void)_endTransitionToValue:(long long)arg1 forEditMode:(long long)arg2;
- (void)_transitionFraction:(double)arg1 fromValue:(long long)arg2 toValue:(long long)arg3 forEditMode:(long long)arg4 slot:(id)arg5;
- (void)_setupEditViewForCustomEditMode:(long long)arg1;
- (id)_keylineLabelTextForOption:(id)arg1 customEditMode:(long long)arg2;
- (void)_setupEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canStopEditing;
- (void)hideFaceEditingUIAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)hideFaceEditingUIAnimated:(BOOL)arg1;
- (void)showEditingUIAnimated:(BOOL)arg1;
- (BOOL)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2;
- (void)_applyConfigurationWithDuration:(double)arg1;
- (void)_setDataMode:(long long)arg1 becomeLiveOnUnfreeze:(BOOL)arg2;
- (void)_ensurePauseDate;
- (void)_ensureNotLive;
- (void)configureWithDuration:(double)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateComplicationControllersAndDisplaysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)getComplicationController:(id )arg1 andDisplay:(id )arg2 forSlot:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)finalizeForSnapshotting:(id /* CDUnknownBlockType */)arg1;
- (void)prepareForSnapshotting;
- (id)blurSourceImage;
- (void)viewDidLayoutSubviews;
- (void)_faceSnapshotDidChange:(id)arg1;
- (void)sensitiveUIStateChanged;
- (void)_handleDeviceLockChange;
- (void)disableSlowMode;
- (void)enableSlowMode;
- (void)cleanupAfterOrb:(BOOL)arg1;
- (void)prepareForOrb;
- (void)unfreeze;
- (void)freezeAfterDelay:(double)arg1;
- (void)freeze;
- (BOOL)_shouldHideFaceUI;
- (void)loadView;
- (void)dealloc;
- (id)initWithFace:(id)arg1 configuration:(id /* CDUnknownBlockType */)arg2;

@end
