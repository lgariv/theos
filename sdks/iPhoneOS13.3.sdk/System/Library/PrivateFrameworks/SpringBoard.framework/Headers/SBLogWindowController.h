//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SBMainScreenActiveInterfaceOrientationWindow, UITextView;

@interface SBLogWindowController : UIViewController
{
    UITextView *_logTextView;
    SBMainScreenActiveInterfaceOrientationWindow *_logWindow;
}

+ (id)sharedInstanceIfAvailable;
+ (id)sharedInstance;
@property(retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow; // @synthesize logWindow=_logWindow;
@property(retain, nonatomic) UITextView *logTextView; // @synthesize logTextView=_logTextView;
// - (void).cxx_destruct;
- (void)hide;
- (void)show;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

