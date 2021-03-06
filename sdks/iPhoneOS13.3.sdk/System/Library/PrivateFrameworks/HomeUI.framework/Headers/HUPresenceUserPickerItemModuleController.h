//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>


@protocol HUPresenceUserPickerItemModuleControllerDelegate;

@interface HUPresenceUserPickerItemModuleController : HUItemTableModuleController <UITextViewDelegate>
{
    id <HUPresenceUserPickerItemModuleControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HUPresenceUserPickerItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
- (id)_showAlertForConfirmationPrompt:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;

@end

