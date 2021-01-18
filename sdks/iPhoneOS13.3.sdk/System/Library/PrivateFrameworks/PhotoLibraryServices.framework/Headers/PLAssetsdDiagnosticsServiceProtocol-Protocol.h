//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSXPCListenerEndpoint, PLXPCObject;

@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)getPhotosXPCEndpointWithReply:(void (^)(BOOL, NSXPCListenerEndpoint *, NSError *))arg1;
- (void)incompleteRestoreProcessesWithReply:(void (^)(NSArray *))arg1;
- (void)dumpPhotoAnalysisStatusWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
@end
