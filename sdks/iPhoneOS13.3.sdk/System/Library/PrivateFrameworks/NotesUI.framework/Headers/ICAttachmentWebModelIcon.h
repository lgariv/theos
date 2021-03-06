//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject
{
    BOOL _scaleImageToIconSize;
    NSURL *_url;
    double _scale;
    UIImage _image;
    CGSize _size;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(nonatomic) BOOL scaleImageToIconSize; // @synthesize scaleImageToIconSize=_scaleImageToIconSize;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithFallbackURL:(id)arg1 withSize:(CGSize)arg2;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(CGSize)arg2;

@end

