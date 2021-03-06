//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_events;
    CLPMeta *_meta;
}

+ (Class)eventsType;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)eventsAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;

@end

