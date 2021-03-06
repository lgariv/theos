//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFScrollableStaticWallpaperView.h>

#import <SpringBoardFoundation/ISPlayerViewDelegate-Protocol.h>
#import <SpringBoardFoundation/SBFIrisWallpaperView-Protocol.h>

@class AVAsset, ISPlayerView, NSURL;
@protocol SBFIrisWallpaperViewDelegate;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, ISPlayerViewDelegate, SBFIrisWallpaperView>
{
    AVAsset *_video;
    ISPlayerView *_playerView;
    long long _playbackState;
    id <SBFIrisWallpaperViewDelegate> _irisDelegate;
    double _stillTimeInVideo;
}

@property(readonly, nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(nonatomic) __weak id <SBFIrisWallpaperViewDelegate> irisDelegate; // @synthesize irisDelegate=_irisDelegate;
// - (void).cxx_destruct;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *videoFileURL;
- (id)_newImageView;
- (id)irisGestureRecognizer;
@property(readonly, nonatomic) BOOL isIrisInteracting;
@property(readonly, nonatomic) long long irisPlaybackState;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 wallpaperVideo:(id)arg3 variant:(long long)arg4;

@end

