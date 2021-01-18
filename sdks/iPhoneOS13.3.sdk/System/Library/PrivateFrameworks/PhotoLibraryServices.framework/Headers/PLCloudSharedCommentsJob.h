//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob
{
    long long _jobType;
    NSArray *_msASComments;
    NSString *_commentGUID;
    NSString *_assetGUID;
    NSString *_albumGUID;
    NSDictionary *_mstreamdInfoDictionary;
}

+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)assetsdLocallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)publishCommentToServer:(id)arg1;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(retain, nonatomic) NSString *assetGUID; // @synthesize assetGUID=_assetGUID;
@property(retain, nonatomic) NSString *commentGUID; // @synthesize commentGUID=_commentGUID;
@property(retain, nonatomic) NSArray *msASComments; // @synthesize msASComments=_msASComments;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
// - (void).cxx_destruct;
- (void)executeDeleteCommentFromServer;
- (void)executePublishCommentToServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end
