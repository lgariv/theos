//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIBoundingPath : NSObject <NSSecureCoding>
{
    id <UICoordinateSpace> _coordinateSpace;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
// - (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)_imageRepresentation;
- (CGRect)_rectTuckedAgainstEdge:(NSUInteger)arg1 ofBoundingRect:(CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4;
- (CGRect)_rectTuckedInCorner:(NSUInteger)arg1 ofBoundingRect:(CGRect)arg2 withSize:(CGSize)arg3 minimumPadding:(double)arg4;
- (CGRect)_largestInscribedRectInBoundingRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3;
- (CGRect)_inscribedRectInBoundingRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(NSUInteger)arg3;
- (CGRect)_rectTuckedAgainstEdge:(NSUInteger)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (CGRect)_rectTuckedInCorner:(NSUInteger)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3;
- (CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(NSUInteger)arg3 withOptions:(NSUInteger)arg4;
@property(readonly, nonatomic) BOOL isNonRectangular;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (BOOL)validateForCoordinateSpace;
- (id)initWithCoordinateSpace:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
