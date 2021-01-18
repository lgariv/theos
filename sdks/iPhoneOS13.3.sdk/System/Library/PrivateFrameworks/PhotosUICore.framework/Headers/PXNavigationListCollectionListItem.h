//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class NSString, PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListItem
{
    BOOL _draggable;
    BOOL _renamable;
    BOOL _expandable;
    BOOL _expanded;
    NSString *_glyphImageName;
    PHCollectionList *_collection;
    long long _indentationLevel;
}

@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) PHCollectionList *collection; // @synthesize collection=_collection;
- (BOOL)isExpandable;
- (BOOL)isRenamable;
- (BOOL)isDraggable;
- (id)glyphImageName;
// - (void).cxx_destruct;
- (id)representedObject;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2;
- (const struct __CFString )aggregateDictionaryKey;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1;

@end
