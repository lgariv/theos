//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSAViewController.h>

#import <TSReading/TSDiOSCanvasViewControllerDelegate-Protocol.h>
#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKDocumentViewController-Protocol.h>
#import <TSReading/TSKFindReplaceDelegate-Protocol.h>
#import <TSReading/TSKKeyboardObserver-Protocol.h>
#import <TSReading/TSKPopoverBasedViewControllerDelegate-Protocol.h>
#import <TSReading/TSWPInteractiveCanvasControllerDelegate-Protocol.h>

@class NSArray, NSString, TIADocument, TSADebugViewController, TSADocumentRoot, TSAFindReplaceUIController, TSAInteractiveCanvasController, TSASyncResolveConflictViewController, TSDScrollView, TSDiOSCanvasViewController, TSKUIAlert, UIButton, UIScrollView;
@protocol TSANavigatorViewController;

@interface TSADocumentViewController : TSAViewController <TSKDocumentViewController, TSKPopoverBasedViewControllerDelegate, TSWPInteractiveCanvasControllerDelegate, UIActionSheetDelegate, TSKFindReplaceDelegate, TSKKeyboardObserver, TSDiOSCanvasViewControllerDelegate, TSKChangeSourceObserver>
{
    BOOL _navigatorHidden;
    TSDScrollView *_scrollView;
    UIButton *_doneButton;
    UIButton *_closeButton;
    BOOL _registered;
    BOOL _isPrintingDocument;
    BOOL _printerOptionsShowing;
    BOOL _inspectorIsCompletelyVisible;
    long long _helpViewVisibleState;
    TSDiOSCanvasViewController *_canvasViewController;
    id <TSANavigatorViewController> _navigatorViewController;
    TIADocument *_document;
    BOOL _isDocumentLoaded;
    BOOL _isClosingDocument;
    BOOL _isAbandoningDocument;
    TSAInteractiveCanvasController *_interactiveCanvasController;
    TSADebugViewController *_debugViewController;
    long long _documentMode;
    BOOL _settingDocumentMode;
    BOOL _shouldShowInstructionalText;
    long long _documentModeBeforeReplaceController;
    TSAFindReplaceUIController *_findReplaceUIController;
    double _keyboardHeight;
    double _contentFrameAnimationDuration;
    BOOL _isHidingStatusBar;
    CGPoint mSavedContentOffset;
    double mSavedCanvasViewScale;
    BOOL _waitingToZoomOut;
    BOOL _scheduledBackgroundInit;
    BOOL _isLandscapeOrientation;
    BOOL _documentModeChangeInProgress;
    double _footerHeightPadding;
    BOOL _isPopoverGestureInFlight;
    BOOL _preventDocumentModeChangesDuringSelectionChanges;
    BOOL _editMenuTapGRWasEnabledForFind;
    UIButton *_coachingTipsButton;
    TSKUIAlert *_openDocumentKeepOrDeleteAlert;
    UIButton *_sharingButton;
    TSASyncResolveConflictViewController *__openDocumentResolveConflictViewController;
    TSKUIAlert *__openDocumentUpdatedAlert;
    TSKUIAlert *__openDocumentEvictionAlert;
}

