//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationServerHarmonyDelegate-Protocol.h>

@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>
{
}

+ (id)sharedInstance;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
