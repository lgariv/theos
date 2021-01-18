//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSPDataManager, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject
{
    int _didCull;
    long long _identifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    array_019f9a10 _digest;
    BOOL _isDeallocating;
}

+ (BOOL)updateDigest:(array_019f9a10 )arg1 withProtobufString:(const basic_string_a1f69cfb )arg2;
+ (id)requiredAVAssetOptions;
+ (id)cullingListeners;
+ (void)removeCullingListener:(id)arg1;
+ (void)addCullingListener:(id)arg1;
+ (id)cullingListenersQueue;
+ (id)null;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2;
+ (id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 useFileCoordination:(BOOL)arg3 context:(id)arg4;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isStorageInPackage:(id)arg1;
- (const array_019f9a10 )digest;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2;
@property(retain, nonatomic) id <TSPDataStorage> storage;
- (id)initWithIdentifier:(long long)arg1 digest:(const array_019f9a10 )arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
@property(readonly, nonatomic) NSUInteger encodedLength;
- (BOOL)isLengthLikelyToBeGreaterThan:(NSUInteger)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id )arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)addDownloadObserver:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) BOOL needsDownload;
- (void)performInputStreamReadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)performIOChannelReadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
@property(readonly, nonatomic) TSPObjectContext *context;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
@property(readonly, nonatomic) BOOL isExternalData;
@property(readonly, nonatomic) BOOL isApplicationData;
@property(readonly, nonatomic) BOOL isReadable;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *filename;
- (id)AVAssetWithOptions:(id)arg1;
- (id)AVAsset;
- (CGImage )newCGImage;
- (CGImageSource )newCGImageSource;
- (CGDataProvider )newCGDataProvider;
- (id)NSData;
- (id)bookmarkData;
- (void)willCull;
- (void)dealloc;

@end
