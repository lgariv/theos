//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject
{
    _PFWeakContainerSentenal *_sentenal;
    id _nilNotificationDelegate;
}

- (void)weakReferenceBecameNil;
- (void)setNilNotificationDelegate:(id)arg1;
- (void)stopTrackingWeakObjectDealloc:(id)arg1;
- (void)trackWeakObjectDealloc:(id)arg1;
- (BOOL)isTrackingWeakObjectDealloc:(id)arg1;
- (void)dealloc;
- (id)init;

@end

