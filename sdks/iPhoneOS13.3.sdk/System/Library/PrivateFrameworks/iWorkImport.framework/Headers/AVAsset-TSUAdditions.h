//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TSUAdditions)
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_playableKeysWithKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
- (BOOL)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
@property(readonly, nonatomic) BOOL tsu_isPlayable;
@property(readonly, nonatomic) CGSize naturalSizeWithPreferredTransforms;
@end

