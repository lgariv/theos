//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE, NSArray, NSMutableArray;
@protocol TXRBufferAllocator;

@interface TXRTexture : NSObject <NSCopying>
{
    id <TXRBufferAllocator> _bufferAllocator;
    NSMutableArray *_mipmapLevels;
    MISSING_TYPE *_dimensions;
    BOOL _cubemap;
    NSUInteger _pixelFormat;
    NSUInteger _alphaInfo;
}

@property(readonly, nonatomic) NSUInteger alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(readonly, nonatomic) NSUInteger pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) BOOL cubemap; // @synthesize cubemap=_cubemap;
@property(readonly, nonatomic) MISSING_TYPE *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) NSArray *mipmapLevels; // @synthesize mipmapLevels=_mipmapLevels;
// - (void).cxx_destruct;
- (id)copyWithPixelFormat:(NSUInteger)arg1 options:(id)arg2 bufferAllocator:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)generateMipmapsForRange:(NSRange)arg1 filter:(NSUInteger)arg2 error:(id )arg3;
- (void)reformat:(NSUInteger)arg1 gammaDegamma:(BOOL)arg2 bufferAllocator:(id)arg3 error:(id )arg4;
- (BOOL)exportToURL:(id)arg1 error:(id )arg2;
- (id)exportToAssetCatalogWithName:(id)arg1 location:(id)arg2 error:(id )arg3;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id )arg4;
- 
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id )arg4;
- (id)initWithDataSourceProvider:(id)arg1;

@end
