//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FCHeadlineProviding;

@protocol TSNativeAdDataProviderType
- (void)requestNativeSubscriptionAdWithCompletion:(void (^)(id <NABannerViewProviding>, NSString *, NSString *, NSError *))arg1;
- (void)requestNativeAdCellDataValidatingAgainst:(id <FCHeadlineProviding>)arg1 completion:(void (^)(id <NABannerViewProviding>, id <FCHeadlineProviding>, NSError *))arg2;
@end
