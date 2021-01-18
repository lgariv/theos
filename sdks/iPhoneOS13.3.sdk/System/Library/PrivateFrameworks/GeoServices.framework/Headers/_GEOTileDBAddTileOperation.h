//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOTileDBWriteOperation-Protocol.h>

@class GEOTileData, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;
    unsigned int _tileSet;
    GEOTileData *_data;
    NSString *_ETag;
    unsigned char _reason;
}

@property(readonly, nonatomic) unsigned char reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)dataForKey:(const struct _GEOTileKey )arg1 ETag:(id )arg2 originalLoadReason:(unsigned char )arg3 isKnownNotToExist:(BOOL )arg4;
- (BOOL)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;
- (BOOL)canIncreaseDataSizeInDB;
@property(readonly, nonatomic) NSUInteger sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey key;
- (id)initWithTileKey:(const struct _GEOTileKey )arg1 tileSet:(unsigned int)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5;

@end