+ (void)resetLastDocumentMode;
@property(retain, nonatomic) TSKUIAlert *_openDocumentEvictionAlert; // @synthesize _openDocumentEvictionAlert=__openDocumentEvictionAlert;
@property(retain, nonatomic, setter=_setOpenDocumentUpdatedAlert:) TSKUIAlert *_openDocumentUpdatedAlert; // @synthesize _openDocumentUpdatedAlert=__openDocumentUpdatedAlert;
@property(retain, nonatomic) TSASyncResolveConflictViewController *_openDocumentResolveConflictViewController; // @synthesize _openDocumentResolveConflictViewController=__openDocumentResolveConflictViewController;
@property(nonatomic) BOOL editMenuTapGRWasEnabledForFind; // @synthesize editMenuTapGRWasEnabledForFind=_editMenuTapGRWasEnabledForFind;
@property(readonly, nonatomic) UIButton *sharingButton; // @synthesize sharingButton=_sharingButton;
@property(retain, nonatomic) TSKUIAlert *openDocumentKeepOrDeleteAlert; // @synthesize openDocumentKeepOrDeleteAlert=_openDocumentKeepOrDeleteAlert;
@property(readonly, nonatomic) BOOL preventDocumentModeChangesDuringSelectionChanges; // @synthesize preventDocumentModeChangesDuringSelectionChanges=_preventDocumentModeChangesDuringSelectionChanges;
@property(readonly, nonatomic) BOOL isPopoverGestureInFlight; // @synthesize isPopoverGestureInFlight=_isPopoverGestureInFlight;
@property(nonatomic) BOOL printerOptionsShowing; // @synthesize printerOptionsShowing=_printerOptionsShowing;
@property(readonly, nonatomic) TSAFindReplaceUIController *findReplaceUIController; // @synthesize findReplaceUIController=_findReplaceUIController;
@property(readonly, retain, nonatomic) TIADocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) UIButton *coachingTipsButton; // @synthesize coachingTipsButton=_coachingTipsButton;
@property(retain, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(nonatomic) BOOL isLandscapeOrientation; // @synthesize isLandscapeOrientation=_isLandscapeOrientation;
@property(nonatomic, getter=isHidingStatusBar) BOOL hidingStatusBar; // @synthesize hidingStatusBar=_isHidingStatusBar;
@property(readonly, nonatomic) BOOL isPrintingDocument; // @synthesize isPrintingDocument=_isPrintingDocument;
@property(readonly, nonatomic) BOOL shouldShowInstructionalText; // @synthesize shouldShowInstructionalText=_shouldShowInstructionalText;
@property(nonatomic) long long documentMode; // @synthesize documentMode=_documentMode;
@property(readonly, nonatomic) BOOL isClosingDocument; // @synthesize isClosingDocument=_isClosingDocument;
@property(readonly, nonatomic) BOOL isDocumentLoaded; // @synthesize isDocumentLoaded=_isDocumentLoaded;
@property(readonly, nonatomic) UIScrollView *canvasScrollView; // @synthesize canvasScrollView=_scrollView;
@property(retain, nonatomic) id <TSANavigatorViewController> navigatorViewController; // @synthesize navigatorViewController=_navigatorViewController;
@property(retain, nonatomic) TSDiOSCanvasViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
- (long long)p_documentModeToRestoreFor:(long long)arg1;
- (void)p_scrollToCurrentSelection;
- (void)p_scrollToRect:(CGRect)arg1;
- (BOOL)insertControllerIsVisible;
- (BOOL)toolsControllerIsVisible;
- (BOOL)shouldIgnoreTextGestures;
- (double)paddingAboveChartDataEditor:(id)arg1;
- (id)superviewForChartDataEditor:(id)arg1;
- (void)commitChartDataEditorEdits;
- (void)forceChartDataEditorToCloseWithSave:(BOOL)arg1;
- (void)dismissChartDataEditor:(id)arg1;
- (double)paddingAboveHalfHeightAtTopOfScreen;
- (BOOL)showEditMenuOnChartInsert;
- (void)insertedDrawableInfoDidFinishDragging:(id)arg1;
- (void)willInsertDrawable;
- (id)drawableFactory;
- (id)mainInteractiveCanvasController;
- (id)rectanglesObscuringView:(id)arg1;
- (void)canvasWillEndEditingToBeginEditingRep:(id)arg1;
- (void)canvasEditorDidChangeSelection:(id)arg1;
- (void)editorDidChangeSelection:(id)arg1;
- (double)autoZoomAnimationDurationForInteractiveCanvasController:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
- (void)interactiveCanvasControllerDidUpdateLayersFromReps:(id)arg1;
@property(readonly, nonatomic) BOOL isPrintingCanvas;
@property(readonly, nonatomic) BOOL isCanvasInteractive;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardWillHideOrUndock:(id)arg1;
- (void)keyboardShowCanceled;
- (void)keyboardWillShowOrDock:(id)arg1;
- (void)setCanvasScrollViewClipsToBoundsForKeyboardAnimation:(BOOL)arg1;
- (float)viewBottomInScreenCoordinates;
- (void)p_willEnterFullScreen:(id)arg1;
- (void)zoomOutAnimated:(BOOL)arg1;
- (void)p_zoomOutForCurrentSelection;
@property(readonly, nonatomic) long long modalToolbarTitleBaselineOffsetBarMetrics;
@property(readonly, nonatomic) double modalToolbarTitleBaselineOffset;
@property(readonly, nonatomic) NSString *closeDocumentButtonTitle;
- (void)hideSharedUIPanelsForReadMode;
- (void)p_setDocumentMode:(long long)arg1 animated:(BOOL)arg2 dismissOnTop:(BOOL)arg3;
@property(readonly, nonatomic) BOOL allowImagePickerToAppear;
@property(readonly, nonatomic) BOOL allowTextEditingToBegin;
@property(readonly, nonatomic) BOOL allowEditMenuToAppear;
@property(readonly, nonatomic) CGSize sizeOfScrollViewEnclosingCanvas;
- (CGRect)visibleUnscaledCanvasRectWithoutKeyboard;
- (CGRect)visibleScaledCanvasRectWithoutKeyboard;
- (void)scrollToRect:(CGRect)arg1;
- (BOOL)preserveScrollViewClipping;
- (void)didSetContentViewFrame;
- (void)adjustContentViewFrame;
- (void)adjustScrollViewInsets;
- (id)contentView;
- (BOOL)shouldAdjustContentFrameWhileRotating;
- (BOOL)willChangeContentOffsetIfKeyboardHidden;
- (CGRect)contentFrame;
- (void)p_editingCellDidChange:(id)arg1;
- (BOOL)shouldAutoscrollToSelectionOnContentViewSizeChange;
- (BOOL)tappedCanvasBackgroundAtPoint:(CGPoint)arg1;
- (void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3;
- (void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3;
- (void)setLastDocumentMode:(long long)arg1;
- (long long)lastDocumentMode;
- (long long)defaultDocumentMode;
- (void)setDocumentMode:(long long)arg1 animated:(BOOL)arg2 dismissOnTop:(BOOL)arg3;
- (void)setDocumentMode:(long long)arg1 animated:(BOOL)arg2;
- (NSRange)visibleRootIndexRange;
- (id)childViewControllerForStatusBarStyle;
- (void)interactiveCanvasController:(id)arg1 willAnimateToViewScale:(double)arg2 withDuration:(double)arg3 unscaledContentOffset:(CGPoint)arg4;
- (double)toolbarTextButtonSpaceWidth;
- (double)toolbarSpaceWidth;
- (BOOL)useToolBarHeightForSetDocumentMode;
- (id)alternativeOpenCloseDocumentAnimationView;
- (double)externalKeyboardHideMinDuration;
- (void)didStopLaunchDocumentAnimation;
- (void)didStopCloseDocumentAnimation;
- (void)performCloseDocumentAnimation;
- (void)prepareCloseDocumentAnimation;
- (void)didStopOpenDocumentAnimation;
- (void)performOpenDocumentAnimation;
- (void)prepareOpenDocumentAnimation;
- (id)openCloseAnimationAlternativeView;
- (CGRect)openCloseAnimationCanvasFrame;
- (void)didReceiveMemoryWarning;
- (void)p_deregisterForNotifications;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)deRegisterForCanvasEditorNotifications;
- (void)registerForCanvasEditorNotifications;
- (CGRect)rectForPopoverFromToolbarButton:(id)arg1;
- (double)rightToolbarItemsInset;
- (double)leftToolbarItemsInset;
@property(readonly, nonatomic) BOOL displaySharingButton;
- (id)closeDocumentButton;
- (void)willSetupApplicationToolbar;
- (BOOL)isLayoutBelowApplicationToolbar;
- (id)title;
- (void)viewDidLoad;
- (void)toolsFindReplace;
- (CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1;
- (void)teardown;
- (void)unloadDocument;
- (void)p_teardown;
- (void)loadDocument;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)documentWillCloseAfterError;
- (void)documentWillClose;
- (BOOL)p_shouldZoomOutForCurrentSelection;
- (BOOL)p_shouldZoomOutFromTable;
- (void)closeDocumentPressed;
@property(readonly, nonatomic) double viewHeaderHeight;
- (void)setNavigatorHiddenDefault:(BOOL)arg1;
- (BOOL)navigatorHiddenDefault;
- (void)showPlaceholderTools:(id)arg1;
- (void)popoverController:(id)arg1 learnMoreAPDIDTapped:(id)arg2;
- (BOOL)popoverController:(id)arg1 shouldReceiveOutsideTouchAtLocation:(CGPoint)arg2 inView:(id)arg3;
- (void)popoverControllerDidDismissPopoverBasedViewController:(id)arg1;
- (void)showInsertPopoverFromRect:(CGRect)arg1 popoverType:(int)arg2 withDoneButton:(BOOL)arg3;
- (void)p_restoreTextSelectionAfterModalDismiss;
- (double)mainToolsMenuMinimumHeight;
- (BOOL)teardownAppUIForDocumentManagerAction;
- (void)backgroundInit;
- (void)p_backgroundInit;
- (void)p_startBackgroundInit;
- (void)navigatePlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(NSUInteger)arg3;
- (void)abandonDocument;
- (void)didReplaceDocument;
- (void)willReplaceDocument;
- (void)setDocumentUnloaded;
@property(readonly, retain, nonatomic) TSADocumentRoot *documentRoot;
@property(retain, nonatomic) TSAInteractiveCanvasController *defaultInteractiveCanvasController;
@property(readonly, nonatomic) NSArray *bidiLanguages;
@property(readonly, nonatomic) NSArray *CJKLanguages;
@property(readonly, nonatomic) NSArray *listLanguages;
- (id)p_arrayByAddingLanguage:(id)arg1 toArray:(id)arg2;
@property(readonly, nonatomic) BOOL isBiDiEnabled;
@property(readonly, nonatomic) BOOL isCJKEnabled;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDefaultView;
@property(readonly, nonatomic) TSADebugViewController *debugViewController; // @synthesize debugViewController=_debugViewController;
- (BOOL)inFindReplaceMode;
- (BOOL)isInspectorVisible;
- (BOOL)zoomOnSelectionChange:(id)arg1;
- (BOOL)inPrintPreviewMode;
- (BOOL)isKeyboardUp;
@property(readonly, nonatomic) BOOL chartDataEditorShowing;
@property(readonly, nonatomic) BOOL isCanvasFullScreen;

@end
