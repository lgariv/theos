//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;

@protocol GEOTileDecoder <NSObject>
- (id)decodeTile:(NSData *)arg1 forKey:(const struct _GEOTileKey )arg2;
- (BOOL)canDecodeTile:(const struct _GEOTileKey )arg1 quickly:(BOOL )arg2;
@end
