//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;
}

- (BOOL)canBecomeFirstResponder;
- (void)clearBackReference;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 photoTileController:(id)arg2;

@end

