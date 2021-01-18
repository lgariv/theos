//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBFeatureManager : NSObject
{
    BOOL _offlineReadingListAvailable;
    BOOL _favoritesFolderSelectionShouldSync;
    long long _accessLevel;
}

+ (id)sharedFeatureManager;
@property(readonly, nonatomic) BOOL favoritesFolderSelectionShouldSync; // @synthesize favoritesFolderSelectionShouldSync=_favoritesFolderSelectionShouldSync;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
- (void)_updateToAccessLevel:(long long)arg1;
- (id)init;

@end
