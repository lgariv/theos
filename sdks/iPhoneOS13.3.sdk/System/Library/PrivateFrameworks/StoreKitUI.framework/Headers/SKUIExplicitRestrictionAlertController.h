//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject
{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

// - (void).cxx_destruct;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithClientContext:(id)arg1;

@end
