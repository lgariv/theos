//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, PUAssetReference, PUOneUpPresentationHelper, UIImage;

@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
- (CGRect)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 rectForAssetReference:(PUAssetReference *)arg2 cropInsets:(UIEdgeInsets )arg3 contentsRect:(CGRect )arg4;

@optional
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldDisableScroll:(BOOL)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 scrollAssetReferenceToVisible:(PUAssetReference *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldHideAssetReferences:(NSSet *)arg2;
- (UIImage *)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 currentImageForAssetReference:(PUAssetReference *)arg2;
@end
