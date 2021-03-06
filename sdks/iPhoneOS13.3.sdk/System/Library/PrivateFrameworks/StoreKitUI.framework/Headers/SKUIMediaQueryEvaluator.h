//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;
@protocol OS_dispatch_source, SKUIMediaQueryDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMediaQueryEvaluator : NSObject
{
    NSMapTable *_cachedFeatureResults;
    id <SKUIMediaQueryDelegate> _delegate;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}

+ (void)initialize;
+ (void)registerFeatureClass:(Class)arg1;
@property(nonatomic) __weak id <SKUIMediaQueryDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_delegateValuesForKeys:(id)arg1;
- (void)_featureDidChangeNotification:(id)arg1;
- (void)reloadData;
- (BOOL)evaluateMediaQuery:(id)arg1;
- (void)dealloc;
- (id)init;

@end

