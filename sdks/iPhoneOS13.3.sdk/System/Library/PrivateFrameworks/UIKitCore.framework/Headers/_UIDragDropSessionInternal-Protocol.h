//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDragDropSessionPrivate-Protocol.h>

@class NSArray;
@protocol _UIDraggingInfo;

@protocol _UIDragDropSessionInternal <_UIDragDropSessionPrivate>
@property(readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
- (void)_itemsNeedUpdate:(NSArray *)arg1;
- (id <_UIDraggingInfo>)_internalSession;
@end

