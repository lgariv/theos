//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying>
{
    unsigned int _modelVersion;
    int _offset;
    BOOL _dateIsCorrect;
    BOOL _didRegexTrigger;
    BOOL _isFromCongratulation;
    struct {
        unsigned int modelVersion:1;
        unsigned int offset:1;
        unsigned int dateIsCorrect:1;
        unsigned int didRegexTrigger:1;
        unsigned int isFromCongratulation:1;
    } _has;
}

@property(nonatomic) BOOL didRegexTrigger; // @synthesize didRegexTrigger=_didRegexTrigger;
@property(nonatomic) unsigned int modelVersion; // @synthesize modelVersion=_modelVersion;
@property(nonatomic) BOOL isFromCongratulation; // @synthesize isFromCongratulation=_isFromCongratulation;
@property(nonatomic) BOOL dateIsCorrect; // @synthesize dateIsCorrect=_dateIsCorrect;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsOffset:(id)arg1;
- (id)offsetAsString:(int)arg1;
@property(nonatomic) BOOL hasOffset;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) BOOL hasDidRegexTrigger;
@property(nonatomic) BOOL hasModelVersion;
@property(nonatomic) BOOL hasIsFromCongratulation;
@property(nonatomic) BOOL hasDateIsCorrect;

@end
