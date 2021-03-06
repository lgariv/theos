//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal
{
    GKAchievementInternal *_achievement;
}

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;
@property(copy, nonatomic) GKAchievementInternal *achievement; // @synthesize achievement=_achievement;
- (id)titleText;
- (NSUInteger)type;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)dealloc;

@end

