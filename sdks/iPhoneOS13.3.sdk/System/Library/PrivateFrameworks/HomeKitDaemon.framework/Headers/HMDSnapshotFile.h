//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFOSTransaction, NSDate, NSNumber, NSString;

@interface HMDSnapshotFile : HMFObject <HMFLogging>
{
    BOOL _externalFilePath;
    NSString *_directory;
    NSString *_filePath;
    NSDate *_snapshotTimestamp;
    NSNumber *_slotIdentifier;
    NSNumber *_aspectRatio;
    HMFOSTransaction *_snapshotCATransaction;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFOSTransaction *snapshotCATransaction; // @synthesize snapshotCATransaction=_snapshotCATransaction;
@property(readonly, nonatomic) BOOL externalFilePath; // @synthesize externalFilePath=_externalFilePath;
@property(readonly, nonatomic) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(readonly, nonatomic) NSDate *snapshotTimestamp; // @synthesize snapshotTimestamp=_snapshotTimestamp;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
// - (void).cxx_destruct;
- (BOOL)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(BOOL)arg5 writeBack:(BOOL)arg6;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)updateSlotIdentifier;
- (void)dealloc;
- (id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2;
- (id)setFileData:(id)arg1 snapshotTimestamp:(id)arg2;
- (id)logIdentifier;
- (id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2;
- (id)initWithImageDirectory:(id)arg1;

@end
