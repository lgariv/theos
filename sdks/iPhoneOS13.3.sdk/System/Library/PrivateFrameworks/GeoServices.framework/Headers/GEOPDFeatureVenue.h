//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDVenueContainer, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureVenue : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buildings;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_buildings:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buildings:1;
        unsigned int wrote_levels:1;
        unsigned int wrote_venueContainer:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)levelType;
+ (Class)buildingType;
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
- (id)levelAtIndex:(NSUInteger)arg1;
- (NSUInteger)levelsCount;
- (void)_addNoFlagsLevel:(id)arg1;
- (void)addLevel:(id)arg1;
- (void)clearLevels;
@property(retain, nonatomic) NSMutableArray *levels;
- (void)_readLevels;
- (id)buildingAtIndex:(NSUInteger)arg1;
- (NSUInteger)buildingsCount;
- (void)_addNoFlagsBuilding:(id)arg1;
- (void)addBuilding:(id)arg1;
- (void)clearBuildings;
@property(retain, nonatomic) NSMutableArray *buildings;
- (void)_readBuildings;
@property(retain, nonatomic) GEOPDVenueContainer *venueContainer;
@property(readonly, nonatomic) BOOL hasVenueContainer;
- (void)_readVenueContainer;
- (id)initWithData:(id)arg1;
- (id)init;

@end
