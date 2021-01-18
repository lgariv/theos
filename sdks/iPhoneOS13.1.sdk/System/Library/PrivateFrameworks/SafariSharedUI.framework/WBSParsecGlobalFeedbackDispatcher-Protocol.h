//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSDictionary;

@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
- (void)sendCrowdsourcedAutoFillFeedback:(NSDictionary *)arg1 forQueryID:(long long)arg2;

@optional
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(_Bool)arg1;
- (void)sendWindowMiniaturizeByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendAppLaunchFeedback;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
@end
