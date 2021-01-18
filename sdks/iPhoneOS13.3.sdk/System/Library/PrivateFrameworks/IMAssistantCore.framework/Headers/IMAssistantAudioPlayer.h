//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, NSString;
@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    id <IMAssistantAudioPlayerDelegate> _delegate;
    NSString *_identifier;
    AVAudioPlayer *_player;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)cleanupAudioSession;
- (BOOL)setupAudioSession;
- (long long)playerState;
- (void)stopPlaying;
- (BOOL)startPlayingAudioURL:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;

@end
