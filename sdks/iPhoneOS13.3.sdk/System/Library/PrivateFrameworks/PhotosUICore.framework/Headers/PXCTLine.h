//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow, NSString, PXCTFrame;

@interface PXCTLine : NSObject
{
    BOOL _prepared;
    double _width;
    CGRect _imageBounds;
    BOOL _truncated;
    BOOL _endOfString;
    NSString *_string;
    const struct __CTLine _line;
    PXCTFrame *_frame;
    NSAttributedString *_referenceAttributedString;
    double _ascent;
    double _descent;
    CGContext _context;
    NSShadow *_shadow;
    NSRange _stringRange;
    CGPoint _origin;
    CGAffineTransform _transform;
}

@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) CGContext context; // @synthesize context=_context;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(readonly, nonatomic) NSAttributedString *referenceAttributedString; // @synthesize referenceAttributedString=_referenceAttributedString;
@property(readonly, nonatomic) __weak PXCTFrame *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) CGPoint origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) const struct __CTLine line; // @synthesize line=_line;
@property(readonly, nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic, getter=isEndOfString) BOOL endOfString; // @synthesize endOfString=_endOfString;
@property(readonly, nonatomic, getter=isTruncated) BOOL truncated; // @synthesize truncated=_truncated;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) NSRange stringRange; // @synthesize stringRange=_stringRange;
// - (void).cxx_destruct;
- (id)description;
- (void)_transformBy:(CGAffineTransform)arg1;
- (void)scaleVerticallyBy:(double)arg1;
- (void)scaleBy:(double)arg1;
- (void)translateVerticallyBy:(double)arg1;
- (void)translateHorizontallyBy:(double)arg1;
@property(readonly, nonatomic) CGRect imageBounds;
@property(readonly, nonatomic) CGRect contentBounds;
@property(readonly, nonatomic) CGPoint textPosition;
@property(readonly, nonatomic) double descentPosition;
@property(readonly, nonatomic) double baselinePosition;
@property(readonly, nonatomic) double ascentPosition;
@property(readonly, nonatomic) double width;
- (const CGPath )createPath;
- (void)draw;
- (void)prepare;
- (void)dealloc;
- (id)initWithLine:(struct __CTLine )arg1 origin:(CGPoint)arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(BOOL)arg5;
- (id)init;

@end
