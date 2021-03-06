//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    NSMutableArray *_imageIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_imageIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_imageIds:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)imageIdType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)imageIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)imageIdsCount;
- (void)_addNoFlagsImageId:(id)arg1;
- (void)addImageId:(id)arg1;
- (void)clearImageIds;
@property(retain, nonatomic) NSMutableArray *imageIds;
- (void)_readImageIds;
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) BOOL hasComments;
- (void)_readComments;
- (id)initWithData:(id)arg1;
- (id)init;

@end

