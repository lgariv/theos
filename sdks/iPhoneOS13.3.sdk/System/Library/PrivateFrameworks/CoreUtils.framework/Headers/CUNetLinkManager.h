//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUNetLinkManager : NSObject
{
    NSMutableSet _endpoints;
    unsigned int _endpointChanges;
    BOOL _hasIPv4Endpoint;
    BOOL _hasIPv6Endpoint;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_pollTimer;
    int _probeSocketV4;
    NSObject<OS_dispatch_source> *_probeSourceV4;
    int _probeSocketV6;
    NSObject<OS_dispatch_source> *_probeSourceV6;
    unsigned int _reReachableCount;
    unsigned int _rxCount;
    unsigned int _txCount;
    unsigned int _txErrors;
    struct LogCategory _ucat;
    unsigned int _unreachableCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)_monitorSendPacketToEndpoint:(id)arg1;
- (void)_monitorReadPacket:(int)arg1;
- (void)_monitorSetupSocket:(int)arg1;
- (void)_monitorEnsureStopped;
- (void)_monitorEnsureStarted;
- (void)_updateEndpoint:(id)arg1 state:(int)arg2;
- (void)_updateNDP;
- (void)_updateARP;
- (void)_updateEndpoints;
- (void)_update;
- (void)removeEndpoint:(id)arg1;
- (void)addEndpoint:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

