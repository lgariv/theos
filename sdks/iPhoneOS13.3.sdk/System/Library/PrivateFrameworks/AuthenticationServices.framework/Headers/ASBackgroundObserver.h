//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface ASBackgroundObserver : NSObject
{
    UIViewController *_viewController;
    id /* CDUnknownBlockType */ _block;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;

@end

