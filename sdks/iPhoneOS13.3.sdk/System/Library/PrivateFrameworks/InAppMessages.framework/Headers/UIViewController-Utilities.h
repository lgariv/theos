//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (Utilities)
+ (void)presentViewControllerOnTopmostViewController:(id)arg1 fromViewController:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)topmostViewControllerForViewController:(id)arg1;
+ (void)_replaceMethodImplementation:(Class)arg1 originalSelector:(SEL)arg2 swizzledSelector:(SEL)arg3;
+ (void)replaceViewMethodsImplementation;
- (void)dismissAnimated;
- (void)iam_viewWillDisappear:(BOOL)arg1;
- (void)iam_viewDidAppear:(BOOL)arg1;
@end
