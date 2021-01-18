//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVAppTemplateImpressionable-Protocol.h>
#import <VideosUI/VUIProductUberBackgroundInterface-Protocol.h>

@class IKViewElement, VUIProductBannerView, VUIProductUberBackgroundView;

__attribute__((visibility("hidden")))
@interface VUIProductBannerViewController : UIViewController <VUIProductUberBackgroundInterface, TVAppTemplateImpressionable>
{
    VUIProductUberBackgroundView *_uberBackgroundView;
    IKViewElement *_viewElement;
    VUIProductBannerView *_bannerView;
}

@property(retain, nonatomic) VUIProductBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIProductUberBackgroundView *uberBackgroundView; // @synthesize uberBackgroundView=_uberBackgroundView;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_configureViewSubviews;
- (void)setBannerOpacity:(double)arg1;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) double topThreshold;
- (void)setUberImageOffset:(double)arg1;
@property(readonly, nonatomic) BOOL isUberLayoutActive;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
