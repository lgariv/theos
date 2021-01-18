//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSimpleInteractionCoordinator.h>

#import <HomeUI/HUQuickControlColorViewInteractionDelegate-Protocol.h>

@class HFColorPalette;

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate>
{
    BOOL _hasPendingColorPaletteChangeDelegateNotification;
    HFColorPalette *_colorPalette;
}

@property(nonatomic) BOOL hasPendingColorPaletteChangeDelegateNotification; // @synthesize hasPendingColorPaletteChangeDelegateNotification=_hasPendingColorPaletteChangeDelegateNotification;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
// - (void).cxx_destruct;
- (void)cancelButtonTappedToDismissColorViewController;
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)hideAuxiliaryViewForControlView:(id)arg1;
- (void)controlView:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;
- (id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3;

@end
