//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>
#import <AppSupportUI/_UIMultilineTextContentSizing-Protocol.h>

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing>
{
    struct _NUIBoxArrangement _arrangement;
    CDStruct_e0b918f9 _boxFlags;
}

+ (id)containerBoxViewWithArrangedSubviews:(id)arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)debugDictionary;
- (id)arrangedDescription;
- (void)layoutArrangedSubviewsInBounds:(CGRect)arg1;
- (CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1;
- (BOOL)setNeedsInvalidation:(long long)arg1;
- (void)populateBoxArrangementCells:(vector_eb457d57 )arg1;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1 inAxis:(long long)arg2;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;

@end
