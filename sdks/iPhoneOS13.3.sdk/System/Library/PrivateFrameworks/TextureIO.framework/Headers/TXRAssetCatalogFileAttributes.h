//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXRAssetCatalogFileAttributes : NSObject
{
    CGColorSpace _colorSpace;
    unsigned char _exifOrientation;
    NSUInteger _fileFormat;
}

@property(nonatomic) NSUInteger fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) unsigned char exifOrientation; // @synthesize exifOrientation=_exifOrientation;
- (id)init;
@property(nonatomic) CGColorSpace colorSpace;

@end

