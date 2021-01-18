//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    struct {
        unsigned int has_directionsResponseIndex:1;
        unsigned int has_directionsResponseSuggestedRoutesIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (void)setClusteredRouteRideSelections:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(NSUInteger)arg1;
- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)clearClusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned int clusteredRouteRideSelections;
@property(readonly, nonatomic) NSUInteger clusteredRouteRideSelectionsCount;
@property(nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex;
@property(nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property(nonatomic) BOOL hasDirectionsResponseIndex;
@property(nonatomic) unsigned int directionsResponseIndex;
- (void)dealloc;

@end
