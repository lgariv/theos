//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPGraphicObject.h>

__attribute__((visibility("hidden")))
@interface CPImage : CPGraphicObject
{
    struct CPPDFImage imageData;
    BOOL renderedBoundsComputed;
}

- (BOOL)isVisible;
- (long long)zOrder;
- (void)accept:(id)arg1;
- (void)recomputeRenderedBounds;
- (CGRect)bounds;
- (CGRect)renderedBounds;
- (struct CPPDFImage )imageData;
- (id)initWithBounds:(CGRect)arg1;
- (id)initWithPDFImage:(struct CPPDFImage )arg1;

@end

