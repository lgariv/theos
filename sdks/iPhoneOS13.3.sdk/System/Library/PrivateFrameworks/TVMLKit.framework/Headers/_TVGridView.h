//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView
{
    BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
    _TVCollectionViewFlowLayout *_gridFlowLayout;
}

@property(retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout; // @synthesize gridFlowLayout=_gridFlowLayout;
// - (void).cxx_destruct;
- (CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

