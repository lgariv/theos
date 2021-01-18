//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFSlotTemplateTextStorageDelegate-Protocol.h>
#import <WorkflowUI/WFSlotTemplateTypingTextViewDelegate-Protocol.h>
#import <WorkflowUI/WFTextAttachmentInteractionDelegate-Protocol.h>

@class NSArray, NSParagraphStyle, NSTextContainer, UIColor, UIFont, WFSlotIdentifier, WFSlotTemplateLayoutManager, WFSlotTemplateTextStorage, WFSlotTemplateTypingTextView, WFTextAttachmentInteraction;
@protocol WFSlotTemplateViewDelegate;

@interface WFSlotTemplateView : UIView <WFSlotTemplateTextStorageDelegate, WFSlotTemplateTypingTextViewDelegate, UIGestureRecognizerDelegate, WFTextAttachmentInteractionDelegate>
{
    BOOL _enabled;
    BOOL _typingAllowsMultipleLines;
    id <WFSlotTemplateViewDelegate> _delegate;
    double _horizontalPadding;
    WFSlotIdentifier *_typingSlotIdentifier;
    NSTextContainer *_textContainer;
    WFSlotTemplateTextStorage *_textStorage;
    WFSlotTemplateLayoutManager *_layoutManager;
    WFTextAttachmentInteraction *_attachmentInteraction;
    WFSlotTemplateTypingTextView *_typingTextView;
    NSTextContainer *_typingTextContainer;
    WFSlotTemplateLayoutManager *_typingLayoutManager;
    WFSlotTemplateTextStorage *_typingTextStorage;
    WFTextAttachmentInteraction *_typingAttachmentInteraction;
    NSUInteger _lastLayoutManagerLineCount;
    NSArray *_accessibilityElements;
}

+ (double)heightForWidth:(double)arg1 withContents:(id)arg2 horizontalPadding:(double)arg3 font:(id)arg4 unpopulatedFont:(id)arg5 paragraphStyle:(id)arg6;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic) NSUInteger lastLayoutManagerLineCount; // @synthesize lastLayoutManagerLineCount=_lastLayoutManagerLineCount;
@property(nonatomic) BOOL typingAllowsMultipleLines; // @synthesize typingAllowsMultipleLines=_typingAllowsMultipleLines;
@property(retain, nonatomic) WFTextAttachmentInteraction *typingAttachmentInteraction; // @synthesize typingAttachmentInteraction=_typingAttachmentInteraction;
@property(retain, nonatomic) WFSlotTemplateTextStorage *typingTextStorage; // @synthesize typingTextStorage=_typingTextStorage;
@property(retain, nonatomic) WFSlotTemplateLayoutManager *typingLayoutManager; // @synthesize typingLayoutManager=_typingLayoutManager;
@property(retain, nonatomic) NSTextContainer *typingTextContainer; // @synthesize typingTextContainer=_typingTextContainer;
@property(retain, nonatomic) WFSlotTemplateTypingTextView *typingTextView; // @synthesize typingTextView=_typingTextView;
@property(retain, nonatomic) WFTextAttachmentInteraction *attachmentInteraction; // @synthesize attachmentInteraction=_attachmentInteraction;
@property(retain, nonatomic) WFSlotTemplateLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) WFSlotTemplateTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) WFSlotIdentifier *typingSlotIdentifier; // @synthesize typingSlotIdentifier=_typingSlotIdentifier;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) __weak id <WFSlotTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)accessibilityShiftFocusBackToView;
- (void)updateAccessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)resetTextView;
- (void)endTyping;
- (void)positionTypingAboveSlot:(id)arg1;
- (void)beginTypingInSlotWithIdentifier:(id)arg1;
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(NSRange)arg3;
- (BOOL)textAttachmentInteraction:(id)arg1 shouldRecognizeTapOnTextAttachment:(id)arg2 inCharacterRange:(NSRange)arg3;
- (id)slotIdentifierForAttachmentInteraction:(id)arg1 characterRange:(NSRange)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)slotTemplateTypingTextViewDidPaste:(id)arg1 withOriginalBlock:(id /* CDUnknownBlockType */)arg2;
- (void)slotTemplateTypingTextViewDidCopy:(id)arg1 withOriginalBlock:(id /* CDUnknownBlockType */)arg2;
- (void)slotTemplateTypingTextViewDidCut:(id)arg1 withOriginalBlock:(id /* CDUnknownBlockType */)arg2;
- (void)slotTemplateTypingTextViewDidDelete:(id)arg1;
- (void)slotTemplateStorageDidInvalidateDisplay:(id)arg1;
- (void)tintColorDidChange;
- (void)updateTintColorInTextStorage;
- (CGRect)sourceRectForSlot:(id)arg1;
- (CGRect)sourceRectForSlotWithIdentifier:(id)arg1;
- (id)slotAtPoint:(CGPoint)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)performFadeTransition:(id /* CDUnknownBlockType */)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)_deselectSlotAndNotifyDelegate:(BOOL)arg1;
- (void)deselectSlot;
- (void)_selectSlot:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)selectSlotWithIdentifier:(id)arg1;
@property(readonly, nonatomic) WFSlotIdentifier *selectedSlotIdentifier;
- (id)selectedSlot;
- (id)firstSlotIdentifierWithParameterKey:(id)arg1;
- (id)slotWithIdentifier:(id)arg1;
- (BOOL)hasSlotWithIdentifier:(id)arg1;
- (void)setContents:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL extendSlotBackgroundOffEdges;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) UIColor *disabledSlotBackgroundColor;
@property(readonly, nonatomic) UIColor *disabledSlotTitleColor;
- (id)typingParagraphStyleForParagraphStyle:(id)arg1;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *unpopulatedFont;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(CGRect)arg1;

@end
