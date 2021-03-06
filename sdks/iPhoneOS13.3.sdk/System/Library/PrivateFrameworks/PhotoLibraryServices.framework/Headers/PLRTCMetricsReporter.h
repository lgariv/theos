//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLMetricsReporter-Protocol.h>

@class PGManager, RTCReporting, RTCSecureHierarchyToken;

@interface PLRTCMetricsReporter : NSObject <PLMetricsReporter>
{
    RTCSecureHierarchyToken *_reportingSessionToken;
    RTCReporting *_reportingSession;
    PGManager *_graphManager;
}

@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property(retain, nonatomic) RTCReporting *reportingSession; // @synthesize reportingSession=_reportingSession;
@property(retain, nonatomic) RTCSecureHierarchyToken *reportingSessionToken; // @synthesize reportingSessionToken=_reportingSessionToken;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)reportMetricsEvents:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

