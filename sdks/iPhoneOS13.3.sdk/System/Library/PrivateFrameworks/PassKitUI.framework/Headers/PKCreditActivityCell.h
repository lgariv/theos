//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKDashboardCreditAccountItem, PKSpendingSummaryChartView, UIFont, UILabel;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell
{
    UILabel *_labelTitle;
    NSString *_title;
    BOOL _isCompactUI;
    BOOL _useAccssibilityLayout;
    PKDashboardCreditAccountItem *_item;
    PKSpendingSummaryChartView *_chartView;
    UIFont *_titleFont;
}

@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) BOOL useAccssibilityLayout; // @synthesize useAccssibilityLayout=_useAccssibilityLayout;
@property(readonly, nonatomic) PKSpendingSummaryChartView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PKDashboardCreditAccountItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_createSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

