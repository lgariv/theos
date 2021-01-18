//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPOffscreenColumn-Protocol.h>

@class TSWPStorage;
@protocol TSWPStyleProvider;

@interface TSWPColumn : NSObject <TSWPOffscreenColumn>
{
    TSWPStorage *_storage;
    CGRect _frameBounds;
    CGAffineTransform _transform;
    NSUInteger _startCharIndex;
    NSUInteger _characterCount;
    NSUInteger _startAnchoredCharIndex;
    NSUInteger _anchoredCharCount;
    NSUInteger _nextWidowPullsDownFromCharIndex;
    double _contentBottom;
    double _erasableContentBottom;
    int _layoutResultFlags;
    NSUInteger _columnIndex;
    NSUInteger _pageNumber;
    NSUInteger _scaleTextPercent;
    id <TSWPStyleProvider> _styleProvider;
    shared_ptr_1a254aea _lineFragmentArray;
    void _paragraphAdornments;
    BOOL _textIsVertical;
}

+ (CGColor )computeSingleColorWithColumns:(id)arg1;
+ (id)columnForCharIndex:(NSUInteger)arg1 eol:(BOOL)arg2 withColumns:(id)arg3;
+ (CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3;
+ (id)pathForHighlightWithRange:(NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2;
+ (id)smartFieldWithAttributeKind:(unsigned int)arg1 inColumnArray:(id)arg2 atPoint:(CGPoint)arg3;
+ (NSUInteger)charIndexForTopicDragAtPoint:(CGPoint)arg1 inColumnsArray:(id)arg2;
+ (NSUInteger)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 leadingEdge:(BOOL )arg7;
+ (NSUInteger)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(CGPoint)arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4;
+ (CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3;
+ (CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
@property(nonatomic) BOOL textIsVertical; // @synthesize textIsVertical=_textIsVertical;
@property(retain, nonatomic) id <TSWPStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) NSUInteger scaleTextPercent; // @synthesize scaleTextPercent=_scaleTextPercent;
@property(nonatomic) NSUInteger pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) NSUInteger columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) int layoutResultFlags; // @synthesize layoutResultFlags=_layoutResultFlags;
@property(nonatomic) double erasableContentBottom; // @synthesize erasableContentBottom=_erasableContentBottom;
@property(nonatomic) double contentBottom; // @synthesize contentBottom=_contentBottom;
@property(nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) NSUInteger anchoredCharCount; // @synthesize anchoredCharCount=_anchoredCharCount;
@property(nonatomic) NSUInteger startAnchoredCharIndex; // @synthesize startAnchoredCharIndex=_startAnchoredCharIndex;
@property(nonatomic) NSUInteger characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) NSUInteger startCharIndex; // @synthesize startCharIndex=_startCharIndex;
@property(nonatomic) CGAffineTransform transformFromWP; // @synthesize transformFromWP=_transform;
@property(nonatomic) CGRect wpBounds; // @synthesize wpBounds=_frameBounds;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)onlyHasAnchoredDrawable;
- (id)singleLinePartitionedInfoAtStart:(BOOL)arg1;
- (id)partitionedLayoutForInfo:(id)arg1;
- (id)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(unsigned int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(NSRange)arg4 rubyGlyphRange:(NSRange)arg5 isCanvasInteractive:(BOOL)arg6 spellChecker:(id)arg7 suppressedMisspellingRange:(NSRange)arg8 blackAndWhite:(BOOL)arg9 dictationInterpretations:(const struct TSWPRangeVector )arg10 autocorrections:(const struct TSWPRangeVector )arg11 markedRange:(NSRange)arg12 markedText:(id)arg13 renderMode:(int)arg14 pageCount:(NSUInteger)arg15 suppressInvisibles:(BOOL)arg16 currentCanvasSelection:(id)arg17;
- (void)renderWithRenderer:(id)arg1 pageCount:(NSUInteger)arg2;
- (struct _TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(CGPoint)arg4 wrapOutset:(CGSize)arg5 wrapMargin:(double)arg6 makeInline:(BOOL)arg7;
- (NSUInteger)charIndexFromWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 outFragment:(const struct TSWPLineFragment )arg4 leadingEdge:(BOOL )arg5;
- (NSUInteger)charIndexForSelectionFromPoint:(CGPoint)arg1 isTail:(BOOL)arg2;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 outFragment:(const struct TSWPLineFragment )arg6 leadingEdge:(BOOL )arg7;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (CGRect)erasableRectForSelectionRange:(NSRange)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id )arg2;
- (id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7;
- (id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4;
- (id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3;
- (id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (id)pMutableRectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 inranges:(id)arg8 outranges:(id )arg9;
- (const struct TSWPLineFragment )pColumnEndingPartitionedLineFragmentInSelectionRange:(NSRange)arg1;
- (id)rectsForSelectionRange:(NSRange)arg1;
- (id)rectsForSelection:(id)arg1;
- (CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4;
- (id)lineSelectionsForSelection:(id)arg1;
@property(readonly, nonatomic) CGRect typographicBoundsForCell;
@property(readonly, nonatomic) CGRect typographicBounds;
- (double)topOfLineAtCharIndex:(NSUInteger)arg1;
- (CGRect)columnRectForRange:(NSRange)arg1;
- (NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg1;
- (CGRect)glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg1 glyphRange:(NSRange)arg2;
- (CGRect)glyphRectForRange:(NSRange)arg1 includingLabel:(BOOL)arg2;
- (CGRect)caretRectForSelection:(id)arg1;
- (NSUInteger)lineIndexForCharIndex:(NSUInteger)arg1 eol:(BOOL)arg2;
- (const struct TSWPLineFragment )lineFragmentForCharIndex:(NSUInteger)arg1 knobTag:(NSUInteger)arg2 selectionType:(int)arg3;
- (const struct TSWPLineFragment )lineFragmentClosestToPoint:(CGPoint)arg1 knobTag:(NSUInteger)arg2;
- (double)horizontalOffsetForCharIndex:(NSUInteger)arg1 lineFragmentIndex:(NSUInteger)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4;
- (CDStruct_50f584da)lineMetricsAtCharIndex:(NSUInteger)arg1 allowEndOfLine:(BOOL)arg2;
- (double)baselineOfLineFragmentAtCharIndex:(NSUInteger)arg1;
- (CDStruct_7660b417)heightInfoOfLineFragmentAtIndex:(NSUInteger)arg1;
- (NSRange)rangeOfLineFragmentAtIndex:(NSUInteger)arg1;
- (BOOL)isEmptyLineFragmentAtIndex:(NSUInteger)arg1;
- (BOOL)isTruncatedLineFragmentAtIndex:(NSUInteger)arg1;
- (double)typographicGlyphExtentOfLineFragmentAtIndex:(NSUInteger)arg1;
- (CGRect)labelBoundsOfLineFragmentAtIndex:(NSUInteger)arg1;
- (CGRect)typographicBoundsOfLineFragmentAtIndex:(NSUInteger)arg1;
- (CGRect)boundsOfLineFragmentAtIndex:(NSUInteger)arg1;
- (void)makeEmpty:(NSUInteger)arg1 layoutResultFlags:(int)arg2;
- (NSUInteger)lineFragmentCountForBaseline:(double)arg1;
- (void)offsetLineFragmentsByPoint:(CGPoint)arg1;
- (void)normalizeLineFragmentOrigins:(CGPoint)arg1;
- (const struct TSWPLineFragment )lineFragmentAtIndex:(NSUInteger)arg1;
- (void)setLineFragmentArray:(const shared_ptr_1a254aea )arg1;
- (const shared_ptr_1a254aea )lineFragmentArray;
@property(readonly, nonatomic) NSUInteger countLines;
@property(readonly, nonatomic) CGAffineTransform transformToWP;
@property(readonly, nonatomic) CGRect frameBounds;
- (void)clearAdornments;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect )arg1;
- (BOOL)requiresGlyphVectorsForHeightMeasurement;
- (double)textHeight;
@property(readonly, nonatomic) double textBottom;
- (CGRect)erasableBounds:(unsigned int)arg1;
- (double)minimumHeightForLayoutOnPage;
- (void)trimFromCharIndex:(NSUInteger)arg1 inTarget:(id)arg2 layoutChore:(struct TSWPLayoutChore )arg3;
- (double)trimToCharIndex:(NSUInteger)arg1 inTarget:(id)arg2;
- (void)trimToCharIndex:(NSUInteger)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3;
- (CGSize)maxSize;
- (void)setStorage:(id)arg1 range:(NSRange)arg2;
- (void)incrementRanges:(long long)arg1;
@property(nonatomic) NSRange anchoredRange;
@property(nonatomic) NSRange range;
- (double)logicalBoundsBottom;
- (double)logicalBoundsTop;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 frameBounds:(CGRect)arg2;

@end
