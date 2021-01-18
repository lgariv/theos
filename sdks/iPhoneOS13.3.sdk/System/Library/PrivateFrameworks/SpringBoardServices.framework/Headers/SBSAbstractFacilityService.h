//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class SBSServiceFacilityClient;
@protocol OS_dispatch_queue;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable>
{
    SBSServiceFacilityClient *_client;
}

+ (Class)serviceFacilityClientClass;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) SBSServiceFacilityClient *client;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
