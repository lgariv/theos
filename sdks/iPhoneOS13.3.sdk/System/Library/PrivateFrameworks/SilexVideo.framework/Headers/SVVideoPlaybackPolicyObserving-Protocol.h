//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVideoPlaybackPolicy;

@protocol SVVideoPlaybackPolicyObserving <NSObject>
@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> policy;
@property(copy, nonatomic, setter=onAllowedStateChange:) id /* CDUnknownBlockType */ allowedStateChangeBlock;
@property(copy, nonatomic, setter=onRequestStateChange:) id /* CDUnknownBlockType */ requestStateChangeBlock;
@end
