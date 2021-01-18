//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TPDocumentRoot;
@protocol TSWPFootnoteMarkProvider;

__attribute__((visibility("hidden")))
@interface TPFootnoteLayoutController : NSObject
{
    TPDocumentRoot *_documentRoot;
    BOOL _bumpedDocumentEndnotesForPageBreak;
}

// - (void).cxx_destruct;
- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(NSRange)arg1;
- (id)p_layoutForFootnoteReferenceStorage:(id)arg1;
- (NSUInteger)p_layoutFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 measure:(BOOL)arg4 inflating:(BOOL)arg5;
- (void)removeDeletedFootnoteInContainer:(id)arg1;
- (NSRange)footnoteLayoutRangeForPageCharRange:(NSRange)arg1;
- (NSRange)endnoteRangeForSectionCharRange:(NSRange)arg1 isLastSection:(BOOL)arg2 sectionHint:(id)arg3;
- (void)inflateFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2;
- (NSRange)layOutFootnotesFromIndex:(NSUInteger)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 pageCharRange:(NSRange)arg4 sectionCharRange:(NSRange)arg5 isLastSection:(BOOL)arg6 sectionHint:(id)arg7 pageHintIndex:(NSUInteger)arg8;
@property(readonly, nonatomic) __weak id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
- (id)initWithDocumentRoot:(id)arg1;

@end
