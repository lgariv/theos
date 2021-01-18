//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLTPairedSyncState : NSObject
{
    BOOL _initialSyncComplete;
    NSUInteger _state;
}

+ (id)sharedInstance;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isInitialSyncComplete) BOOL initialSyncComplete; // @synthesize initialSyncComplete=_initialSyncComplete;
- (void)leaveState:(NSUInteger)arg1;
- (BOOL)becameSyncUnrestricted:(id)arg1;
- (BOOL)becameTrafficUnrestricted:(id)arg1;
@property(readonly, nonatomic, getter=isTrafficRestricted) BOOL trafficRestricted;
@property(readonly, nonatomic, getter=isSyncRestricted) BOOL syncRestricted;

@end
